#include "dll.h"
#include <bits/stdc++.h>
#include <io.h>
#include <windows.h>
#include <direct.h> 
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

extern "C" __declspec(dllexport) void imgset(char* path1,char* path2,char* outpath,int x,int y){
	Mat img1 = cv::imread(path1, cv::IMREAD_UNCHANGED);
	Mat img2 = cv::imread(path2, cv::IMREAD_UNCHANGED);
	Mat mergedImg;
	overlayImages(img1,img2,mergedImg,x,y);
	imwrite(outpath, mergedImg);
	return ;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	return TRUE;
}
