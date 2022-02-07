#include<iostream>

int main()
{
	system("chcp 1251");
	
	int x; float F;

	printf("¬ведите x = ");
	scanf_s("%d", &x);

	if (x < -1) { F = 4; }
	if (x >= -1 && x <= 10) { F = 6 * tan(float(x)); }
	if (x > 10) { F = 3 / (2 * float(x)); }

	printf("%.3f", F);

	return 0;
}