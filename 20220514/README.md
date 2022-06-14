# C언어 5월 14일

### 1. 예제 1
```C
#include <stdio.h>

void swap(int a, int b){
    a ^= b ^= a ^= b;
    return;
}

int main(){
    int num1 = 20, num2 = 40;
    swap(num1, num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
```

- 문제 : 포인터를 사용하지 않으면, main에서의 num1, num2의 값을 바뀌지 않는다.
- 그래서 swap엔 주소를 넘겨줘야 한다.

---

### 2. 예제 2
```C
#include <stdio.h>

int main(){
    int password[8] = {0x61727453, 0x72656277, 0x69207972, 0x6f6e2073, 0x65722074, 0x796c6c61, 0x62206120, 0x79727265};
    char* check = password;
    for(int i = 0; i < 32; i++){
        printf();
    }
    printf("\n");
    return 0;
}
```

- printf에 %c와, check + i를 넣어주면 된다.
- 그러면 "Strawberry is not really a berry" 라는 문구가 나온다.

---

### 3. Little / Big Endian
- little endian : 그 공간 내에 거꾸로 저장
    - little endian은 덧셈에 유리하다.
- big endian : 그 공간 내에 사람 표기와 동일하게 저장
    - big endian은 비교에 유리하다.

---

### 4. 정적배열 / 동적배열
- 일반적으로 []로 선언하는 배열을 정적배열이라 한다.
- 정적배열은 크기의 변경이 불가능하다.
- 이와 반대되는, 크기의 변경이 가능한 배열을 동적배열이라 한다.

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    int* arr = (int*)malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        arr[i] = i * 10;
    }
    for(int i = 0, i < size; i++){
        printf("%d\n", arr[i]);
    }
    free(array);
    return 0;
}
```

---

### 5. 풀었던 예제 문제
- [백준 2953번](https://www.acmicpc.net/problem/2953)