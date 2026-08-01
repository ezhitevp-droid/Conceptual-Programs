void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int a = matrixSize;          //stores number of rows
    int b = (*matrixColSize);    //stores number of columns

    bool* row=(bool*)calloc(sizeof(bool),a);
    bool* col=(bool*)calloc(sizeof(bool),b);   //keeps track of which row and col. to set 0

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(matrix[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
}