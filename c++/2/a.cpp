#include <iostream>
using namespace std;

void addMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows=3, int cols=3){
    static int callCount = 0;
    cout<<"Call count: "<<callCount<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        } 
    }
}

int main(){
    int mat1[10][10] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int mat2[10][10] = {
        {9,8,7},
        {6,5,4},
        {3,2,1},
    };

    int result[10][10];

    addMatrices(mat1, mat2, result);
    cout<<"Resultant Matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}