/*
这是一个为STC89C52 使用按键控制一组LED的二进制显示
晶振频率：12MHz 
*/
#include <stdio.h>
#include <REG52.H>  //单片机所需的头文件

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
    unsigned char LEDNum=0; //定义一个函数，并初始化
    while(1)
    {
        if(P3_1==0)
        {
            DelayXms(20);   //初始抖动消除
            while(P3_1);    //简写
            DelayXms(20);   //末尾抖动消除

            LEDNum++;
            P2=~LEDNum;
        }
    }
}