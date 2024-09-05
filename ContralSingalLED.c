/*
这是一个为STC89C52 LED编写的逐亮/灭程序
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
        P2_0=0;    //0号LED
        DelayXms(M);
        P2_1=0;    //1号LED
        DelayXms(M);
        P2_2=0;    //2号LED
        DelayXms(M);
        P2_3=0;    //3号LED
        DelayXms(M);
        P2_4=0;    //4号LED
        DelayXms(M);
        P2_5=0;    //5号LED
        DelayXms(M);
        P2_6=0;    //6号LED
        DelayXms(M);
        P2_7=0;    //7号LED
        DelayXms(M);

        P2_0=1;    //0号LED
        DelayXms(M);
        P2_1=1;    //1号LED
        DelayXms(M);
        P2_2=1;    //2号LED
        DelayXms(M);
        P2_3=1;    //3号LED
        DelayXms(M);
        P2_4=1;    //4号LED
        DelayXms(M);
        P2_5=1;    //5号LED
        DelayXms(M);
        P2_6=1;    //6号LED
        DelayXms(M);
        P2_7=1;    //7号LED
        DelayXms(M);
    }
}