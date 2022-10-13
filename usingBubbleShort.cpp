// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter array size:";
//     cin>>n;
//     int arra[n];
//     cout<<"Enter Array Element:";
//     for(int i=0;i<n;i++){
//         cin>>arra[i];
//     }
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-1;j++){
//         if(arra[i]>arra[j+1])  {
//             int temp=arra[j];
//             arra[j]=arra[j+1];
//             arra[j+1]=temp;
//         }
//     }
// }    
// }
#include <iostream>
using namespace std;
int main(){

    int arr[50], num, x, y, temp;    

    cout<<"Enter Array Size:";

    cin>>num;   

    cout<<"Enter Array Element:";

    for(x = 0; x < num; x++){

        cin>>arr[x];
    }
    for(x = 0; x < num - 1; x++){       

        for(y = 0; y < num - x - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

    cout<<"Array after implementing bubble sort:";

    for(x = 0; x < num; x++){

      cout<<arr[x]<<endl;

    }

    return 0;

}