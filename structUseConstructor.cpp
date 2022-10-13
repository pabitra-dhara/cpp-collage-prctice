#include<iostream>
using namespace std;
struct shape{
    int l;
    int w;
    shape(int x,int y){
        l=x;
        w=y;

    }
    void printarea()
    {
        cout<<"Area:"<<l*w;
    }
};
int main(){
    struct shape s1=shape(10,20);
    s1.printarea();
}