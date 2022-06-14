# 어셈블리 6월 7일

### 1. ADD, SUB
- CPU에는 레지스터라는 공간이 있다.
- 이 레지스터는 임시로 값을 저장하는 공간이라고 보면 된다.
- ADD, SUB는 가장 간단한 어셈블리 명령어들이며 직관적으로 이해하기 쉽다.
    - ADD EAX, 2 : EAX = EAX + 0x2
    - SUB EBX, 10 : EBX = EBX + 0x10
    - MOV ECX, 8 : ECX = 0x8

```C
#include <stdio.h>

int main(){
    int a = 100, b = 150, c = 300, d = 200;
    __asm{
        mov a, 100
        mov b, 100
        mov eax, b
        add eax, 1000
        mov c, eax
        sub d, eax
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
```

---

### 2. JMP
- IF나 FOR등에 쓰이는, 주소의 점프다.
- JMP는 조건 없이 점프고, 조건 있는 점프는 다음과 같다.
    - JA : A > B
    - JB : A < B
    - JE : A == B
    - JAE : A >= B
    - JBE : A <= B
- 이를 구별하기 위해, CMP명령어를 사용한다.
    - CMP A, B : A와 B의 값을 비교한다, 기본적으로 A-B로 값을 처리한다.
        - ZF, CF라는 플래그가 켜지는데 조건은 다음과 같다.
        - a < b -> ZF : 0, CF : 1
        - a > b -> ZF : 0, CF : 0
        - a == b -> ZF : 1, CF : 0
    - 저 Flag를 기준으로 점프문의 동작이 결정된다.

```C
#include <stdio.h>

int main(){
    int a, b;
    while(1){
        scanf_s("%d", &a);
        __asm{
            cmp a, 10
            ja jump1
            jb jump2
            je jump3
jump1:
            mov b, 0
            jmp end
jump2:
            mov b, 1
            jmp end
jump3:
            mov b, 2
            jmp end
end:
        }
        printf("b = %d\n", b);
    }
    return 0;
}
```

---

### 3. 리버싱 예제 문제 : CrackMe1
- 실행시켜보면 드라이브 타입을 받아서 CD-ROM인지 아닌지를 체크한다.
    - CALL <JMP.&KERNEL32.GetDriveTypeA>
- 근데 이 값이 뭔지는 모르겠으나 EAX와 ESI중에 이 값이 들어있고, 비교구문에 따라 CD-ROM을 판별한다.
    - CMP EAX, ESI
- 그래서 분기문을 다음과 같이 바꾸었다.
    - 변경 전 : JE SHORT 0040103D
    - 변경 후 : JMP SHORT 0040103D

---

### 4. 과제
- 실행시키면 아무 메세지도 뜨지 않는다.
- 그래서 결과창의 ASCII를 찾으니까 앞의 Sleep 구문때문에 진행이 안됐던 것을 알 수 있었다.
- Sleep은 인자를 하나만 받으며, 그 숫자 n이 곧 n초를 의미한다.
- Sleep에 들어갈 값을 바꿔주면 해결될 문제라, PUSH 1로 고정하니 결과가 떴다.