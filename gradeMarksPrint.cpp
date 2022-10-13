#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4,s5;
    cout<<"Enter 5 Subject Number:";
    cin>>s1>>s2>>s3>>s4>>s5;
    int total=s1+s2+s3+s4+s5;
    if(total>=450){
        cout<<"A+";
    }
    else if(total>=400){
        cout<<"A";
    }
    else if(total>=350){
        cout<<"B+";
    }
    else if(total>=300){
        cout<<"B";
    }
    else if(total<250){
        cout<<"C";
    }
return 0;
}