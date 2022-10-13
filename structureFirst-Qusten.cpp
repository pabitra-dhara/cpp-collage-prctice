#include<iostream>
using namespace std;
struct shape
{
    int length;
    int width;

};
int main(){
    struct shape s1;
    s1.length=10;
    s1.width=20;
    cout<<"Area:"<<s1.length*s1.width;
}