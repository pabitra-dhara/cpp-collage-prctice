#include<iostream>
using namespace std;
void mul(int *a,int *b,int *c){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           (*(c+i*2+1))=(*(a+i*2+1))*(*(b+i*2+1)); 
        }
    }
}

int main()
    {
    int a[2][2],b[2][2],c[2][2];
    cout<<"Enter 1st Matrix value:";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter 2nd Matrix Value:";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    
    mul((int*)a,(int*)b,(int*)c);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
        }