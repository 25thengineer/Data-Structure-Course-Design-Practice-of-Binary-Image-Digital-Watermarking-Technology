#ifndef BMPUTIL_H
#define BMPUTIL_H

#include "additional_utility.h"
//#include <windows.h>

class watermark
{
public:
    QString array2byte(byteArray &array);
    QString array2str(byteArray &array);
    byteArray byte2Array(QString &number);
    byteArray decodeImg(uchar* buffer, uchar* dst, const int width, const int height, const int length);
    uchar* edgeExtract(uchar* buffer, const int width, const int height);
    byteArray encode(byteArray src, byteArray key);
    byteArray generateKey(const int length);
    byteArray img2Array(QString &dir);
    uchar* readBmp(const char *bmpName, int& bmpWidth, int& bmpHeight);
    bool savebmp(const char* filename, uchar* buffer, const int height, const int width);
    byteArray str2Array(QString &str);
    uchar* substract(uchar* buffer1, uchar* buffer2, const int size);
    uchar* translation(uchar* buffer, const int width, const int height, int x_off, int y_off);
    uchar* watermarkImg(uchar* buffer, uchar* edge, const int size, byteArray code);
private:
    BITMAPINFOHEADER BMIH;
    BITMAPFILEHEADER BMFH;
    int biWidth;
    int biHeight;
    int biBitCount;
    unsigned char *pBmpBuf;
    int lineByte;
    RGBQUAD *pColorTable;
protected:

};


#endif // BMPUTIL_H
