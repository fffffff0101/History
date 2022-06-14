# C언어 5월 11일

### 1. 함수란?
- 여러 번 실행되는 로직을 묶어서 관리

```C
#include <stdio.h>

int add(int num1, int num2){
    return num1 + num2;
}

int main(){
    int a = 10, b = 20;
    int c = add(a, b);
    printf("%d", c);
    return 0;
}
```

- 실습 : 세 수를 받아 곱한 값을 반환하는 함수 작성

```C
#include <stdio.h>

int mul(int num1, int num2, int num3){
    retunr num1 * num2 * num3;
}

int main(){
    int a = 10, b = 20, c = 30;
    int result = mul(a, b, c);
    printf("%d", result);
    return 0;
}
```

- 함수는 다음과 같이 정의한다.
    - 1. 함수의 반환 자료형 형태
    - 2. 함수의 이름
    - 3. 매개변수
    - 4. 내부 로직
    - 5. 반환값이 존재하는 경우 반환값 설정

- 함수의 형태를 맞춰주지 않으면?
    - 1. 반환값의 경우 : 값이 손실될 수 있음
    - 2. 파라미터의 경우 : 로직이 잘못될 수 있음

- 함수로 넘어간 변수는 내부에서 값을 바꿔도 밖에서 변하지 않는다.
- 포인터를 사용하면, 바꿔줄 수 있다.

```C
#include <stdio.h>

void function(int *a, int *b){
    *a = 20;
    *b = 30;
    printf("function에서 바꾼 값 : %d %d\n", *a, *b);
}

int main(){
    int a = 10, b = 15;
    function(&a, &b);
    printf("main에서의 값 : %d %d\n", a, b);
    return 0;
}
```

---

### 2. Iteration / Recursion
- Iteration : for, while
- Recursion : 함수 내에서 함수를 호출!

```C
#include <stdio.h>

int factorial(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}

int main(){
    int number = 10;
    int result1 = 1;
    for(int i = 1; i <= number; i++){
        result1 *= i;
    }
    int result2 = factorial(number);
    printf("%d %d\n", result1, result2);
    return 0;
}
```