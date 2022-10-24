void operateMatrix( int** matrix1, int** matrix2, int** matrixProduct, int row1, int col1, int row2, int col2 ){
    int i;
    int j;
    int k;
    int product;
    for( i = 0; i < row1; i++ ){
        for( j = 0; j < col2; j++ ){
            product = 0;
            for( k = 0; k < row2; k++ ){
                product += matrix1[i][k] * matrix2[k][j]; 
            }
            matrixProduct[i][j] = product;
        }
    }
}