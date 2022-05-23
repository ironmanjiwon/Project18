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
	strcpy(p->name, "��ö��");
	p->age = 40;
	strcpy(p->address, "���ֱ����� ����");
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "��ö��");
	p1.age = 30;
	strcpy(p1.address, "���ֱ����� �ϱ�");

	setPerson(&p1);

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);

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
		printf("%d��° ������ �̸��� %s�Դϴ�\n", d, days_name[d]);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum tvtype {tube, lcd, plasma, projection};

int main(void)
{
	enum tvtype type;
	printf("TV ���� �ڵ带 �Է��ϼ���: ");
	scanf_s("%d", &type);

	switch (type)
	{
	case tube:
		printf("����� TV�� �����ϼ̽��ϴ�.\n");
		break;
	case lcd:
		printf("LCD TV�� �����ϼ̽��ϴ�.\n");
		break;
	case plasma:
		printf("PDP TV�� �����ϼ̽��ϴ�.\n");
		break;
	case projection:
		printf("�������� TV�� �����ϼ̽��ϴ�.\n");
		break;
	default:
		printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n");
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
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n"); //"C:\Users\ironm\source\repos\Project18\Project18\sample.txt"

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
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
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
		fprintf(stderr, "���� file.txt�� �� �� �����ϴ�.\n");
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

	printf("���� ���� �̸�: ");
	scanf_s("%s", file1);

	printf("���� ���� �̸�: ");
	scanf_s("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
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
	fprintf(fp, "2022.05.23 ����: %d\n", 200000);

	fclose(fp);

	return 0;
}