#include "stdio.h"

void outer(){
    // TCON  前四位属于 定时计数器    后四位属于 外部中断()
    // TCON  TF1 TR1  TF0 TR0       IT1  IE1 (外部中断请求1标志位 跳沿 可硬件自动重置 电平触发需要 软硬 配合重置)  IT0 IE0

    EA = 1;
    EX0 = 1;//允许外部中断
    // ET0 = 1;//允许中断
    // TR0 = 1;// 启动 定时器
    IT0 = 1;//跳岩触发

}

// 0 方式定时器中断
void outer0() interrpt 0 using 0{
    EX0 = 0
}

int main()
{
    
    return 0;
}