#include<iostream>
using namespace std;
class  abc{
    int a,b;
    public: 
    void show();
    abc(){
        a=20;
        b=10;

    }
    abc(int x){
        a=x;
        b=x;
    }
    abc(int x,int y);

};
    abc::abc(int x,int y){
        a=x;
        b=y;
    }
    void abc::show()
    {
        cout<<a<<endl;
        cout<<b;
    }
int main(){
    abc ob1(100,200);
    abc ob2;
    abc ob3(500);

    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}

