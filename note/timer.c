
#include "stdio.h"


unsigned int PCON, TMOD, ET0, EA, TR0, TH1, TL1;

void timer(){
    // T0 定时器  16位 定时器 不可重载 / 计数器
    PCON &= 0x7f;// 01111111111
    TMOD = 0x01;//  GATE_1 C/T_1 M0_1 M1_1  GATE_0 C/T_0 M0_0 M1_0  0000 0001
    
    TH1 = ((65536-5000) *  11.0592 / 12) / 256; // 11.0592 foc
    TL1 = ((65536-5000) * 11.0592 / 12) % 256;
    ET0 = 1; //允许中断
    TR0 = 1;// 开启定时器0
    EA = 1;//总中断
}


//  inturrper 1 => 定时器 终端 ，   using 0 => 使用寄存器0
// 定时器 中断标志位 ????  TF0 ？？？
void timer0_sus() interrupt 1 using 0{
    // 定时器 终断 标志位  TF0
    if( TF0 ){

    }
    TH1 = ((65536-5000) *  11.0592 / 12) / 256; // 11.0592 foc
    TL1 = ((65536-5000) * 11.0592 / 12) % 256;
}


int main(int argc, char const *argv[])
{
    /* code */
    // printf("11");

    return 0;
}


