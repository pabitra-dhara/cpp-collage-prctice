#include<iostream>
using namespace std;
int mul(int a,int b){
int m=a*b;
return m;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
}