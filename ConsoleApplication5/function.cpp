#include<stdio.h>
#include <string.h>
#include <time.h>
#include<stdlib.h>
#include "Header.h"
#include "Header1.h"



void generateDate(dates *a)
{
	a->day = 1 + rand() % 30;
	a->month = 1 + rand() % 11;
	a->year = 2017 + rand() % 2;
}

void generateName(char *name)
{
	strcpy(name, "Number #");
	int a = 1 + rand() % 30;
	char t[3];
	itoa(a, t, 10);
	strcat(name, t);
}




void generateStart(char *name)
{
	strcpy(name, "Start #");
	int a = 1 + rand() % 30;
	char t[3];
	itoa(a, t, 10);
	strcat(name, t);
}

void generateEnd(char *name)
{
	strcpy(name, "End #");
	int a = 1 + rand() % 30;
	char t[3];
	itoa(a, t, 10);
	strcat(name, t);
}


void maxdlina(MARSHRUT *a, int r)

{
	int maxLen = 10, ind;
	for (int i = 0; i < r; i++)
	{
		if (a[i].length > maxLen)
		{
			maxLen = a[i].length;
			ind = i;
		}
	}

	printf(" # %d\t%s\t%s\t%d\n", a[ind].num, a[ind].startName, a[ind].endName, a[ind].length);

}

