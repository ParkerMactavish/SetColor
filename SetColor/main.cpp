#include<windows.h> //需要使用到此標頭檔
#include <iostream>

using namespace std;

#define gray SetColor(8, 7)
#define green SetColor(2, 7)
#define brown SetColor(4, 7)
#define blue SetColor(9, 7)
#define pink SetColor(13, 7)
#define yellow SetColor(14, 7)
#define orange SetColor(12, 7)

void SetColor(int f=7,int b=0)
{
    unsigned short ForeColor=f+16*b;
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,ForeColor);
}

int main()
{
    gray;   //在想要改變顏色的字串前加上這行SetColor(字顏色碼,背景顏色碼)
    cout<<"Is it gray?"<<endl;
    green;
    cout<<"Is it green?"<<endl;
    brown;
    cout<<"Is it brown?"<<endl;
    blue;
    cout<<"Is it blue?"<<endl;
    pink;
    cout<<"Is it pink?"<<endl;
    yellow;
    cout<<"Is it yellow?"<<endl;
    orange;
    cout<<"Is it orange?"<<endl;
    SetColor(); //復原顏色為白字黑底
    cout<<"If it's undone?"<<endl;
    system("pause");
}
