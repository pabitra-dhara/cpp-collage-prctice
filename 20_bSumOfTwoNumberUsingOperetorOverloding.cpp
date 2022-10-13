#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a"<<a<<endl;
        cout<<"b"<<b;
    }
    demo operator+(demo c){
        demo temp(0,0);
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main(){
    demo c;
    c2=c+c1;
    c2.show();
    return 0;
}
