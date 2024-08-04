#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10][10];
    int b[10][10];

    int r1,r2,c1,c2;
    cout<<"Enter the no of rows and cols of matrix a =: "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the no of rows and cols of matrix b =: "<<endl;
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"Matrix multiplication is not possible"<<endl;
        return 0;
    }

    cout<<"Enter the elements of matrix a: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of matrix b: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"Resultant matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    


}