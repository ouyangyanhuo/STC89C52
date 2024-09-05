/*
这是一个为STC89C52编写的延时程序
延时时间：自定义
晶振频率：12MHz 
*/
#include <stdio.h>

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