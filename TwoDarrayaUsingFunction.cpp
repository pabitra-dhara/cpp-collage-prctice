// #include<iostream>
// using namespace std;
// int max(int arr[x][y]){
//     int max=0;

//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             if(arr[x][y]<max){
//                 return max=arr[x][y];
//             }
//         }
//     }
// }
// int main(){
//     int x=4,y=4;
//     int arr[x][y];
//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<max(arr[x][y]);
// }
#include <iostream>
using namespace std;
int main()
{
    int A[4][4];
    int Max;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if (A[i][j] >= A[0][0])
            {
                Max = A[i][j];
            }


        }
        cout<<endl;
    }
    cout<<"Max: "<<Max<<endl;
    return 0;
}
