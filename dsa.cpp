#include <iostream>
using namespace std;
void rot(int arr[],int n,int d){
int temp[n];
for(int i=0;i<n-d;i++){
temp[i]=arr[i+d];
}
for(int i=0;i<d;i++){
temp[i+n-d]=arr[i];
}
for(int i=0;i<n;i++){
arr[i]=temp[i];
cout<<arr[i]<<"\n";
}
}
int main(){
int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
rot(arr,n,5);
return 0;
}

