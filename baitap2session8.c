#include<stdio.h>

int main(){
	int array[]={1,2,3,4,5};
	int size = sizeof(array)/sizeof(array[0]);
	int x, found=0;
	printf("Moi nguoi dung nhap vao phan tu bat ky: \n");
	scanf("%d", &x);
	for(int i=0; i<size; i++){
		if(array[i]==x){
			printf("Vi tri cua phan tu trong mang la: %d \n",i);
			found=1;
			break;
		}
			
	}
	if(found!=1){
		printf("Phan tu nay khong co trong mang.\n");
	}
	return 0;
}
