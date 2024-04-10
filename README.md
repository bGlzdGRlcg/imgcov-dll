# imgcov.dll
 一个基于C++和opencv的立绘合成动态链接库

# How To Use

## C++

```C++
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	HMODULE imgdll = LoadLibrary("imgcov.dll");
	typedef int(*IFunc)(string,string,string,int,int);
	IFunc imgset; 
	imgset = (IFunc)GetProcAddress(imgdll, "imgset");
	imgset("1.png","2.png","3.png",557,278);
}

```

## Python

```python
from ctypes import *
test = CDLL("./imgcov-py.dll")
test.imgset(bytes("1.png", encoding='utf-8'),bytes("2.png", encoding='utf-8'),bytes("3.png", encoding='utf-8'),557,278)
```

函数：imgset(背景图片路径,表情文件路径,输出文件路径,相对x坐标,相对y坐标)

编译环境：mingw+opencv
