#include <atlimage.h>

#include<iostream>

using namespace std;

int main() {
	ATL::CImage img;
	img.Load(_T("lena512 temp.jpg"));
	img.Save(_T("lena512 dst.bmp"), Gdiplus::ImageFormatBMP);
	
	//img.Save(_T("lena512.jpg"), Gdiplus::ImageFormatJPEG);

	//system("PAUSE");
	return 0;
}