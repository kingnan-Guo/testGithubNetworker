/**
 * @file arrowReload.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
using namespace std;

class Obj
{
    private:
        static int i, j;
    public:
        void f() const {
            cout << i++ << endl;
        };
        void g() const {
            cout << j << endl;
        }

};
// 静态成员定义
int Obj::i = 10;
int Obj::j = 20;

class ObjContainer
{
    vector<Obj*> a;
    public:
        void add(Obj* obj){
            // 在 a 尾部添加 obj
            a.push_back(obj); 
        }
        friend class SmartPointer;
};


class SmartPointer
{
    ObjContainer oc;
    int index;
    public:
        SmartPointer(ObjContainer & objc){
            oc = objc;
            index = 0;
        };

    // 返回值表示列表结束
    bool operator++(){
        if(index >= oc.a.size() -1){
            return false;
        }
        if(oc.a[++index] == 0){
            return false;
        }
        return true;

    };
    bool operator++(int){
        return operator++();
    };

    Obj * operator->() const{
        if(!oc.a[index]){
            cout << "zero value";
            return (Obj * ) 0;
        }
        return oc.a[index];
    }


};









int main()
{
    const int sz = 10;
    Obj o[sz];
    ObjContainer oc;
    for (int i = 0; i < sz; i++)
    {
        /* code */
        oc.add(&o[i]);

    }
    SmartPointer sp(oc); //创建一个迭代器
    do
    {
        sp -> f();
        sp ->g();
    } while (sp++);
    
    
    return 0;
}

