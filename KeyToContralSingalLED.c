/*
这是一个为STC89C52 LED编写的使用按键控制单个LED的亮灭程序
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
    while(1)
    {
        if(P3_1==0)
        {
            DelayXms(20);   //初始抖动消除
            while(P3_1==0); //判断是否松手，这里使用了简写
            DelayXms(20);   //末尾抖动消除

            P2_0=~P2_0
        }
    }
}