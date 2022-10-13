#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float length;
    float breadth;
    public:
    void get_data()
    {
        cout<<"Enter the length and breadth of the rectangle:";
        cin>>length>>breadth;
    }
    void show_data()
    {
        cout<<"length="<<length<<endl;
        cout<<"breadth="<<breadth<<endl;
    }
    float area()
    {
        cout<<"area="<<length*breadth;
    }
};
int main(){
    Rectangle rect;
    rect.get_data();
    rect.show_data();
    rect.area();
}