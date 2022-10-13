#include<iostream>
using namespace std;
class parent{
    char name[10];
    int roll;
    int marks[5];
    public:
    void getdata(){
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Roll:"<<endl;
        cin>>roll;
        cout<<"Enter 5 Subject Marks:";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }

    int mar(int i){
        return marks[i];
        }
    };

class child:public parent{
    int total;
    int avg;
    public:
    void indata()
    {
        for(int i=0;i<5;i++){
            total=total+mar(i);
        }
        avg=total/5;
    }
    void output(){
        cout<<total<<endl;
        if(avg>=90){
            cout<<"A+"<<endl;
        }
        else if(avg>=80){
            cout<<"A"<<endl;
        }
        else if(avg>=70){
            cout<<"B+"<<endl;
        }
        else if(avg>=60){
            cout<<"B"<<endl;
        }
        else if(avg<60){
            cout<<"c"<<endl;
        }
    }  
};
int main(){
    child cc;
    cc.getdata();
    cc.display();
    cc.indata();
    cc.output();
    return 0;
}
