# 유니티 6월 18일

### 1. 유니티 구조
- 유니티에서 중요한 파일들만 가볍게 적어놓았다.
    - globalgamemanagers : 유니티 프로젝트의 설정 저장
    - level + n : 게임의 진입 장면
    - sharedassets0.assets : 각 레벨에서 사용하는 그래픽 데이터
    - Assmebly-CSharp.dll : 유저가 작성하는 코드, 게임이 만들어져있다면 여기에 게임 코드가 다 담겨있다.
    - Assembly-UnityScript.dll : 유니티에서 생성하는 코드

- 게임 패치는 다음 파일들을 수정하면 된다.
    - Assembly-CSharp.dll
    - Assembly-UnityScript.dll

- 대부분의 게임 내 구현체는 유니티 특성상 C#으로 이루어져 있다.
- 그래서, 게임 로직의 변경에는 Assembly-CSharp.dll을 수정하는 식으로 진행한다.

---
### 2. ILSpy / DnSpy
- C#의 특성은 인터프리터이다.
- 인터프리터라 함은, 컴파일이 되어있지 않다는 뜻으로 코드의 원본을 평문으로 저장하고 있다는 뜻이 될 수 있다.
- 이를 보고, 수정하기 위해 ILSpy, DnSpy를 사용한다.

#### 2-1. ILSpy
- 뷰어에 가깝다.
- 코드를 수정하는 기능은 없고, 각 Class와 Method를 탐색하는 기능에 특화되어 있다.

#### 2-2. DnSpy
- C# 바이너리의 수정이 가능하다.
- 이를 막기 위해 다음과 같은 방법들이 존재한다.
    - 1. 클래스 난독화 : 난독화를 해도 결국엔 로직은 남아있다.
    - 2. IL2Cpp 사용 : 기능이 오작동하는 경우가 있어 주의가 필요하다.

---
### 3. 참고 사이트
- [ILSpy](https://github.com/icsharpcode/ILSpy)
- [DnSpy](https://github.com/dnSpy/dnSpy)
