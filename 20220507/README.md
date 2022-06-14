# C언어 5월 7일

### 1. 포인터
- 일반적인 변수는 값을 저장한다.
- 포인터는 기본적으로 정수를 저장하지만, 그 정수는 주소다.

```C
#include <stdio.h>

int main(){
    int a = 10;
    
    int *b = &a;

    printf("%d %x\n", a, (int)b);
    printf("%d", *b);
    return 0;
}
```

- 포인터의 선언은 자료형 뒤에 *를 사용한다.
- 변수의 주소는 scanf에서 활용한 &를 사용한다.

---

### 2. 메모리 구조
- c언어로 짜여진 프로그램은 다음과 같은 구조를 가진다
    - code 영역 : 짠 코드가 들어가 있는 영역
    - stack 영역 : 함수가 사용하는 영역
    - data 영역 : 문자나, 전역변수등이 존재하는 곳

- 나중에 어셈블리 맛만 볼 때, 다시 배운다고 한다.

---

### 3. 포인터에서의 사칙연산
- 주소의 곱, 나누기는 의미가 없다.
- 하지만 덧셈의 경우, 의미있게 사용될 수 있다.

```C
#include <stdio.h>

int main(){
    int a1[4] = {1, 4, 5, 7};
    char a2[5] = "Hello";
    int* b1 = a1;
    char* b2 = a2;
    int* b3 = a2;

    int c = 100;
    int* d = &c;
    printf("%d %d\n", *b1, *(b1 + 1));
    printf("%c %c\n", *b2, *(b2 + 2));
    printf("%c %c\n", *b3, *(b3 + 1));
    printf("%d\n", *d);
    return 0;
}
```