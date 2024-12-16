#include <stdio.h>
#include <string.h>
void addString(char text[]);
void showString(char text[]);
void wordString(char text[],int count);
void compareString(char text[],char text2[]);
void toupperString(char text[],char text3[]);
void catString(char text[],char text3[]);

int main(){
	char text[100];
	char text2[100];
	char text3[100];
	int flag=0;
	int chose;
	int count=0;
		do{
		printf("Menu\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In ra chuoi dao nguoc\n");
		printf("3.Dem so luong chu cai trong chuoi\n");
		printf("4.Nhap chuoi khac, so sanh voi chuoi ban dau\n");
		printf("5.In hoa tat ca cac chu so\n");
		printf("6.Nhap chuoi khac va them chuoi do vao chuoi ban dau\n");
		printf("7.Thoat\n");
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
					compareString(text,text2);
				}
				break;
		    case 5:
		    	if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					toupperString(text,text3);
				}
				break;
			case 6:
				if(flag==0){
		    		printf("nhap chuoi truoc\n");
				}else{
					catString(text,text3);
				}
				break;
			case 7:
				printf("ket thuc chuong trinh\n");
				break;
			default :
				printf("khong thuoc mang\n");
		}
	}while(chose!=7);
	return 0;
}
void addString(char text[]){
	fflush(stdin);
	printf("nhap vao chuoi ");
	fgets(text,100,stdin);
}
//
void showString(char text[]){
	int size=strlen(text);
	for(int i=size;i>=0;i--){
		printf("%c",text[i]);
	}
	printf("\n");
}
//
void wordString(char text[],int count){
	int size=strlen(text);
	for(int i=0;i<size;i++){
		if((text[i]>='a'&&text[i]<='z') || (text[i]>='A'&&text[i]<='Z')){
			count++;
		}
	}
	printf("so luong chu cai la %d\n",count);
}
//
void compareString(char text[],char text2[]){
	fflush(stdin);
	printf("nhap chuoi thu hai ");
	fgets(text2,100,stdin);
	int size=strlen(text);
	int size2=strlen(text2);
	if(size>size2){
		printf("ngan hon chuoi ban dau\n");
	}else if(size<size2){
		printf("dai hon chuoi ban dau\n");
	}else{
		printf("bang chuoi ban dau\n");
	}
}
//
void toupperString(char text[],char text3[]){
	int i=0;
	while(text[i]!='\0'){
		text[i]=toupper(text[i]);
		i++;
	}
	printf("%s",text);
	
}
//
void catString(char text[],char text3[]){
	fflush(stdin);
	printf("nhap chuoi thu hai ");
	fgets(text3,100,stdin);
	strcat(text,text3);
	printf("%s",text);
}

