#include<iostream>
using namespace  std;
int main(){
    cout<<"Enter Arrays Size:";
    int n;
    cin>>n;
    int arrays[n],flag=0;
    cout<<"Enter Element for arrays:";
    for(int i=0;i<n;i++){
        cin>>arrays[i];
    }
    cout<<"Enter Searching Element:";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arrays[i]==x){
            cout<<"Element found is index number:"<<i<<endl;
            flag=1;
        }
    }

    if(flag==0){
        cout<<"Not found";
    }
return 0;
}