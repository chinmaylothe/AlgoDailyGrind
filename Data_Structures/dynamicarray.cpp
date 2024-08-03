#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1;
    cout<<"Enter the no of elements to be inserted in array "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }

    vector<int> arr2({1,2,3,4,5});
    //intialize every element by same number
    vector<int>arr3(5,0);
    
    //iterator 
     cout<<"Elements of arr1: ";
    for(auto i=arr1.begin();i!=arr1.end();i++){
     cout<<*i<<" ";
    }
    cout<<endl;
     
     cout<<"Elements of arr2: ";
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
 
  cout<<"Elements of arr3: ";
for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    //copy another array
    vector<int>arr4(arr2);
     cout<<"Elements of arr4: ";
for(int i=0;i<arr4.size();i++){
        cout<<arr4[i]<<" ";
    }
    cout<<endl;

return 0;
}