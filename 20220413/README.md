# C언어 4월 13일

### 1. 배열
- 자료를 담는 연속적인 선형 공간
- 한가지의 자료형을 연속적으로 나열할 때 쓰인다.
- 배열에 접근 시, 시작 인덱스는 0이다.
- 선언법은 "자료형" "배열의 이름" "배열의 크기"이며 초기화값은 따로 집어넣어주지 않아도 무방하다.
- 하지만, 배열의 크기에 상수가 아닌, 변수를 집어넣으면 문법 오류가 발생한다.

```C
#include <stdio.h>

int main(){
    int a[5] = {2, 3, 5, 7, 11};
    printf("%d %d\n", a[0], a[4]);
    return 0;
}
```

- 배열의 크기는 sizeof()라는 함수를 사용해 구할 수 있다.
- 배열을 활용하는 for문에 자주 쓰인다고 한다.

```C
#include <stdio.h>

int main(){
    int a[5];
    printf("%lu\n", sizeof(a));
    return 0;
}
```

- 그리고 배열을 선언한 후, 따로 값을 넣어주지 않는다면 더미 정보가 들어있다.
- 0으로 초기화하려면, 맨 처음 요소에 0을 넣어주면 된다.

```C
#include <stdio.h>

int main(){
    int a[5] = {0};
    return 0;
}
```

---

### 2. 문자열
- char 배열에 문자열을 넣을 수 있다.
- 단, char 배열에 선언 시 실제 문자열의 길이 그 이상만큼 배열을 생성해줘야 한다.

```C
#include <stdio.h>

int main(){
    char a[13] = "Hello, World!";
    printf("%s\n", a);
    return 0;
}
```

---

### 3. 풀었던 예제 문제
- [백준 2577번](https://www.acmicpc.net/problem/2577)
- [백준 2562번](https://www.acmicpc.net/problem/2562)
- [백준 4344번](https://www.acmicpc.net/problem/4344)

### 4. 과제
- [백준 3052번](https://www.acmicpc.net/problem/3052)