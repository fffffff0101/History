# C언어 5월 25일

### 1. 구조체
- 직접 만드는 자료형? 같은 느낌이다.
- 여러 자료형을 묶어서 관리하는 새로운 자료형이다.

```C
typedef struct{
    char name[10];
    int age;
    char address[50];
} person;
```

- 사용 시에는, 구조체 이름 + 변수 이름과 같이 선언한다.
- 접근은 .로 할 수 있다.

```C
person p1;
printf("%d", p1.age);
```

- 예제. 두 좌표 간의 거리를 구하는 프로그램
```C
#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} point;

int main(){
    point p1, p2;
    p1.x = 2;
    p1.y = 4;
    p2.x = 5;
    p2.y = 8;
    printf("거리는 %.2lf입니다.\n", sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
    return 0;
}
```

---

### 2. 포인터 구조체
- 선언 방법 자체는 동일하다.
- 대신 접근 시에 .이 아닌 -> 를 사용한다.

```C
#include <stdio.h>

typedef struct {
    char name[20];
    int kor, eng, math;
} score, *pscore;

int main(){
    score l = {"Jim", 95, 100, 92};
    pscore p2 = &l;
    printf("국 : %d, 영 : %d, 수 : %d\n", p1->kor, p1->eng, p1->math);
    return 0;
}
```

- 구조체 포인터의 용도는, 앞에서 포인터를 사용하는 이유와 동일하다.
- 다른 함수에서 구조체의 내용을 변경하기 위해 포인터를 파라미터로 받아야 한다. 