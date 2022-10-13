#include<iostream>
using namespace std;
int mul(int num1,int num2){
    //cout<<"Answer:"<<ans;
    return(num1*num2);
}
int main(){
    int num1,num2;
    cout<<"Enter 1st Number:";
    cin>>num1;
    cout<<"Enter 2nd Number:";
    cin>>num2;
    cout<<mul(num1,num2);
}