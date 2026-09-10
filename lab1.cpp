#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <string.h>

struct student
{
	int Nomzach;
	char famil[20];
	char name[20], facult[20];
};


int main(void)
{
    setlocale(LC_ALL, "rus");
    int min, max;
    // 3 задание
    int n;
    printf("Введите размер массива: ");
    if (scanf("%d", &n) != 1  n <= 0) {
        printf("\n Некорректный размер массива!\n");
        return 1;
    }

    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    // 2 задание
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        array[i] = -20 + rand() % 61;
        printf("%d;", array[i]);
    }
    //1 задание
    max = min = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] < min) { min = array[i]; }
        if (array[i] > max) { max = array[i]; }
    }
    printf("\n max: %d \n min: %d \n max-min=%d \n", max, min, (max - min));
    free(array);

      // 4 задание
  int sum;
  int matrix[5][5];
  for (int i = 0; i<5; i++)
  {
    sum = 0;
    for (int j= 0; j<5; j++){
      matrix[i][j] = -50 + rand() % 101;
      sum += matrix[i][j];
      printf("%4d", matrix[i][j]);
    }
    printf("%4d\n",sum);
  }
    	// 5 задание
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for (i = 0; i<3; i++)
	{
		printf("Введите фамилию студента\n"); scanf("%20s", stud[i].famil);
	}
	for (i = 0; i<3; i++)
	{
		printf("Введите имя студента %s\n", stud[i].famil); scanf("%20s", stud[i].name);
	}
	for (i = 0; i<3; i++)
	{
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
	}
	for (i = 0; i<3; i++)
	{
		printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
	}

	for (i = 0; i<3; i++)
	{
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}
	char Search[20];
	while (0==0)
	{
		printf("Поиск(чтобы закончить введите Q):"); scanf("%20s",Search);
		if (strcmp(Search, "Q") == 0)break;
		for (i = 0; i < 3; i++)
		{
			if (strcmp(stud[i].famil, Search) == 0 || strcmp(stud[i].name, Search) == 0 || strcmp(stud[i].facult, Search) == 0 || stud[i].Nomzach == atoi(Search))
				printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);

		}
		
	}
	_getch();
    return 0;
}
