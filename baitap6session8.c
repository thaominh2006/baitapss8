#include<stdio.h>

int main(){
	int n = 5; 
    int matrix[5][5] = {
    	{1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
	};
    int sum = 0; 
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nCac phan tu tren duong cheo chinh: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];    
    }
    printf("\nTong cac phan tu tren duong cheo chinh: %d \n", sum);

	return 0;
}
