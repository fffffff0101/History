# 어셈블리 6월 7일

### 1. 함수
- printf를 예시로 들면, 안에 ','로 구별되는 매개변수들이 stack에 들어간다.
- 근데 stack에 들어가는 만큼, 거꾸로 집어넣어줘야 한다.

```C
#include <stdio.h>

int main(){
    printf("%d %d %d %s\n", 1, 10, 100, "Hello, World!");
    return 0;
}
```

```asm
PUSH "Hello, World!"
PUSH 64
PUSH A
PUSH 1
PUSH "%d %d %d %s\n"
```

---

### 2. 리버싱 예제 문제 : CrackMe3
- 실행시켜보면 CreateFileA와 GetFileSize를 호출한다.
    - CALL <JMP.&KERNEL32.CreateFileA>
    - ...
    - CALL <JMP.&KERNEL32.GetFileSize>
    - ...
- CreateFileA의 Mode가 OPEN_EXISTING이고 파일의 이름이 abex.l2c이다.
    - PUSH 3
    - ...
    - PUSH "abex.l2c"
- 그리고 GetFileSize의 반환값은 EAX에 저장, 이를 18바이트와 비교한다.
    - CMP EAX, 0x12
- abex.l2c의 파일 크기를 18바이트로 만들어주기 위해선, ascii 18개면 된다.
- 18바이트를 만들고 저장했더니, 문제가 풀렸다.

---

### 3. 리버싱 예제 문제 : Example1
- 실행시키면 10번의 주사위를 던진 결과가 나온다.
- 그래서 그 로직을 살펴보니 다음과 같은 어셈블리였다.

```asm
CALL EDI
CDQ
IDIV EBX
INC EDX
PUSH EDX
PUSH ESI
PUSH "%d번째 주사위의 눈 : %d\n"
CALL printf
INC ESI
ADD ESP, 0C
CMP ESI, 0A
JLE SHORT 00D51063
```

- EDI는 rand()이며, EBX는 6으로 값이 고정이였다.
- 주사위의 눈의 값은 EDX에 저장되어 있으며 EDX는 EBX로 나눈 나머지를 저장한다.
    - 즉, EDX = rand()%6 + 1이다.
- 그리고 EBX는 바로 이전 코드에서 값이 결정됐었다.
    - LEA EBX, DWORD PTR DS:[ESI+5]
- ESI + 5를 ESI로 바꾸면 1로 고정이라 EDX = rand()%1 + 1 = 1로 성공
- 또는 INC EDX / PUSH EDX가 각각 1바이트이므로, PUSH 6을 넣어서 2바이트 덮어씌우기를 하면 6으로 눈이 고정된다.
- 저 코드를 C언어 코드로 번역해보면 대충 다음과 같다.

```C
for(ESI = 1; ESI <= 10; ESI++){
    EDX = rand()%6 + 1;
    printf("%d번째 주사위의 눈 : %d\n", ESI, EDX);
}
```