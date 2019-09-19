# 어셈블리어

#### 어셈블리어란?

- 어셈블리어는 하드웨어와 소프트웨어의 가장 밑바닥에 있는 언어라고 부른다.
- 기계어와 같은 수준에 있는 언어로 저급언어 중에서도 가장 밑바닥 언어이다 .
- 0과 1의 인진수로 프로그램을 하는 기계어는 인간의 관점에선 컴퓨터가 바로 읽을 수 있다는
- 점 만 빼면 장점이 없는 언어이기 때문에 이를 보안하기 위해 나온 언어가 어셈블리어다. 
- 기계어가 CPU 종류에 따라 다르기 때문에 어셈블리어 역시 통일된 규격이 없다.
- 아키텍처에 따라 다르다는 것은 호환성이 없다는 뜻이다

#### 어셈블리어 특징

- 명령 실행 속도가 가장 빠르다.
- 매우 세밀하게 프로그램 해야한다.
- 어셈블리어는 하드웨어 특성을 탄다.

#### 어셈블리어 장단점 및 용도 

__장점__

1. 프로그램의 실행 속도가 매우 빠르다.

2. 프로그램의 크기가 매우 작다.

3. 어떤 프로그램이라도 만들 수 있습니다.

4. 어떤 기계애서도 사용이 가능합니다.

   *최소한의 명령으로 프로그래밍을 하기 때문에 크기가 매우 작고 효율적이고 가장 정확한 프로그램을 만든다. 또한 하드웨어를 직접 제어할 수 있는 언어이기 때문에 어떤 명령도 수행할 수 있어서 모든 프로그램이라도 만들 수 있습니다.*

__단점__

1. 배우기가 어렵다.
2. 큰 프로그램을 만들기 어렵다.
3. 프로그래밍 시간이 오래 걸리고 디버깅이 어렵다.
4. 제작된 프로그램이 하드웨어별 특성을 탄다.

*어셈블리어는 기계적인 사고방식을 가져야 하므로 하드웨어의 원리에 대해서도 잘 알고 있어야 합니다. 그리고 세밀한 제어가 필요한 어셈블리어로 거대한 프로그램을 만들기 어렵고 프로그램밍 시간이 오래 걸리기도 하며 버그 난 곳은 프로그래머가 직접 찾아야기 때문에 디버깅 또한 오래 걸립니다. 마지막으로 모든 하드웨어에서 사용 가능한 프로그래밍이 가능한 반면 그 하드웨어에서만 사용할 수 있는 프로그램이 될 수 있습니다.*

__용도__

1. 하드웨어 디바이스 드라이버
2. 일반 프로그램의 특정 기능 최적화
3. 각종 전자 장비의 프로그램밍

*드라이버 파일이라고 말하는 파일을 만들 때는 대부분 어셈블리어로 작성합니다. 프린터나 그래픽카드, 마우스와 같은 각종 장치의 드라이버 파일은 크기가 작으면서 실행 속도는 빨라야 하기 때문입니다. 그리고 하드웨어를 좀더 정밀하게 직접 제어해야 하는 경우가 있는데 이때 윈도우의 API를 사용할 경우에는 정밀한 제어가 힘듭니다. 따라서 어셈블리 프로그램을 고급언어로 만든 프로그램과 링크 시켜서 사용하는 것이 보편적입니다. 마지막으로 각종 전자 장비들은 대부분 어셈블리어를 사용합니다. 임베디드 시스템이라고 불리는 것들은 대부분 어셈블리어로 작성한다고 보면 됩니다.*