# 메모리 구조 

- CODE -> 함수, 제어문, 상수 영역
- DATA -> 전역 변수
- BSS -> 전역 변수 
- HEAP -> 동적 할당
- STACK -> 지역 변수


###### CODE, DATA, BSS 컴파일시 크기가 결정
###### HEAP, STACK Run time시에 크기가 결정

__(Segment . 프로그램에 정의된 특정 영역으로 코드 데이터 스택으로 알려져 있는것 을 포함한다.) __



#### Code Segment

- 프로그램 코드가 기계어로 저장되는 영역이고 CPU 가 이 영역에 있는 명령을 읽고 처리한다.

#### Data Segment(BSS 포함)

- 프로그램 시작과 동시에 할당되고 프로그램 종료 시  메모리에서 소멸한다. 또한 전역 변수, Static 변수 등과 같이 프로그램이 실행되는 동안 항상 접근 가능한 변수를 위한 공간이다.

- 여기서 비슷한 BSS Segment도 비슷한 일을 하는데 DATA에는 초기화 된 전역변수 BSS 에는 초기화 값이 없는 전역 변수를 저장한다는 한가지 다른 점이 있다.

##### *_이 셋은 컴파일시 크기가 결정이된다. 즉 정적 할당이라는 소리다_*

#### Heap Segment

- 동적 할당 영역으로 참조타입에 대한 저장 공간이다. 스택은 LIFO 방식으로 동작하지만 힙은 프로그램에 따라 일정한 순서나 규칙이 없다. 

#### Stack Degment

- 지역 변수, 매개변수, 리턴 값 등의 임시 데이터를 저장하는 영역이당. 함수 시작과 함께 관련된 변수들이 생성되었다가 종료 시 반환된다. 또한 LIFO(후입선출)이다. 
  그리구 스택 영역에 저장되는 함수의 호출 정보를 스택 프레임이라고 한다.