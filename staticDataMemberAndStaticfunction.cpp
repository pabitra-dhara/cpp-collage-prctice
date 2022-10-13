#include<iostream>
using namespace std;
class item 
{
    static int count;
    int number;
    public:
    void getdata(int a){
        number=a;
        count++;

    }
    void showdata()
    {
        cout<<"count:"<<count<<endl;

    }
};
int item :: count;
int main(){
    item a,b,c;
    a.getdata(10);
    b.getdata(20);
    c.getdata(30);

    a.showdata();
    b.showdata();
    c.showdata();

    return 0;    
}