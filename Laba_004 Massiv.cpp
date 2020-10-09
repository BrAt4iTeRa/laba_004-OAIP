#include <stdio.h>
#include <locale.h>
#define N 10
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int i, ms1[N], ms2[N], name, l = 0, k = 0;
	printf_s("Вводите последовательно числа в массив:\n");
	for (i = 0; i < N; i++) {
		name = i + 1;
		printf_s("ms[%d] = ", name);
		scanf_s("%d", &ms1[i]);
		printf_s("\n");
		if (ms1[i] <= 0) k++;                                    //Считает отрицательные, в дальнейшем понадобится
	}
	for (i = 0; i < N; i++) {
		if (ms1[i] <= 0) {                    //Если меньше (или рявно) нуля(ю), то записывает вначало массива
			ms2[l] = ms1[i];
			l++;
		}
		else {                               // Если больше, то записывает в ячейку массива с номером, раынм кол-ву отриц
			ms2[k] = ms1[i];
			k++;
		}
	}
	puts("Ваш массив имеет вид:\n");            // Вывод массива
	for (i = 0; i < N; i++) {
		printf_s("%d ", ms2[i]);
	}
	return 0;
}