// 串口中断
#include "stdio.h"

void uart(){
    SCON = ;
    SE = 1;
    EA = 1;

    SBUF = 0x80;
    // 需要定时器T1 波特率
    TMOD = 0x0;
    TH0 = ((65536-5000) *  12  / 11.0592) / 256; // 11.0592 foc
    TL0 = ((65536-5000) * 12 / 11.0592) % 256;
    ET0 = 0;


}

// 判断 RI 接收 或 TI发送是否结束 
void UART_ISR() interrpt 3 using 0{
    RI
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


