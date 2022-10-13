#include<iostream>
using namespace std;
class factorial
{
    private:
    int i,fac=1,num;
    public:
    void get_data();
    void calcul_data();
    void display_data();
};
void factorial::get_data()
{
    cout<<"Enter A Number:";
    cin>>num;
}
void factorial::calcul_data(){
       for(int i=num;i>1;i--){
        fac=fac*i;
    } 
}
void factorial::display_data()
{
    cout<<"Factorial:"<<fac;
}
int main(){
    factorial f;
    f.get_data();
    f.calcul_data();
    f.display_data();
    return 0;
}