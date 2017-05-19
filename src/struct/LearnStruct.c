#include<stdio.h>

void testStruct() {
	struct person {
		char *name;
		int age;
	};
	struct person p1 = { "张三", 10 };
	printf("姓名：%s年龄：%d", p1.name, p1.age);
}

struct keyword {
	char *name;
	int count;
};

void findKeyWordTime() {
//	printf("%d\n",sizeof(struct keyword));
//	struct keyword *keywords = malloc(sizeof(struct keyword) * 2);
//	struct keyword *temp = keywords;
//	strcpy("bobo", (*keywords).name);
//	(*keywords).count = 0;
//	keywords++;
//	printf("%s",(*keywords).name);
//	strcpy("tongtong", (*keywords).name);
//	(*keywords).count = 0;
	struct keyword keywords[2] = { { "bobo", 0 }, { "tt", 0 } };
	for (int i = 0; i < 2; i++) {
		printf("%s\n", keywords[i].name);
	}
//	free(keywords);
//	keywords[0]={"bobo",0};
//	keywords[1]={"tongtong",0};
	char *input = malloc(1024);
	while (NULL != gets(input)) {
//		puts(input);
		for (int i = 0; i < 2; i++) {
//			printf("%s",keywords[i].name);
			if (strcmp(keywords[i].name, input) == 0) {
				keywords[i].count++;
			}
		}

		printf("bobo出现了%d次，tongtong出现了%d次", keywords[0].count,
				keywords[1].count);
	}
}

//typedef struct {
//	char* name;
//	int count;
//} Key;
typedef struct keyword Key;
void getKeyWord() {
	Key* keys = malloc(sizeof(Key) * 3);
	Key* temp = keys;
	Key* loop = keys;
	temp->name = "aa";
	temp->count = 0;
	temp++;
	temp->name = "bb";
	temp->count = 0;
	temp++;
	temp->name = "cc";
	temp->count = 0;

//	printf("%d\n",sizeof(*keys));
//	for(int i=0;i<3;i++,keys++){
//		puts(keys->name);
//	}
	char* input = malloc(1024);
	while (loop->name != NULL) {
		puts(loop->name);
		loop++;
		gets(input);
	}
	free(keys);
	free(input);
}

void testStructDynamic() {
	struct keyword* keywords = malloc(sizeof(struct keyword) * 3);
	struct keyword* temp = keywords;
	keywords->count = 100;
	keywords++;
	keywords->count = 200;
	printf("%d", temp->count);
}
