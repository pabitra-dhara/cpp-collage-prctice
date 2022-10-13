#include<iostream>
using namespace std;
class Greatest
{
    private:
    int a,b,c;
    public:
    void get_data()
    {
        cout<<"Enter Three Number:";
        cin>>a>>b>>c;
    }
    void find_data()
    {
        if(a>b && a>c){
            cout<<"1st Number Is Greatest";
        }
        else if(b>a && b>c){
            cout<<"2nd Number Is Greatest";
        }
        else{
            cout<<"3rd Number is Greatest";
        }
    }
};
int main(){
    Greatest g;
    g.get_data();
    g.find_data();
    return 0;
}