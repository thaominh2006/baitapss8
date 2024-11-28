#include<stdio.h>

int main(){
	int rows = 3, cols = 3;
    int matrix[3][3] = {{1,2,3},{5,6,7},{9,10,11}};
    int sum = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1){
                sum += matrix[i][j];
            }
        }
    }
    printf("Ma tran:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTong cac phan tu tren duong bien cua ma tran là: %d \n", sum);

    return 0;
}
	

