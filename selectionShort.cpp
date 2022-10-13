#include<iostream>
using namespace std;
int main(){
    int n;   
    cout<<"Enter Arraya Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Arraya Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

