#include<iostream>
using namespace std;
int mul(int m,int n){
    return(m*n);
}
float mul(float m,float n){
    return(m*n);
}

int main(){
    cout<<"Enter 2 Number:";
    float m,n;
    cin>>m>>n;
    float k=mul(m,n);
    cout<<"Ans:"<<k;
}