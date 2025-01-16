#include <iostream>
using namespace std;

void matrixMultiplication(int mat1[10][10], int mat2[10][10], int result[10][10], int rows1=3, int cols1=3, int rows2=3, int cols2=3){
    static int callCount = 0;
    callCount++;
    cout<<"Call count: "<<callCount<<endl;

    if(cols1 != rows2){
        cout<<"Matrix multiplication not possible"<<endl;
        return;
    }

    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols2; j++){
            result[i][j] = 0;
        }
    }

    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols2; j++){
            for(int k=0; k<cols1; k++){
            result[i][k] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main(){
    int mat1[10][10] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[10][10] = {{9,8,7},{4,5,6},{1,2,3}};

    int result[10][10];

    matrixMultiplication(mat1, mat2, result);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j]<<" " ;
        }
        cout<<endl;
    }

}