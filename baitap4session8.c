#include<stdio.h>

int main(){
	int rowCol;
    printf("Nhap so nguyen bat ki:");
    scanf("%d",&rowCol);
    if(rowCol<=0){
        printf("error\n");
        return 1;
    }
    int arr[rowCol][rowCol];
    for (int i=0;i < sizeof(arr)/sizeof(arr[0]);i++){
        for (int j = 0; j < sizeof(arr[0])/sizeof(int); j++){
            printf("Nhap so o hang %d cot %d:",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
        
    }
    int max = arr[0][0];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        for (int j = 0; j < sizeof(arr[0])/sizeof(int); j++){
            if(max <arr[i][j]){
                max =arr[i][j];
            }
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n",max);
    
	return 0;
}
