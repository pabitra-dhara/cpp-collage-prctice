#include<iostream>
using namespace std;
class time{
    int hour;
    int min;
    public:
    void gettime(int h,int m){
        hour=h;min=m;
    }
    void puttime(){
        cout<<hour<<" "<<"hours"<<" ";
        cout<<min<<" "<<"minutes"<<endl;
    }
    void substr(time,time);
};
void time :: substr(time t1,time t2){
    min=t1.min-t2.min;
    hour=min/60;
    min=min%60;
    hour=hour-t1.hour-t2.hour;

}
int main(){
    time q1,q2,q3;
    q1.gettime(9,21);
    q2.gettime(1,44);
    q3.substr(q1,q2);
   
   q3.puttime();
   return 0;  
}