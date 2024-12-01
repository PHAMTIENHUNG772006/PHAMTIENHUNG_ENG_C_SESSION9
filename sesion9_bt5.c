#include<stdio.h>
int main() {
    int arr[100];
    int n = 0;
    int choice, i, index, valune, sum = 0;
    int min = arr[0], max = arr[0];
    do {
        printf("\n********MENU*******\n");
        printf("1. Nhap so phan tu và gan gia tri\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. hien thi cac phan tu chan và tinh tong\n");
        printf("4. hien thi gia tri lon nhat va nho nhat trong mang\n");
        printf("5. Hien thi cac so ngto va tinh tong\n");
        printf("6. Them mot phan tu vao vi tri chi dinh\n");
        printf("7. Thoat\n");
        printf("hay chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("hay nhap so phan tu cua mang :");
				scanf("%d", &n);
				for( i=0;i<n;i++){
				printf("nhap gia  tri ban muon them vao mang : ");
				scanf("%d",&arr[i]);
			    }
                break;
            case 2:
               	for( i = 0;i<n;i++){
				printf("arr[%d] = %d \n", i, arr[i]);
		    	}
                break;
            case 3:
            	sum = 0;
                for(i=0;i<n;i++){
                if(arr[i] % 2 == 0){
               		printf(" tong cac phan tu chan la arr[%d] = %d\n", i, arr[i]);
               		sum += arr[i];
				   }
			   }
			    printf("tong cac so chan la : %d\n", sum);
                break;
            case 4:
            	{
                for(i=0;i<n;i++){
                	if(arr[i]<min) min = arr[i];
					if(arr[i]>max) max = arr[i];
				}
				printf("gia tri lon nhat trong mang la %d\n", max);
				printf("gia tri nho nhat trong mang la %d\n", min);
            }
				break;
            case 5:
			    printf("cac so nguyen to trong mang la : ");
			   
   			    for (i = 2; i * i <= n; i++) {
       			if (n % i == 0){
       				if (n < 2) return 0; 
                    for (int i = 2; i * i <= n; i++) {
                if (n % i == 0){
            }
             }
    			return 1;
    		}
				printf("arr[%d] = %d\n", i, arr[i]);
       			sum += arr[i];
  		    }
                printf("tong cac so nguyen to cua mang la %d", sum);
                break;
            case 6:
            	printf("nhap vi tri muon them phan tu ");
				scanf("%d",&index);
				printf("nhap valune them phan tu ");
					scanf("%d",&valune);
				for( i=n;i>index;i--){
				arr[i]=arr[i-1];
				}
  				  arr[index]=valune;
				for( i=0;i<=n;i++){
				printf("arr[%d] = %d \n", i, arr[i]);
			}
                break;
            case 7:
            	printf("thoat chuong trinh");
            	return 0;
            	break;
            default:
                printf("du lieu khong hop le nhap lai!\n");
        }
    } while (choice != 6);

    return 0;
}

