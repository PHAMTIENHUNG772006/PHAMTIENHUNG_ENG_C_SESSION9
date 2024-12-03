#include<stdio.h>
int main() {
    int row, col, choice;
    int sum = 0, tich, arr[100][100];
    do {
        printf("\n********MENU*******\n");
        printf("1. nhan kich co va cac gia tri cho mang \n");
        printf("2. in gia tri cac phan tu theo ma tran \n");
        printf("3. in ra cac phan tu le va tinh tong \n");
        printf("4. in ra cac phan tu bien va tinh tich \n");
        printf("5. in ra cac phan tu o duong cheo chinh \n");
        printf("6. in ra cac phan tu o duong cheo phu \n");
        printf("7. in ra dong phan tu co gia tri lon nhat \n");
        printf("8. Thoat\n");
        printf("hay chon chuc nang (1-8): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            printf("hay nhap so hang cot bang nhau de tao mot hinh vuong\n");
			printf("hay nhap so hang cua ma tran : ");
			scanf("%d", &row);
			printf("hay nhap so cot cua ma tran : ");
			scanf("%d", &col);
			for ( int i = 0 ; i < row ; i++){
			for ( int j = 0 ; j < col ; j++){
			printf("Nhap phan tu thu %d cua hang %d: ",j+1, i+1);
			scanf("%d", &arr[i][j]);
   			 } 
   			 printf("\n");
       		    }
                break;
            case 2:
             printf("Cac gia tri trong arr[%d][%d] la: \n", row, col);
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
            for(int i=0;i<row;i++){
            	for(int j=0;j<col;j++){
            	if(arr[i][j] % 2 != 0){
            		printf("\n%d", arr[i][j]);
            		sum += arr[i][j];
				}
		    }
		    printf("\n");
		}
		         printf("Tong cac gia tri le trong mang la %d", sum);
                break;
            case 4:
            tich = 1;
                printf("Cac phan tu tren duong bien:\n");
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                            printf("%d ", arr[i][j]);
                            tich *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu duong bien: %d\n", tich);
                break;
            case 5:
                printf("duong cheo chinh cua mang la :");
			    for(int i = 0;i< row;i++){
			   			printf("\t %d", arr[i][i]);
						}
				printf("\n");
                break;
            case 6:
            	printf("duong cheo phu cua mang la :");
                for(int i = 0;i< row;i++){
			   			printf("\t %d", arr[i][row-1-i]);
					}
			    printf("\n");
       	        break;
            case 7:
   			    sum = 0; 
                int maxSum = -99999;
                int maxRow = 0;
                for (int i = 0; i < row; i++) {
                    int rowSum = 0;
                    for (int j = 0; j < col; j++) {
                        rowSum += arr[i][j];
                    }
                    if (rowSum > maxSum) {
                        maxSum = rowSum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri cac phan tu lon nhat la:\n");
                for (int j = 0; j < col; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\nTong cac phan tu trong dong la: %d\n", maxSum);
                break;
            case 8:
            	printf("thoat chuong trinh");
            	return 0;
            	break;
            default:
                printf("du lieu khong hop le nhap lai!\n");
        }
    } while (choice != 8);

    return 0;
}

