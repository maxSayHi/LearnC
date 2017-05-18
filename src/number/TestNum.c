#include<stdio.h>
#include<math.h>

long fun(int n) {
	long s;
	if (n == 1)
		s = 1;
	else
		s = fun(n - 1) + n;
	printf("%d\n", s);
	return s;
}

void testArray() {
	char a[100] = "abcde", b[] = "xyz";
	int i = 0, j = 0;
	while (a[i] != '\0')
		i++;
//	puts(i);
	while (b[j] != '\0') {
		a[i] = b[j];
		j++;
		i++;
	}
	a[i] = '\0';
	puts(a);
}

void testDimension() {
	int i, j, k;
	for (i = 0; i <= 3; i++) {
		for (j = 1; j <= i; j++)
			printf("#");
		for (k = 0; k < 3; k++)
			printf("*");
		printf("\n");
	}
}

int testNum() {
//	puts("learn num");
	printf("%d\n", 017); //1*8^1+7*8^0=8+7=15
	printf("%d\n", 0x26); //10 a  b c d e f
	char a[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'i', 0 }, *p;
	p = a + 010;
	printf("%s \n", p - 5);

	printf("递归结果：%ld\n", fun(5));

	testArray();

	testDimension();
}

void hanoi(int level, char source, char dest, char spare) {
	//如果是第一个盘子，移动
	//如果不是，hanoi上面的盘子
	if (level == 1) {
		printf("%c->%c\n", source, dest);
	} else {
		hanoi(level - 1, source, spare, dest);
		printf("%c->%c\n", source, dest);
		hanoi(level - 1, spare, dest, source);
	}
}

int i = 5, j = 1;

int f(int x) {
	static int k = 0;
	x += k;
	++k;
	return x;
}

void learnStatic() {
	int i;
	i=f(2);
	i=f(3);
	printf("%d",i+j);
}

void testMath(){
//	int i = power();
}

