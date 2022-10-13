#include<iostream>
using namespace std;
class  Add
{
    public:
    int x;
    int y;    
    int ans;
    void getdata();
    void adddata();
    void answer();
};
void Add::getdata()
{
        cout<<"enter two number:";
        cin>>x>>y;    
}
void Add::adddata()
{
    ans=x+y;
}
void Add::answer()
{
cout<<"Answer:"<<ans;
}
int main(){
    Add a;
    a.getdata();
    a.adddata();
    a.answer();
    return 0;

}
