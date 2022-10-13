#include<iostream>
using namespace std;
class  abc{
    int a,b;
    public: 
    abc(int x,int y=10){
        a=x;
        b=y;

    }
    void show()
    {
        cout<<a<<endl;
        cout<<b;
    }
};
int main(){
    abc ob1(100);
    ob1.show();
    abc ob2(70,9);
    ob2.show();
    return 0;
}
