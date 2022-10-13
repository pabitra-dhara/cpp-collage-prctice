#include<iostream>
using namespace std;
class Sum{
    public:
    int a;
    int b;
    void getdata(){
        cout<<"Enter Number:";
        cin>>a>>b;
    }
    void ans(){
        cout<<"Answer:"<<a+b;
    } 
};
int main(){
    Sum s;
    s.getdata();    
    s.ans();
    return 0;
}