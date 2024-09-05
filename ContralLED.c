/*
这是一个为STC89C52 LED点亮程序
晶振频率：12MHz 
*/
#include <stdio.h>
#include <REG52.H>  //单片机所需的头文件

//主程序
void main()
{
    while(1)    //1为真循环
    {
        P2=0xFE
    }
}