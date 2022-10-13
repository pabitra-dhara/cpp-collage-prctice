#include<iostream>
using namespace std;
int  main(){
    int num[10],max,min;

    cout<<"Enter 10 Number:";
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    max=num[0];
    for(int i=0;i<10;i++){
        if(max<num[i]){
        max=num[i];
        }
    }
    min=num[0];
    for(int i=0;i<10;i++){
        if(min>num[i]){
        min=num[i];
        }
    }
    cout<<"largest:"<<max<<endl;
    cout<<"smallest:"<<min;
    return 0;
}