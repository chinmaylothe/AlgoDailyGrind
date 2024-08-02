#include<iostream>
using namespace std;

int main(){

int arr1[]={1,2,3,4,5};
cout<<"Enter the no of elements to be inserted in array "<<endl;
int n;
cin>>n;
int arr2[n];
for(int i=0;i<n;i++){
    cin>>arr2[i];
}
for(int i=0;i<n;i++){
    cout<<"The elements in array arr1  & arr2 are: "<<endl;
    cout<<arr1[i]<<" "<<arr2[i];
}


return 0;
}