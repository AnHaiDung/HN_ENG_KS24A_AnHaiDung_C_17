#include <stdio.h>

void addItem(int *ptr,int *item);
void showItem(int *ptr,int item);
void primeArray(int *ptr,int item);
void reverseArray(int *ptr,int item);
void arrangeArray(int *ptr,int item);
void findArray(int *ptr,int item,int findItem);

int main(){
	int arr[100];
	int chose;
	int item;
	int flag=0;
	int findItem;
	do{
		printf("Menu\n");
		printf("1.Nhap vao so phan tu va tung phan tu\n");
		printf("2.Hien thi cac phan tu so chan trong mang\n");
		printf("3.In phan tu so nguyen to\n");
		printf("4.In mang dao nguoc\n");
		printf("5.sap xep\n");
		printf("6.Tim kiem phan tu\n");
		printf("7.Thoat\n");
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
				    primeArray(arr,item);
				}
				break;
			case 4:
				if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    reverseArray(arr,item);
				}
				break;
		    case 5:
		    	if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    arrangeArray(arr,item);
				}
				break;
			case 6:
				if(flag==0){
		    		printf("nhap mang truoc");
				}else{
				    findArray(arr,item,findItem);
				}
				break;
			case 7:
				printf("ket thuc chuong trinh");
				break;
			default :
				printf("khong thuoc mang");
		}
	}while(chose!=7);
	return 0;
}
void addItem(int *ptr,int *item){
	for(int i=0;i<*item;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
}
//
void showItem(int *ptr,int item){
	for(int i=0;i<item;i++){
		if(*(ptr+i)%2==0){
			printf("arr[%d] : %d\n",i,*(ptr+i));
		}
	}
}
//
void primeArray(int *ptr,int item){
	int snt=0;
	for(int i=0;i<item;i++){
		if(ptr[i]==1){
			continue;
		}
		for(int j=2;j<ptr[i];j++){
			if(ptr[i]%j==0){
				snt++;
			}
		}
		if(snt==0){
			printf("so nguyen to trong mang %d\n",ptr[i]);
		}
		snt=0;
	}
}
//
void reverseArray(int *ptr,int item){
    for(int i=item-1;i>=0;i--){
		printf("arr[%d] : %d\n",i,*(ptr+i));
	}
}
//
void arrangeArray(int *ptr,int item){
	int pick;
	printf("1.Tang dan\n");
	printf("2.Giam dan\n");
	scanf("%d",&pick);
	if(pick==1){
		for(int i=0;i<item;i++){
		    for(int j=0;j<item-i-1;j++){
			    if(ptr[j]>ptr[j+1]){
				    int num;
				    num=ptr[j];
			        ptr[j]=ptr[j+1];
				    ptr[j+1]=num;
			    }
		    }   
	    }
	    for(int i=0;i<item;i++){
		    printf("arr[%d] : %d\n",i,*(ptr+i));
	    }
	}else{
		for(int i=0;i<item;i++){
		    for(int j=0;j<item-i-1;j++){
			    if(ptr[j]<ptr[j+1]){
				    int num;
				    num=ptr[j];
			        ptr[j]=ptr[j+1];
				    ptr[j+1]=num;
			    }
		    }   
	    }
	    for(int i=0;i<item;i++){
		    printf("arr[%d] : %d\n",i,*(ptr+i));
	    }
	}
	
}
//
void findArray(int *ptr,int item,int findItem){
	int count=0;
	printf("nhap so muon tim ");
	scanf("%d",&findItem);
	for(int i=0;i<item;i++){
		if(findItem==ptr[i]){
			printf("so can tim o vi tri thu %d",i);
			count++;
		}
	}
	if(count==0){
		printf("khong tim thay phan tu trong mang\n");
	}
}
