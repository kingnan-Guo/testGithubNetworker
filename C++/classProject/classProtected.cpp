/**
 * @file classProtected.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;
class Box
{

    protected:
        double width;
    public:
        double height;
};
// Box::classProtected()
// {

// }

// 派生类 特别像继承
class smallBox:Box{
    public:
        void setSmallInfo(double wid);
        double getSmallInfo(void);

};

double smallBox::getSmallInfo(void){
    return width;
}

void smallBox::setSmallInfo(double wid){
    width = wid;
}


int main()
{
    smallBox littlebox1;
    littlebox1.setSmallInfo(5.1);
    cout << "littlebox1 =" << littlebox1.getSmallInfo() << endl;
    return 0;
}
