#include<iostream>
using namespace std;

class password{
    int pass,id;
    public:
    void getdata();
    void showdata();
};
void password::getdata(){
    cout<<"Enter Your Id:";
    cin>>id;
    cout<<"Enter Password:";
    cin>>pass;
}
void password::showdata(){
    cout<<"Id:"<<id<<endl;
}

class book:public password{
    public:
    int b_id[10]={1,2,3,4,5,6,7,8,9,10};
    char b_name[10]={"C Programing","C++","Java Programing","HTML","CSS","Java Script","jQuary","DBMS","Networking","PHP"}; 
    string b_det;
    char isuse;
    int i=0;
    void b_in();
    void b_out();
};
void book::b_in(){
    cout<<"Enter Book Details(Id/Name):";
    cin>>b_det;
    if(b_det==b_id || b_det==b_name){
        cout<<"Book Is Available!";
    }
    else{
        cout<<"Book Is Not Available!";
    }
    cout<<"You are Isuse this book(yes/no):";
    cin>>isuse;
    if(isuse=="yes"){
        i=0;
    } 
    else{
        i=1;
    }   
}
void book::b_out(){
    cout<<"Your Book Detail(Id/Name):"<<b_det<<endl;
    if(i=0){
    cout<<"Book Isuse Date:"<<__DATE__;
    cout<<endl;
    cout<<"Book Isuse Time:"<<__TIME__;
    }
    else{
        cout<<"Thank You For Visit Our Site!";
    }    
    delay(1000);
    cout<<"---------------Congratulations Your Book Isuse is done!---------------";
}

int main(){
    book bb;
    cout<<"------------------------Welcome to BCA Libery------------------------"<<endl;
     bb.getdata();
     bb.b_in();

    bb.showdata();
    bb.b_out();
    return 0;
}