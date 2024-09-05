/*
这是一个为STC89C52 LED编写的闪烁程序
晶振频率：12MHz 
*/
#include <stdio.h>
#include <REG52.H>  //单片机所需的头文件
#define M 500   //一个宏定义

// 自定义时间的延时程序
void DelayXms(unsigned int xms)
{
    unsigned char i, j;
    while(xms--)
    {
        i = 2;
        j = 239;
        do
        {
            while(--j);
        }
        while(--i);
    }
}

//主程序
void main()
{
    while(1)    //1为真循环
    {
        P2=0xFE;    //亮
        DelayXms(M);
        P2=0xFF;    //灭
        DelayXms(M);
    }
}