/*
这是一个为STC89C52 使用按键控制LED亮灭移动
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
unsigned char LEDNum=0; //定义一个全局变量，并初始化
void main()
{
    while(1)
    {
        if(P3_1==0)     //K1
        {
            DelayXms(20);   //初始抖动消除
            while(P3_1==0); //松手检测
            DelayXms(20);   //末尾抖动消除

            LEDNum++;
            if(LEDNum>=8)
                LEDNum=0;

            P2=~(0x01<<LEDNum); //按位左移
        }

        if(P3_0==0)     //k2
        {
            DelayXms(20);   //初始抖动消除
            while(P3_1==0); //松手检测
            DelayXms(20);   //末尾抖动消除

            if(LEDNum==0)   //异常消除
            {
                LEDNum=7;
            }
            else
            {
                LEDNum--;
            }
            P2=~(0x01<<LEDNum); //按位左移
        }
    }
}