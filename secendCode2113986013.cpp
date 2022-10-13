#include<iostream>
using namespace std;
void table(int num){
    int ans;
    for(int i=1;i<=10;i++){
        ans=num*i;
        cout<<num<<"x"<<i<<"="<<ans;
        cout<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    table(num);
    return 0;
}