/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person* p)
{
	strcpy(p->name, "김철수");
	p->age = 40;
	strcpy(p->address, "광주광역시 남구");
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "이철수");
	p1.age = 30;
	strcpy(p1.address, "광주광역시 북구");

	setPerson(&p1);

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}


#include <stdio.h>

union example {
	int i;
	char c;
};

int main(void)
{
	union example data;

	data.c = 'A';
	printf("data.c: %c data.i: %d\n", data.c, data.i);

	data.i = 10000;
	printf("data.c: %c data.i: %d\n", data.c, data.i);
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum days {MON, TUE, WED, THU, FRI, SAT, SUN};

char* days_name[] = {
	"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
};

int main(void)
{
	enum days d;

	for (d = MON; d <= SUN; d++)
		printf("%d번째 요일의 이름은 %s입니다\n", d, days_name[d]);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum tvtype {tube, lcd, plasma, projection};

int main(void)
{
	enum tvtype type;
	printf("TV 종류 코드를 입력하세요: ");
	scanf_s("%d", &type);

	switch (type)
	{
	case tube:
		printf("브라운관 TV를 선택하셨습니다.\n");
		break;
	case lcd:
		printf("LCD TV를 선택하셨습니다.\n");
		break;
	case plasma:
		printf("PDP TV를 선택하셨습니다.\n");
		break;
	case projection:
		printf("프로젝션 TV를 선택하셨습니다.\n");
		break;
	default:
		printf("다시 선택하여 주십시오.\n");
		break;
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	printf("(%d, %d) + (%d, %d) -> (%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n"); //"C:\Users\ironm\source\repos\Project18\Project18\sample.txt"

	fclose(fp);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp = NULL;
	
	char c;
	fp = fopen("alphabet.txt", "w"); //"C:\Users\ironm\source\repos\Project18\Project18\alphabet.txt"

	if (fp == NULL) {
		fprintf(stderr, "파일 alphabet.txt를 열 수 없습니다.\n");
		exit(1);
	}

	for (c = 'a'; c <= 'z'; c++)
		fputc(c, fp);

	fclose(fp);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	char str[100];

	fp = fopen("file.txt", "w");

	if (fp == NULL) {
		fprintf(stderr, "파일 file.txt를 열 수 없습니다.\n");
		exit(0);
	}

	do {
		gets_s(str, sizeof(str));
		fputs(str, fp);
	} while (strlen(str) != 0);

	fclose(fp);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[100];

	int c;

	printf("원본 파일 이름: ");
	scanf_s("%s", file1);

	printf("복사 파일 이름: ");
	scanf_s("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}

	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp2);

	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	fp = fopen("sales.txt", "a");
	fprintf(fp, "2022.05.23 매출: %d\n", 200000);

	fclose(fp);

	return 0;
}