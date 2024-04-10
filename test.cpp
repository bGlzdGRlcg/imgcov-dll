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
