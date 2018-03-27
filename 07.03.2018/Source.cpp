#include <cstdio>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "Header.h"

using namespace std;

unsigned short int nz;
#define Size 20

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		printf("Введите номер задания, 999 - для выхода : ");
		scanf("%d", &nz);
		cin.get();

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/*1. Дан двумерный массив целых чисел
					a.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующего столбца двумерного массива
					b.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующей строки двумерного массива */
			system("cls");
			int *mas = NULL, *NewMas = NULL;
			int coll, row;
			printf("Введите кол-во столбцов: ");
			scanf("%d", &coll);
			printf("Введите кол-во строк: ");
			scanf("%d", &row);
			mas = (int*)calloc((coll*row), sizeof(int));
			NewMas = (int*)calloc((coll*row), sizeof(int));

			if (mas == NULL && NewMas == NULL)
			{
				printf("FATAL ERROR");
				exit(EXIT_FAILURE);
			}

			creatMas(mas, coll, row);
			printMas(mas, coll, row);
		}

		else if (nz == 2)
		{
			// I have a more time, please check this message letter
		}

		else
		{
			printf("Такого задания не существует !!! \n");
		}
	}
}
