# C언어 4월 20일

### 1. 배열 속의 배열
- 배열 내의 요소로 배열이 들어갈 수 있다.
- 이를 2차원, 3차원, n차원 배열이라 부른다.

```C
#include <stdio.h>

int main(){
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    return 0;
}
```

---

### 2. 정렬
- 배열 내에 존재하는 값들을 오름차순 혹은 내림차순으로 재배열하는 것을 정렬이라 한다.

```C
#include <stdio.h>

int main(){
    int a[5] = {6, 4, 13, 8, 12};
    for(int i = 0; i < sizeof(a)/4; i++){
        for(int j = i + 1; j < sizeof(a)/4; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < sizeof(a)/4; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
```

- 위의 예시 코드는 Bubble sort라고 부른다.
- 배열의 길이를 n이라 하면 첫 반복에는 n번의 접근, 2번째엔 n-1번, ... n번째엔 1번 접근한다.
- 정렬에는 여러 종류가 있으며, 버블 소트, 삽입 소트, 카운트 소트등등이 존재한다고 한다.

---

### 2. 시간복잡도
- 이 접근 횟수가 코드의 실행 수이며, 이를 시간복잡도라고 한다.
- 1번에서의 예시인 버블 소트는 O(n^2)의 시간복잡도를 가지고 있다고 한다.

---

### 3. 풀었던 예제 문제
- [백준 2752번](https://www.acmicpc.net/problem/2752)
- [백준 10989번](https://www.acmicpc.net/problem/10989)

### 4. 과제
- [백준 5576번](https://www.acmicpc.net/problem/5576)
- [백준 9076번](https://www.acmicpc.net/problem/9076)