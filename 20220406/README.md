# C언어 4월 6일

### 1. 변수
- 자료를 담는 공간, 값이 변할 수 있는 공간
- char, short, int, long, float, double, ...
- 변수의 이름은 영어, 숫자, _만 사용가능하고, 변수의 이름이 숫자로 시작할 수 없다.

    #### 1-1. 변수 상세
    - 실수를 저장할 수 있는 자료형은 float, double
    - float는 4바이트, double은 8바이트다.
    - 그리고, 컴퓨터는 정확한 실수값을 저장할 수 없다.
    - float는 7자리, double은 15~16자리가 유효
    - 그래서 오차범위가 엄격해질수록 double을 사용해야 한다.
    - 참고 문제 : [백준 1008번](https://www.acmicpc.net/problem/1008)

---

### 2. 상수
- 자료를 담는 공간은 동일, 값이 변할 수 없다.
- 자료형은 기본적으로 동일
- #define으로도 상수의 정의가 가능

---

### 3. 연산
- +, -, *, /은 아주 기본적인 사칙연산
- % : 나머지를 반환
- +=, -=등을 대입 연산자라고 하며, a++, ++a와 같은 것을 증감 연산자라고 한다.
- 부등호가 들어가거나, == 또는 !=는 비교 연산자라고 부른다.
- 논리 연산자가 존재하는데, 조건의 나열에 사용한다.

```C
#include <stdio.h>

int main(){
    int a = 1, b = 2, c = 3;
    if((a < b) || (c != 3)){
        printf("Hello, world!\n");
    }
    return 0;
}
```

- 비트 연산자 : and, or, xor등이 존재한다.

---

### 4. Swap
- Swap이라 함은 A와 B의 값을 바꾸는 작업을 말한다.
- 컴퓨터에서 값을 바꾸기 위해 임시 공간이 하나 필요하다.

```C
#include <stdio.h>

int main(){
    int a = 10, b = 20, c;
    c = a;
    a = b;
    b = c;
    printf("%d %d\n", a, b);
    return 0;
}
```
- 임시 공간이 필요 없는 XOR Swap이라는 것도 존재한다고 한다.

---

### 5. 풀었던 예제 문제
- [백준 2753번](https://www.acmicpc.net/problem/2753)
- [백준 2884번](https://www.acmicpc.net/problem/2884)
- [백준 10952번](https://www.acmicpc.net/problem/10952)
- [백준 1110번](https://www.acmicpc.net/problem/1110)