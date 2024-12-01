#include<stdio.h>
int main(){
	int arr[100];
	int n;
	int i;
	printf("hay nhap so phan tu cua mang :");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("nhap gia  tri ban muon them vao mang : ");
		scanf("%d",&arr[i]);
	}
	int index,valune;
	printf("nhap vi tri muon sua phan tu ");
	scanf("%d",&index);
		printf("nhap gia tri ban sua phan tu ");
	scanf("%d",&valune);
    arr[index]=valune;
	for( i=0;i<=n;i++){
		printf("arr[%d] = %d \n", i, arr[i]);
		
	}
	return 0;
}
