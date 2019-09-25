# reversing.kr 1번 문제

IDA라는 리버싱 툴을 사용하였습니다.

![1569383659977](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569383659977.png)

처음에 IDA에 들어오게 되면 위와 같은 창이 뜨게 됩니다.

저가 해야하는 것은 ![1569383777764](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569383777764.png) 이 프로그렘의 비밀번호를 찾는것입니다.  일단  다시 IDA로 돌아와서 사용자가 입력한 비밀번호와 프로그램의 비밀번호를 비교하는 함수를 찾아야합니다.

![1569383945030](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569383945030.png) 

이것이 프로그램이 수행하는 함수입니다. 여기서 비밀번호를 비교하는 함수를 찾습니다.

![1569384116154](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569384116154.png)

프로그램에 아무 비밀번호를 입력하니 "Incorrect Password"라는 문장이 나왔습니다.  저 메세지 박스를 출력하는 함수를 찾다보니 

![1569384127261](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569384127261.png)

위와 같은 함수를 찾았습니다.



그래서 이 함수의 맨 위부터 분석을 하였습니다.

![1569383624147](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569383624147.png)

저는 위에 코드를 아래같은 그림처럼 생각했습니다.

![1569385174864](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385174864.png)

대충 이렇게 입력받은 코드를 저장하는거 같았습니다.



함수를 보다가 비교를 하고 점프를 하는 코드를 찾았습니다.![1569384720189](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569384720189.png)

이 함수는 var_63 과 61h를 비교하는 코드였습니다. 이 둘이 다르다면 아까 "Incorrect Password"를 출력하는 메세지 박스로 가는 것이였습니다.  그래서 저는 var_63에 61h 인 a(아스키 코드 값)가 들어가야 한다고 생각했습니다.

![1569385137561](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385137561.png)

위 사진처럼 var_63은 a가 될것입니다.



코드를 보다보니 다음으로 비교하는 것처럼 보이는 함수를 찾았습니다.

![1569385318570](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385318570.png)

이것은 var_62에 있는 수와 5y를 push해서 비교하는 함수처럼 보였습니다. 그래서

![1569385370836](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385370836.png)

이렇게 생각했습니다.



코드를 보다보니 문자열을 한단어씩 비교하는것처럼 보이는 것이 있었습니다. 

![1569385460550](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385460550.png)

R3versing과 var_60에 저장된 문자열을 한자리씩 비교하는 것 이였습니다. 

그래서

![1569385607346](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385607346.png)

이렇게 생각했습니다.



마지막으로 비교코드를 찾았습니다.

![1569385656949](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385656949.png)

string에 저장된 값과 45h를 비교하는 코드였습니다.

그래서 string에는 45h인 대문자 'E'가 들어간다 생각했습니다.

![1569385746300](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385746300.png)

이렇게 하여 

비밀번호는 Ea5yR3versing 라는것을 찾았습니다.

![1569385968195](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569385968195.png)

![1569386001452](C:\Users\user\AppData\Roaming\Typora\typora-user-images\1569386001452.png)

