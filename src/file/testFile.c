#include<stdio.h>
#include<string.h>
#define MAX 1024

void openFile() {
	FILE *fp = fopen("/home/han/LearnC/hi.c","r");
	char buf[1024];
	while(fgets(buf,1024,fp)!=NULL){
		printf("%s\n",buf);
		int position = ftell(fp);
		printf("%d\n",position);
	}
	fclose(fp);

//	fprintf(fp,"hello this is a good file");
//	int result = fclose(fp);
}

void testStd(){
//	int result[1024];
//	gets(result);
//	puts(result);
	int i;
	scanf("%d",&i);
	printf("%d",i);
}

void testCopy(){
	char buf[1024];
	FILE *fp=fopen("/home/han/Desktop/ocr_test_3.jpg","r");
	FILE *fpdest=fopen("/hdd/LearnC/test.jpg","w+b");
	while(NULL!=fread(buf,sizeof(char),1024,fp)){
		puts("line!!");
		fwrite(buf,sizeof(char),1024,fpdest);
	}
	fclose(fp);
	fclose(fpdest);
}

void testHeap(){
	char *name = malloc(28);
	name[0]='a';
	name[1]='b';
	printf("%s\n",name);
	int i=65536;
	char c;
	long l;
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(&i));
	printf("%d",i);
}

int str_length(char *str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
//	printf("长度是%d\n",i);
	return i;
}

void getLongestLine(){
	char *str=malloc(MAX);
	char *result;
	int max=0;
	while(NULL!=gets(str)){
//		puts(str);
//	    printf("%d",str_length(str));
		int length=str_length(str);
		if(length>max){
			max = length;
		}
		printf("最大长度是%d",max);
	}

	free(str);
}


