#include<stdio.h>
int main(){
	int arr[100];
	int n, select;
    printf("MENU\n\n");
    printf("1.Nhap so phan tu va gia tri cho mang\n");
    printf("2.In ra cac phan tu trong mang\n");
    printf("3.Dem so luong cac so hoan hao co trong mang\n");
    printf("4.Tim gia tri nho thu 2 trong mang\n");
    printf("5.Them mot phan tu vao vi tri dau tien trong mang\n");
    printf("6.Xoa mot phan tu\n");
    printf("7.Sap xep mang theo thu tu giam dan\n");
    printf("8.Tim kiem phan tu\n");
    printf("9.Sap xep lai sao cho so le dung truoc va so chan dung sau\n");
    printf("10.Dao nguoc thu tu cac phan tu co trong mang\n");
    printf("11.Thoat\n\n");
    while (select != 11){
    	printf("\nLua chon cua ban: ");
    	scanf("%d",&select);
    	switch (select){
    		case 1:{
    			printf("Hay nhap so phan tu cua mang: ");
    			scanf("%d",&n);
    			if (n < 1){
    				printf("So phan tu khong hop le\n");
    				n = 0;
				}
				else{
					for (int i = 0;i < n;i++){
						printf("Hay nhap phan tu thu %d: ",i + 1);
						scanf("%d",&arr[i]);
					}
				}
				break;
			}
			case 2:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					for (int i = 0;i < n;i++){
						printf("arr[%d] = %d\n",i,arr[i]);
					}
				}
				break;
			}
			case 3:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					printf("Cac so hoan hao trong mang la:");
					for (int i = 0;i < n;i++){
						int Tong = 0;
						int count = 0;
						for (int j = 1;j < arr[i];j++){
							if ((arr[i] % j) == 0){
								Tong += j;
								count++;
							}
						}
						if (Tong == arr[i]){
							printf("%d ",arr[i]);
						}
					}
				}
				break;
			}
			case 4:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					
				}
				break;
			}
			case 5:{
				int value;
				int temp;
				printf("Hay nhap gia tri ban muon them vao mang: ");
				scanf("%d",&value);
				n++;
				for (int i = n - 1;i >= 1;i--){
					temp = arr[i];
					arr[i] = arr[i - 1];
					arr[i - 1] = temp;
				}
				arr[0] = value;
				break;
			}
			case 6:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int index;
					printf("Hay nhap vi tri ban muon xoa: ");
					scanf("%d",&index);
					if (index < 0 || index > n){
						printf("Vi tri can xoa khong ton tai\n");
					}
					else{
						int temp;
						n--;
						for (int i = index - 1;i < n;i++){
							temp = arr[i];
							arr[i] = arr[i + 1];
							arr[i + 1] = temp;
						}
					}
				}
				break;
			}
			case 7:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					for (int i = 0;i < n - 1;i++){
						int max_idx = i;
						for (int j = i + 1;j < n;j++){
							if (arr[j] > arr[max_idx]){
								max_idx = j;
							}
						}
						int temp = arr[max_idx];
						arr[max_idx] = arr[i];
						arr[i] = temp;
					}
					printf("Mang theo thu tu giam dan la: ");
					for (int i = 0;i < n;i++){
						printf("%d ",arr[i]);
					}
				}
				break;
			}
			case 8:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int key, left, right, mid; 
					int position = -1;
					printf("Hay nhap phan tu ban muon tim : ");
                    scanf("%d", &key);
                    left = 0;
                    right = n - 1;
					while (left <= right) {
                        mid = (left + right) / 2;
                        if (arr[mid] == key) {
                            position = mid;  
                            break;
                        }
                        if (arr[mid] > key) {
                            right = mid - 1;
                        }
                        else {
                            left = mid + 1;
                        }
                    }
                    if (position != -1) {
                        printf("Phan tu %d duoc tim thay tai vi tri %d\n", key, position + 1);
                    }
				    else {
                        printf("Phan tu khong ton tai trong mang \n", key);
                    }
				}
				break;
			}
			case 9:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					
				}
				break;
			}
			case 10:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int temp;
					for (int i = 0;i < n / 2;i++){
						temp = arr[n - i - 1];
						arr[n - i - 1] = arr[i];
						arr[i] = temp;
					}
					printf("Mang sau khi duoc sap xep la:\n");
					for (int i = 0;i < n;i++){
						if (arr[i] % 2 == 0){
							printf("arr[%d] = %d - chan\n",i,arr[i]);
						}
						else{
							printf("arr[%d] = %d - le\n",i,arr[i]);
						}
					}
				}
				break;
			}
			case 11:{
				printf("Thoat chuong trinh\n");
				break;
			}
			
			default :{
				printf("Lua chon khong hop le\n");
				break;
			}	
		}
	}
    
	return 0;
}

