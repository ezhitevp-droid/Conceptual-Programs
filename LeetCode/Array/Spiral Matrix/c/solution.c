#include <stdio.h>
#include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    // Initialize the 4 directions of the matrix
    int top = 0;
    int bottom = matrixSize - 1;
    int right = *matrixColSize - 1;
    int left = 0;

    // Create an array to store the resultant array
    int *res = (int*)malloc(matrixSize * (*matrixColSize) * sizeof(int));
    *returnSize = 0;

    // Iterate until you have no rows and columns
    while (top <= bottom && left <= right) {
        // Iterate from left to right
        // We have the top as constant as the row number
        for (int i = left; i <= right; i++) {
            res[(*returnSize)++] = matrix[top][i];
        }
        // Now, we can move to the next row
        // Increment top by 1 to move to the next row
        top++;

        // Iterate from top to bottom
        // We have right as the constant column number
        for (int i = top; i <= bottom; i++) {
            res[(*returnSize)++] = matrix[i][right];
        }
        // Now, we can eliminate the right column
        // Decrement right by 1 to move to the previous column
        right--;

        // In case where we have no more rows to print,
        // We need to check if the top is still less than or equal to bottom
        if (top <= bottom) {
            // Iterate from right to left
            // We have the bottom as constant as the row number
            for (int i = right; i >= left; i--) {
                res[(*returnSize)++] = matrix[bottom][i];
            }
            // Now, we can eliminate the bottom row
            // Decrement bottom by 1 to move to the previous row
            bottom--;
        }

        // In case where we have no more columns to print,
        // We need to check if the left is still less than or equal to right
        if (left <= right) {
            // Iterate from bottom to top
            // We have left as constant as the column number
            for (int i = bottom; i >= top; i--) {
                res[(*returnSize)++] = matrix[i][left];
            }
            // Now, we can eliminate the left column
            // Increment left by 1 to move to the next column
            left++;
        }
    }

    return res;
}