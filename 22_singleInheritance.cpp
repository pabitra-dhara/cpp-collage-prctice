// #include<iostream>
// using namespace std;
// class b{
//     int a;
//     public:
//     void set_ab(){
//         a=5;
//         int b=10;
//     }
//     int get_a(){
//         return a;

//     }
//     void show_a(){
//         cout<<"A:"<<a;
//     }
// };
// class d:public b{
//     int c;
//     public:
//     void mul(){
//         c=b*get_a();
//     }
//     void display(){
//         cout<<"a:"<<get_a()<<endl;
//         cout<<"b:"<<b<<endl;
//         cout<<"c:"<<c;
//     }
// };
// int main(){
//     d ob;
//     ob.set_ab();
//     ob.mul();
//     ob.show_a();
//     ob.display();

//     ob.b=20;
//     ob.mul();
//     ob.display();
//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
   
    cout<<__DATE__;
    cout<<endl;
    cout<<__TIME__;
    return 0;
}