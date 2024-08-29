#include<iostream>
using namespace std;


int sumXOr(int input1,int input2[]){
    int sum=0;
    int tor=0;
for(int i=0;i<input1;i++){
    if((i+1)%2==0){
         tor^=input2[i];
    }else{
        sum+=input2[i];
    }
       
}
int a=sum-tor;
return a; 
}

int main(){
    int input2[6]={1,2,3,4,5,6};
    int input1=6;
       
    
    int b=sumXOr(input1,input2);
    cout<<b;
    return 0;
}