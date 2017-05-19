#include<stdio.h>

void testPointer(){
	char* str="hello";
	str=str+4;
//	printf("%c",*str);
	puts(str);
}
