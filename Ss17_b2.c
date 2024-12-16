#include <stdio.h>
#include <string.h>
void addString(char text[]);
void showString(char text[]);
void wordString(char text[],int count);
void numberString(char text[],int count2);
void spectialString(char text[],int count3);

int main(){
	char text[100];
	int flag=0;
	int chose;
	int count=0,count2=0,count3=0;
		do{
		printf("Menu\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In ra chuoi\n");
		printf("3.Dem so luong chu cai trong chuoi\n");
		printf("4.Dem so luong chu so trong chuoi\n");
		printf("5.Dem so luong ki tu dac biet\n");
		printf("6.Thoat\n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				addString(text);
				flag++;
				break;
		    case 2:
		    	if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					showString(text);
				}
				break;
			case 3:
				if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					wordString(text,count);
				}
				break;
			case 4:
				if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					numberString(text,count2);
				}
				break;
		    case 5:
		    	if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					spectialString(text,count3);
				}
				break;
			case 6:
				printf("ket thuc chuong trinh\n");
				break;
			default :
				printf("khong thuoc mang\n");
		}
	}while(chose!=6);
	return 0;
}
void addString(char text[]){
	fflush(stdin);
	printf("nhap vao chuoi ");
	fgets(text,100,stdin);
}
void showString(char text[]){
	printf("%s",text);
}
void wordString(char text[],int count){
	int size=strlen(text);
	for(int i=0;i<size;i++){
		if((text[i]>='a'&&text[i]<='z') || (text[i]>='A'&&text[i]<='Z')){
			count++;
		}
	}
	printf("so luong chu cai la %d\n",count);
}
void numberString(char text[],int count2){
	int size=strlen(text);
	for(int i=0;i<size;i++){
		if((text[i]>='0'&&text[i]<='9')){
			count2++;
		}
	}
	printf("so luong chu so la %d\n",count2);
}
void spectialString(char text[],int count3){
	int size=strlen(text);
	for(int i=0;i<size;i++){
	    if(!((text[i]>='a'&&text[i]<='z') || (text[i]>='A'&&text[i]<='Z') || (text[i]>='0'&&text[i]<='9'))){
	    	count3++;
		}
	}
	printf("so luong ki tu dac biet la %d\n",count3-1);
}

