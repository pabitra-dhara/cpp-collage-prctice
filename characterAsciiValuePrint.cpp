#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter Any Character:";
    cin>>x;


    for(int i=65;i<=91;i++){
        if(i==int(x)){
            cout<<i;
            break;
        }
    }
    for(int i=97;i<=122;i++){
        if(i==int(x)){
            cout<<i;
        }
    }

    return 0;
}