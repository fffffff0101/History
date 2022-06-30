# 유니티 6월 25일

### 1. 게임 코드에서 확인했던 주요한 수학적인 함수들

1. Mathf.Lerp : 보간을 구하는 것
- 보간이란, 두 점을 연결한 직선 사이의 중간 특정 값을 추정하는 기법을 말한다.
```C#
float speed = 2;
void Update()
{
     a = Mathf.Lerp(a, b, Time.deltaTime * speed);
}
```

2. Mathf.Clamp : float 자료형의 값에 제한을 두는 것
```C#
float y = Input.GetAxis("ExtraHorizontal");
float x = Input.GetAxis("ExtraVertical");

y = y * speedRotate * Time.deltaTime;
x = -x * speedRotate * Time.deltaTime;

angle.x = Mathf.Clamp(angle.x + x, -80.0f, 0.0f);
angle.y += y;

transform.rotation = Quaternion.Euler(angle + transform.parent.eulerAngles);
```

3. Mathf.Abs : 절댓값, Mathf.Log : 로그값  
절댓값은 부호가 없는 절대적인 양이다.  
로그라고 하는 것을 제대로 이해하진 못했지만, 2의 3제곱 = 8이라 하면 log 2의 8은 3으로,  
지수를 표기하는 다른 기법이라고 가볍게 배웠다.
```C#
float num = Mathf.Log(Mathf.Abs(finalDEF / 90f) + 1f);
```

4. UnityEngine.Random.Range : 랜덤한 값을 추출하는 Unity 내장 함수
```C#
if (GUI.Button(new Rect(10, 10, 100, 50), "Instantiate!"))
{
    var position = new Vector3(Random.Range(-10.0f, 10.0f), 0, Random.Range(-10.0f, 10.0f));
    Instantiate(prefab, position, Quaternion.identity);
}
```

---

### 2. 참고 사이트
- [유니티 스크립트 레퍼런스](https://docs.unity3d.com/ScriptReference/)