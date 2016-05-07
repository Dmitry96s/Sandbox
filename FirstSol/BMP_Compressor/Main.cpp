#include <atlimage.h>

#include<iostream>

using namespace std;

int main() {
	ATL::CImage img;
	img.Load(_T("lena512.bmp"));
	img.Save(_T("lena512 temp.png"), Gdiplus::ImageFormatPNG);
	img.Save(_T("lena512 temp.jpg"), Gdiplus::ImageFormatJPEG);

	//system("PAUSE");
	return 0;
}