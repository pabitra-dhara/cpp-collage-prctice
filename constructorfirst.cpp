#include<iostream>
using namespace std;

class abc{
    int a,b;
    public: 
    abc(){
        a=10;
        b=20;

    }
    void show()
    {
        cout<<a<<endl;
        cout<<b;
    }
};
int main(){
    abc ob1;
    ob1.show();
    return 0;
}