// #include<iostream>
// using namespace std;
// void dTob(int num){
//   int cont;
//   while(num>0){
//     cont=num%2;
//     cout<<cont;
//     num/=2;
//   }
//     return;
// }
// int main(){
//     int num;
//     cin>>num;
//     dTob(num);
// }
#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
} 