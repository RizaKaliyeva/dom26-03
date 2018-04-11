#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <time.h>
#include<stdlib.h>
#include "Header.h"
#include "Header1.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;

	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &n);
		switch (n)
		{
			

		case 2:
		{
			int count = 10 + rand() % 25;
			Tovar *products = NULL;
			products = (Tovar*)malloc(count * sizeof(Tovar));
			int k, sum = 0, k1;
			if (products != 0)
			{
				for (int i = 0; i < count; i++)
				{
					(products + i)->name = (char*)malloc(15 * sizeof(char));
					generateName((products + i)->name);
					products[i].qnt = 1 + rand() % 10;

					(products + i)->price = 200 + rand() % 10000;
					sum += (products + i)->price;
					(products + i)->date = (dates*)malloc(15 * sizeof(dates));
					generateDate((products + i)->date);
					printf("# %d \t %s \t %d.%d.%d\t %d \t %d\n", i + 1, (products + i)->name, (products + i)->date->day, (products + i)->date->month, 
						(products + i)->date->year, (products + i)->qnt, (products + i)->price);
				}


			}

		}break;

		}
	} while (n > 0);
}

