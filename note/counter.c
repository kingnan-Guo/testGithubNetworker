#include "stdio.h"

unsigned int PCON, TMOD, ET0, EA, TR0, TH0, TL0;
void counter(){
    PCON = 0x7F;
    TMOD = 0x05;// 16位异步 计数器  GATE C/T M0 M1 GATE C/T M0 M1
    TH0 = (65536 - 5);
    TL0 = (65536 - 5);
    ET0 = 1;//开启中断
    EA = 1; // 总中断
    TR0 = 1; //启动计数器1
}

// 定时计数器中断 方式 1
// 重新添加 TH0 TL0 
// 计数器 中断 对应 P3.5 == T0 接口
void counter0() interrupt 1 using 0{
    //计数器中断应该依然是  TF0
    if (TF0)
    {
        TH0 = (65536 - 5);
        TL0 = (65536 - 5);
    }
    
}

int main()
{
    
    return 0;
}
