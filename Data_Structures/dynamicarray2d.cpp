// C++ program to rotate a matrix
// by 90 degrees

#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){
   int row=matrix.size();
        int column=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=i+1;j<row;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i < row; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

void displayMatrix(vector<vector<int>> &matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){

vector<vector<int>> matrix{
    {1,2,3},
    {4,5,6},
    {7,8,9}
    
};

rotateMatrix(matrix);

displayMatrix(matrix);

return 0;
}