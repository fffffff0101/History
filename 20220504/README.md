# C언어 5월 4일

### 1. 정렬 함수
- C언어에서도 자체적으로 지원하는 정렬 함수가 있다.
- stdlib.h에서 지원하는 qsort를 활용하면, 더 빠른 시간에 정렬을 할 수 있다.

```C
#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second){
    if(*(int*)first > *(int*)second)
        return 1;
    else if(*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){
    int arr[] = {72, 51, 46, 60, 30, 15, 174, 5};
    int array_size = sizeof(arr)/sizeof(int);
    
    for(int i = 0; i < array_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    qsort(arr, array_size, sizeof(int), compare);
    for(int i = 0; i < array_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

- 상단의 compare라는 함수는 사용자 정의 함수라고 부른다.
- 함수를 따로 작성하는 이유는 로직을 일종의 모듈화하여 사용하는 것이 유지/보수에 편하기 때문이라고 한다.
- 예제 : [백준 2751번](https://www.acmicpc.net/problem/2751)

---

### 2. for문의 추가적인 활용
- for문은 while문과 완전히 동일하게 사용할 수 있다.

```C
#include <stdio.h>

int main(){
    int i = 1, j = 1;
    while (i <= 5){
        printf("%d", i);
        i++;
    }
    printf("\n");
    for(; j <= 5; j++){
        printf("%d", j);
    }
    return 0;
}
```

- for문의 시작 시, 변수를 여러 개 선언할 수 있다.

```C
#include <stdio.h>

int main(){
    for(int i = 0, j = 0; j <= 10; i++, j += 2){
        printf("%d %d\n", i, j);
    }
    return 0;
}
```

---

### 3. ASCII
- 숫자는 곧 문자다.
- 'A' = 65, 'a' = 97
- char 자료형에 들어가는 1바이트 문자는 곧 숫자로 표현될 수 있다.

---

### 4. 풀었던 예제 문제
- [백준 2748번](https://www.acmicpc.net/problem/2748)
- [백준 10809번](https://www.acmicpc.net/problem/10809)