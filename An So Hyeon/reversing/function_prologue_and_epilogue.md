### 함수 프롤로그 & 에필로그

**+ 기초 어셈블리어**

```
MOV 레지스터, 값 // 레지스터에 값을 이동한다.

PUSH 레지스터 // 레지스터의 값을 스택에 넣는다.
POP 레지스터 // 스택에서 값을 빼 레지스터에 넣는다.

call 프로시저 // push eip + jmp sum

leave // mov esp, ebp + pop ebp

ret // pop eip
```

**+ 레지스터**

- AX (Accumulator Register) : 산술 연산에 사용

- BX (Base Register) : 데이터의 주소를 가리키는 포인터로 사용

- SP (Stack Pointer Register) : 스택의 최상단을 가리키는 포인터로 사용

- BP (Stack Base Pointer Register) : 스택이 베이스를 가리키는 포인터로 사용

  모든 레지스터는 16비트와 32비트 모두에서 접근 가능하다.

  16비트 레지스터(AX, CX, DX, BX)를 8비트로 나눠 접미사 'H'로 상위, 접미사 'L'로 하위 레지스터를 표현할 수 있다.

  32비트 모드에서는 접두사 'E', 64비트 모드에서는 접두사 'R'이 사용된다. 

  

#### 1. 함수 호출의 과정

1. 함수가 사용할 파라미터를 스택에 넣고 함수 시작 지점으로 점프한다.

2. 함수 내에서 사용할 스택프레임을 설정한다. **(함수 프롤로그)**

3. 함수의 내용을 수행한다.

4. 수행을 마치고 처음 호출한 지점으로 돌아가기 위해 스택을 복원한다. **(함수 에필로그)**

   

#### 2. 함수 프롤로그

```
push ebp
mov ebp, esp
```

1. **call [레이블] // push eip + jmp [레이블]**

   ========= <- esp

    ret (eip 값)

   =========

   

2.  **push ebp**

   ========= <- esp

    sfp (ebp 주소)

   =========

    ret (eip 값)

   =========

   

3. **mov ebp, esp**

   ========= <- esp, ebp

    sfp (ebp 주소)

   =========

    ret (eip 값)

   =========

   

 #### 3. 함수 에필로그

```
leave // mov esp, ebp + pop ebp
ret // pop eip + jmp eip
```

1. **mov esp, ebp**

   ========= <- esp, ebp

    sfp (ebp 주소)

   =========

    ret (eip 값)

   =========

   

2. **pop ebp**

   ========= <- esp

    ret (eip 값)

   =========

   

3.  **ret // push eip + jmp eip**