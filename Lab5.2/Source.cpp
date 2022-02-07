#include<iostream>

int main()
{
	system("chcp 1251");

	int x; float f;

	printf("¬ведите x = ");
	scanf_s("%d", &x);

	if (x < -1)
		f = 4;
	else if (x <= 10)
		f = 6 * tan(float(x));
	else
		f = 3 / (2 * float(x));

	printf("%.3f", f);

	return 0;
}