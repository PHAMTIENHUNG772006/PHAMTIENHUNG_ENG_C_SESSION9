#include<stdio.h>
int main() {
    int arr[100];
    int n = 0;
    int choice,index,valune;
    do {
        printf("\n********MENU*******\n");
        printf("1. Nhap pha tu vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu \n");
        printf("4. thay the phan tu\n");
        printf("5. xoa phan tu\n");
        printf("6. Thoat\n");
        printf("hay chon chuc nang (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("hay nhap so phan tu cua mang :");
				scanf("%d", &n);
				for(int i=0;i<n;i++){
				printf("nhap gia  tri ban muon them vao mang : ");
				scanf("%d",&arr[i]);
			    }
                break;
            case 2:
               	for(  int i = 0;i<=n;i++){
				printf("arr[%d] = %d \n", i, arr[i]);
		    	}
                break;
            case 3:
                printf("nhap vi tri muon them phan tu ");
				scanf("%d",&index);
			    printf("nhap valune them phan tu ");
				scanf("%d",&valune);
   				for(int i=0;i>index;i--){
   					arr[i]=arr[i-1];
				   }
				    arr[index]=valune;
                break;
            case 4:
                printf("nhap vi tri muon sua phan tu ");
	            scanf("%d",&index);
	        	printf("nhap gia tri ban sua phan tu ");
	            scanf("%d",&valune);
                arr[index]=valune;
                break;
            case 5:
				printf("nhap vi tri muon xoa phan tu ");
				scanf("%d",&index);
				printf("nhap valune them phan tu ");
				scanf("%d",&valune);
     			for (int i = index; i < n - 1; i++) {
            	arr[i] = arr[i + 1];
       			 }
     		   (n)--;
   				arr[index]=valune;
                break;
            case 6:
                printf("Thoát chuong trình.\n");
                break;
            default:
                printf("L?a ch?n không h?p l?, vui lòng ch?n l?i!\n");
        }
    } while (choice != 6);

    return 0;
}

