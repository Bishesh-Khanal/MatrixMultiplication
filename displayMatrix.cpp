#include <iostream>

using std::cout;
using std::endl;

void displayMatrix( int** matrix, int row, int col ){
    int i;
    int j;
    for( i = 0; i < row; i++ ){
        for( j = 0; j < col; j++ ){
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
}