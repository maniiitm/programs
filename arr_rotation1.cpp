#include <iostream>
using namespace std;
void rot(int arr[],int n,int d){
int p=1;
while(p<d+1){
int last=arr[0];
for(int i=0;i<n-1;i++){
arr[i]=arr[i+1];
}
arr[n-1]=last;
p=p+1;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<"\n";
}
}
int main(){
int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
rot(arr,n,3);
return 0;
}
