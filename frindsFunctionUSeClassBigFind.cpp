#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getdata(){
        cout<<"Enter A Value:";
        cin>>a;
    }
    friend void max(A,B);
};

class B{
    int b;
    public:
    void inputdata(){
        cout<<"Enter B Value:";
        cin>>b;
    }
    friend void max(A,B);
};
void max(A aa,B bb){
    if(aa.a>bb.b){
        cout<<"A is Max";
    }
    else{
        cout<<"B is Max";
    }
}
int main(){
    A aa;
    B bb;
    aa.getdata();
    bb.inputdata();
    max(aa,bb);
    return 0;
}