#include<iostream>
using namespace std;
inline int add(int a){
    int sum=0;
    for(int i=0;i<=a;i++){
        sum=sum+i;
        
    }
    return sum;
} 
int main(){
    cout<<"Answer is:"<<add(3);
    return 0;
}