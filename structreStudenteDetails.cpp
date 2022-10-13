#include<iostream>
using namespace std; 
struct student{
    char name[10];
    int roll;
    int mark[5];
    void getdata(){
        cout<<"Enter Your Name:";
        cin>>name;
        cout<<"Enter Roll Number:";
        cin>>roll;
        cout<<"Enter 5 Subject Mark:";
        for(int i=0;i<5;i++){
            cin>>mark[i];
        }
    }
            void putdata(){
            cout<<name<<endl;
            cout<<roll<<endl;
            for(int i=0;i<5;i++){
                 cout<<mark[i]<<endl;
            }
        }
};
int main(){
    struct student s1;
    s1.getdata();
    s1.putdata();
    return 0;
} 