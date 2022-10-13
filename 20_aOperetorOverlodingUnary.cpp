#include<iostream>
using namespace std;
class sample{
    int x,y,z;
    public:
    void getdata(int a,int b,int c);
        void display(void);
        void operator-();
};
void sample::getdata(int a,int b,int c){
    x=a;
    y=b;
    z=c;

}
void sample::display(void){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z;
}
void sample::operator-(){
    x=-x;
    y=-y;
    z=-z;
}
int main(){
    sample ss;
    ss.getdata(10,-20,30);
    cout<<"ss";
    ss.display();
    -ss;
    cout<<"ss";
    ss.display();
    return 0;

}