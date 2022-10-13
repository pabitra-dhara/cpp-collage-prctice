#include <iostream>

using namespace std;

class A{
    private:
int a,b;
public:
void getdata(){
    cout<<"Enter Two Number:";
    cin>>a>>b;
    
}
friend void add(A odd);

};
void add(A odd){
    int c;
    c=odd.a+odd.b;
    cout<<c;
}
int main(){
    A kk;
    kk.getdata();
    add(kk);
    return 0;
}