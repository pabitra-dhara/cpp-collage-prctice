
#include<iostream>
int minimum(int[],int);
int maximum(int[],int);

int minimum(int a[],int size)
{
	int i,result=a[0];
	for(i=0;i<size;i++)
	{
		if(result>a[i])
		{
			result=a[i];
		}
	}   
	return result;
}

int maximum(int a[],int size)
{
	int i,result=a[0];
	for(i=0;i<size;i++)
  {
  	if(result<a[i])
    {
    	result=a[i];
	}
  }
  return result;
}
using namespace std;
int main()
{
	int a[10],i,min,max,size=10;
	cout<<"Enter 10 Number:";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	min=minimum(a,size);
	max=maximum(a,size);
	cout<<"minimum number is "<<min<<endl<<"maximum number is "<<max;
	return 0;
}// #include<iostream>
// using namespace std;
// int great(int num[]){
//     max=num[0];
//     for(int i=0;i<10;i++){
//         if(max<num[i]){
//             max=num[i];
//             return max;
//         }
//     }
// }
// int min(int num[]){
//      min=num[0];
//     for(int i=0;i<10;i++){
//         if(min<num[i]){
//             min=num[i];
//             return min;
//         }
//     }
// }
//   int main(){
//   int num[10];
//   cout<<"Enter 10 Number:";
//   for(int i=0;i<10;i++){
//       cin>>num[i];
//   }
//   cout<<great(num[i]);
//   cout<<min(num[i]);
// }