//C++ to count the frequency of the char in a string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    map<char,int> m;
   for(char c:s){
    m[c]++;
   }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}