### 스택 프레임

메모리의 스택(stack) 영역은 함수의 호출과 관계되는 지역 변수와 매개변수가 저장되는 영역이다.

스택 영역은 함수의 호출과 함께 할당되며, 함수의 호출이 완료되면 소멸한다.

함수가 호출되면 스택에는 함수의 매개변수, 호출이 끝난 뒤 돌아갈 반환 주소값, 함수에서 선언된 지역 변수 등이 저장된다.

이렇게 **스택 영역에 차례대로 저장되는 함수의 호출 정보**를 스택 프레임이라 한다.

이러한 스택 프레임 덕분에 함수의 호출이 모두 끝난 뒤에, 해당 함수가 호출되기 이전 상태로 되돌아갈 수 있다.

**+ 스택 오버플로우**

함수의 재귀 호출이 무한히 반복되면, 재귀 호출에 의한 스택 프레임이 계속해서 쌓이는데 스택 영역의 모든 공간을 다 차지하고 난 후 또 다시 스택 프레임이 생성되면 해당 데이터는 스택 영역을 넘어가 저장되어 스택 오버플로우가 발생하게 된다.