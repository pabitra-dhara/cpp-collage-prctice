#include<iostream>
using namespace std;
int main(){
    char para[30];
    cout<<"Enter Any Line:";
    cin>>para;
    int vow,con,num;
  for(int i=0;i<para[i];i++){

      if((para[i]=='a')||(para[i]=='A')||(para[i]=='e')||(para[i]=='E')||(para[i]=='i')||(para[i]=='I')||(para[i]=='O')||(para[i]=='o')||(para[i]=='u')||(para[i]=='U')){
          vow++;
      }
      else if(para[i]>=0 && para[i]<=9){
          num++;
      }
      else{
          con++;
      }
  }
  cout<<"Vowel is:"<<vow;
  cout<<"conconent is:"<<con;
  cout<<"Number is:"<<num;
  return 0;
}