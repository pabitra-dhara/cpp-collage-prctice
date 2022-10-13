#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Three Number:";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
    cout<<"A is largest"<<endl;
    }
    else if(b>a && b>c){
        cout<<"B is largest"<<endl;
    }
    else{
        cout<<"c is largest"<<endl;
    }


    if((a>b && a>c)|| (a>b && a>c)){
        cout<<"a is second largest"<<endl;
    }
    else if((b>a && b>c)||(b>a && b>c)){
        cout<<"b is second largest"<<endl;
    }
    else{
        cout<<"c is second largest"<<endl;
    }

    if(a<b && a<c){
    cout<<"A is smallest"<<endl;
    }
    else if(b<a && b<c){
        cout<<"B is smallest"<<endl;
    }
    else{
        cout<<"c is smallest";
    }


return 0;
}
