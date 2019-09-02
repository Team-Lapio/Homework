## 데코레이터 From scratch in Python

#### 일급객체(first-class object)

: 컴퓨터 프로그래밍 언어 디자인에서 다른 객체들에 일반적으로 적용 가능한 연산을 모두 지원하는 객체를 의미함. (ex. 매개 변수로 넘기기, 수정하기, 변수에 대입하기, 동일 비교하기 등)



1960년대, 영국의 컴퓨터 과학자 크리스토퍼 스트래치가 알골의 실수와 프로시저를 비교함으로써 일급  객체와 이급 객체의 개념에 대해 처음으로 언급함.



로빈 포플스톤은 일급 객체를 구성하는 요소는 다음의 기본적인 권리가 있다는 정의를 내림.

* 모든 요소는 함수의 실제 매개변수가 될 수 있다.

* 모든 요소는 함수의 반환 값이 될 수 있다.

* 모든 요소는 할당 명령문의 대상이 될 수 있다.

* 모든 요소는 동일 비교의 대상이 될 수 있다.



1990년대에 들어 미국의 컴퓨터 과학자 라파엘 핀켈이 이급 및 삼급 객체에 대한 정의를 제안한 바 있으나, 널리 받아들여지지는 않음.



#### 일급 객체 in Python

**Everything is Object**

파이썬에서는 모든 것(부울, 정수, 실수, 문자열, 자료형, 함수, 클래스, 프로그램)이 객체(Object)로 구현되어 있음. 



**파이썬에서 함수는 일급객체이다**

* 모든 요소는 함수의 실제 매개변수가 될 수 있다.

  ```
  def foo():
  	print('foo')
  
  def bar(func):
  	func()
  	print('bar')
  	
  bar(foo)
  ```

  ```
  foo
  bar
  ```

* 모든 요소는 함수의 반환 값이 될 수 있다.

  ```
  def foo():
  	print('foo')
  	
  def bar():
  	print('bar')
  	return foo
      
  a = bar()
  a()
  ```

  ```
  bar
  foo
  ```

* 모든 요소는 할당 명령문의 대상이 될 수 있다.

  ```
  def foo():
  	print('foo')
  
  bar = foo
  bar()
  ```

  ```
  foo
  ```

* 모든 요소는 동일 비교의 대상이 될 수 있다.

  ```
  def foo():
  	pass
  
  def bar():
  	pass
  	
  print(foo == bar)
  ```

  ```
  False
  ```

* 모든 요소는 함수 안에 함수를 정의할 수 있다. (in Python)

  ```
  def outer():
  	print('outer')
  	def inner():
  		print('inner')
  	return inner()
  ```

  ```
  outer
  inner
  ```

   

**파이썬에서 클래스는 메타클래스의 인스턴스로서 일급 객체이다**



------

#### 데코레이터

:  기존 함수나 클래스를 wrapping 하여 수정 없이도 확장할 수 있도록 하는 도구



**기존 함수 확장하기**

```
def wrapping_func(func):  
	# do something
    def wrapped_func():
        return func()
    # do something
    return wrapped_func


def foo():
    print('foo')

extended_foo = wrapping_func(foo)
extended_foo()
```

```
foo
```



**데코레이터를 사용해 기존 함수 확장하기**

* 기존 함수 확장 과정 간소화

* 재사용성 재고

```
def wrapping_func(func):  
	# do something
    def wrapped_func():
        return func()
    # do something
    return wrapped_func

@ wrapping_func
def foo():
    print('foo')

extended_foo()
```



**데코레이터를 사용해 매개 변수가 있는 기존 함수 확장하기 ** 

```
def wrapping_func(func):
	# do something
    def wrapped_func(*args, **kwargs):
        return func(*args, **kwargs)
    # do something
    return wrapped_func
 
@ wrapping_func
def add(a, b):
    return a + b
    
print(add(4, 5))
```

```
9
```











