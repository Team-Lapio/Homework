### 기초 어셈블리어

```
MOV 레지스터, 값 // 레지스터에 값을 이동한다.

XCHG 레지스터1, 레지스터 2 // 레지스터1과 레지스터2의 값을 교환한다.

INC 레지스터 // 레지스터 값 1증가
DEC 레지스터 // 레지스터 값 1감소

PUSH 레지스터 // 레지스터의 값을 스택에 넣는다.
POP 레지스터 // 스택에서 값을 빼 레지스터에 넣는다.

ADD 레지스터1, 레지스터2 // 레지스터1에 레지스터2의 값을 더한다.
ADD 레지스터, 값 // 레지스터에 값을 더한다.

SUB 레지스터1, 레지스터2 // 레지스터1에 레지스터2의 값을 뺀다.
SUB 레지스터, 값 // 레지스터에 값을 뺀다.

call 프로시저 // push eip + jmp sum

leave // mov esp, ebp + pop ebp

ret // pop eip
```
