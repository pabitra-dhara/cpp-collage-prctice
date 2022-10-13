#include<iostream>
using namespace std;
class Add{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter Two Number:";
        cin>>a>>b;
    }
    friend void Ans(Add);
}
void Ans(Add aa){
    cout<<"Answer:"<<a+b;
}
int main(){
    Add aa;
    aa.getdata()
    Ans(aa);
    return 0;
}


// #include <iostream>
// using namespace std;
// class demo{
//  int a,b;
//  public:
//  void getdata();
//  friend int sum(demo);
// };
// void demo::getdata(){
//     cout<<"Enter Two Number:";
//     cin>>a>>b;

// }
// int sum(demo dd){
//     return (dd.a+dd.b);
// }
// int main(){
//     demo dd;
//     dd.getdata();
//     cout<<"Answer:"<<sum(dd);
//     return 0;
// }