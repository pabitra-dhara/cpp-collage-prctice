// #include<iostream>
// using namespace std;
// class  abc{
//     int a,b;
//     public: 
//     abc(int x,int y){
//         a=x;
//         b=y;

//     }
//     void show()
//     {
//         cout<<a<<endl;
//         cout<<b;
//     }
// };
// int main(){
//     abc ob1(100,200);
//     ob1.show();
//     return 0;
// }

// defining the constructor within the class
// #include<iostream>
// using namespace std;
// class pabitra{
//     int id;
//     char name[10];
//     int fees;
//     public:
//     pabitra(){
//     cout<<"Enter Id:";
//     cin>>id;
//     cout<<"Enter Name:";
//     cin>>name;
//     cout<<"Enter Fees:";
//     cin>>fees; 
//     }  
//     void outdata(){
//         cout<<"Id:"<<id<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"fees:"<<fees;
//     }     
// };
// int main(){
//     pabitra pp; //constrector call
//     pp.outdata();
//     return 0;
// }

// defining the constructor outside the class
#include<iostream>
using namespace std;
class pabitra{
int id;
char name[10];
int fees;
public:
pabitra();
void outdata();
};
pabitra::pabitra(){
    cout<<"Enter Id:";
    cin>>id;
    cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Enter fees:";
    cin>>fees;
}
void pabitra::outdata(){
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<fees;
}
int main(){
    pabitra pp;
    pp.outdata();
    return 0;
}

