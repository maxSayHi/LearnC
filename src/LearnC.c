/*
 ============================================================================
 Name        : LearnC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void testSwitch() {
	int num = 10;
	switch (num) {
	case 1:
		puts("is 1");
		break;
	case 10:
		puts("is 10");
		break;
	}
}

int main(void) {
	findKeyWordTime();
//	testStruct();
//	getLongestLine();
//	testHeap();
//	testCopy();
//	testStd();
//	openFile();
//	learnStatic();
//	hanoi(3,'a','c','b');
//	testNum();
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
//	int nums[] = { 1, 2, 8, 6, 8, 20 };
////	for (int i = 0; i < 6; i++) {
////		printf("%d\n", nums[i]);
////	}
//	printf("%d\n", *(nums+5));
////	testSwitch();
	return EXIT_SUCCESS;
}



