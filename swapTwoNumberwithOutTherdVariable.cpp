#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A value:";
    cin>>a;
    cout<<"Enter B value:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A value is:"<<a<<endl;
    cout<<"B value is:"<<b;
    return 0;
}