# reversing.kr 1번

내가 해석한대로 말해보겠다.

일단 스택의 구조를 생각하면서 풀면 되는 문제인거 같다.

일단 main함수에서 분석해보면 

cmp     [esp+68h+var_63], 61h 이런 부분이 있는데 

비교를 하는 부분이다. 61h는 아스키값으로 a이기 때문에 스택에는 a가 저장이 될 것 이다.

조금 넘어가다 보면  push    offset a5y      ; "5y"  이런 부분이 있는데 다음 스택에 5y를 저장한다는 것이다.

mov     esi, offset aR3versing ; "R3versing 이부분은 잘 해석이 안된다. 일단 esi에 R3versing이걸 집어 넣는다 라는 느낌이다. 쭉쭉 하다보면 



a5yR3versing이라는 문자열이 있는데 마지막 비교문을 보면 

cmp     [esp+68h+String], 45h 이런 부분이 있다. 45h는 "E"이므로 결국 Ea5yR3versing라는 문자열이 만들어 지고 완성이된다.