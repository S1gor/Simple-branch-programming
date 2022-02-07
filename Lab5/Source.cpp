#include<iostream>

int main()
{
	system("chcp 1251");

	//18. Даны два целых числа. Если первое число не больше второго, вычислить их сумму, в противном случае вычислить отношение первого ко второму.

	//объявление переменных
	float s;
	int a, b;

	//ввод данных
	printf("Введите a = "), scanf_s("%d", &a);
	printf("Введите b = "), scanf_s("%d", &b);

	if (a <= b)
		s = a + b;
	else
		s = float(a) / float(b);
	printf("s = %.1f\n\n\n", s);
	return 0;
}