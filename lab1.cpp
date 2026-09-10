#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <locale.h>


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
    return 0;
}
