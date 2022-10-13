#include<iostream>
using namespace std;
class multiply{
    public:
    int x;
    int y;
    void getdata(){
        cout<<"Enter Two Number:";
        cin>>x>>y;
    }
    void ans(){
        cout<<"Answer:"<<x*y;
    } 
};
int main(){
    multiply mul;
    mul.getdata();    
    mul.ans();
    return 0;
}
