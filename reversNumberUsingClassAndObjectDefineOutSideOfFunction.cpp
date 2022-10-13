#include<iostream>
using namespace std;
class Revers
{
private:
    int num,ans=0,mod;
public:
void get_data();
void find_data();
void display_data();
};
void Revers::get_data(){
    cout<<"Enter Any Number:";
    cin>>num;
}
void Revers::find_data(){
    while (num>0)
    {
        mod=num%10;
        ans=(ans*10)+mod;
        num/=10;
    }
}
void Revers::display_data(){
        cout<<"Revers for Enter Number:"<<ans;
    }
int main(){
Revers r;
r.get_data();
r.find_data();
r.display_data();
return 0;
}