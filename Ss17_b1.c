#include <stdio.h>

void addItem(int *ptr,int *item);
void showItem(int *ptr,int item);
void lengthArray(int item);
void sumArray(int *ptr,int item);
void max(int *ptr,int item);

int main(){
	int arr[100];
	int chose;
	int item;
	int flag=0;
	do{
		printf("Menu\n");
		printf("1.Nhap vao so phan tu va tung phan tu\n");
		printf("2.Hien thi cac phan tu trong mang\n");
		printf("3.Tinh do dai mang\n");
		printf("4.Tinh tong cac phan tu trong mang\n");
		printf("5.Hien thi phan tu lon nhat\n");
		printf("6.Thoat\n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("nhap vao so luong phan tu ");
				scanf("%d",&item);
				addItem(arr,&item);
				flag++;
				break;
		    case 2:
		    	if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    showItem(arr,item);
				}
				break;
			case 3:
				if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    lengthArray(item);
				}
				break;
			case 4:
				if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    sumArray(arr,item);
				}
				break;
		    case 5:
		    	if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    max(arr,item);
				}
				break;
			case 6:
				printf("ket thuc chuong trinh");
				break;
			default :
				printf("khong thuoc mang");
		}
	}while(chose!=6);
	return 0;
}
void addItem(int *ptr,int *item){
	for(int i=0;i<*item;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
}
void showItem(int *ptr,int item){
	for(int i=0;i<item;i++){
		printf("arr[%d] : %d\n",i,*(ptr+i));
	}
}
void lengthArray(int item){
	printf("do dai cua mang la %d\n",item);
}
void sumArray(int *ptr,int item){
	int sum;
	for(int i=0;i<item-1;i++){
	   sum+=ptr[i];
	}
	printf("tong cua mang la %d\n",sum);
}
void max(int *ptr,int item){
	int max = *(ptr+0);
	for(int i=0;i<item;i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	printf("GTLN : %d\n",max);
}


