/*
这是一个为STC89C52编写的延时程序
延时时间：500ms
晶振频率：12MHz 
*/
#include <stdio.h>
#include <INSTRINS.H>

void Delay500ms()
{
    unsigned char i, j, k;

    _nop_();    //这里需要用到第七行所引用的头文件
    i = 4;
    j = 205;
    k = 187;
    do
    {
        do
        {
            while(--k);
        }
        while(--j);
    }
    while(--i);
}