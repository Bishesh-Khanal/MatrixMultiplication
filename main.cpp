#include <iostream>
#include "library.h"

using std::cout;
using std::endl;

int main(){
    int row1;
    int col1;
    int row2;
    int col2;
    int i;
    cout << "Enter the values for the first matrix" << endl;
    setSize( row1, col1 );
    int** matrix1 = new int*[row1];
    for( i = 0; i < row1; i++ ){
        matrix1[i] = new int[col1];
    }
    setMatrix( matrix1, row1, col1 );
    cout << "Enter the values for the second matrix" << endl;
    setSize( row2, col2 );
    int** matrix2 = new int*[row2];
    for( i = 0; i < row2; i++ ){
        matrix2[i] = new int[col2];
    }
    setMatrix( matrix2, row2, col2 );
    if( col1 == row2 ){
        int** matrixProduct = new int*[row1];
        for( i = 0; i < row1; i++ ){
            matrixProduct[i] = new int[col2];
        }
        operateMatrix( matrix1, matrix2, matrixProduct, row1, col1, row2, col2);
        cout << "The product of the two matrices is:" << endl;
        displayMatrix( matrixProduct, row1, col2 );
        for( i = 0; i < row1; i++ ){
            delete[]matrixProduct[i];
            matrixProduct[i] = NULL;
        }
        delete[]matrixProduct;
        matrixProduct = NULL;
    } else{
        cout << "Multiplication not possible" << endl;
    }
    for( i = 0; i < row2; i++ ){
        delete[]matrix2[i];
        matrix2[i] = NULL;
    }
    delete[]matrix2;
    matrix2 = NULL;
    for( i = 0; i < row1; i++ ){
        delete[]matrix1[i];
        matrix1[i] = NULL;
    }
    delete[]matrix1;
    matrix1 = NULL;
    return 0;
}