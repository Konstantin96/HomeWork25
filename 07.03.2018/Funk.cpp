#include <cstdio>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "Header.h"

using namespace std;

void creatMas(int *mas, int coll, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
			*(mas + i*coll + j) = rand() % 100;
	}
}

void printMas(int *mas, int coll, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
			printf("%d\t", *(mas + i*coll + j));
		printf("\n");
	}
}