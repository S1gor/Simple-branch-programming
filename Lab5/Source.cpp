#include<iostream>

int main()
{
	system("chcp 1251");

	//18. ���� ��� ����� �����. ���� ������ ����� �� ������ �������, ��������� �� �����, � ��������� ������ ��������� ��������� ������� �� �������.

	//���������� ����������
	float s;
	int a, b;

	//���� ������
	printf("������� a = "), scanf_s("%d", &a);
	printf("������� b = "), scanf_s("%d", &b);

	if (a <= b)
		s = a + b;
	else
		s = float(a) / float(b);
	printf("s = %.1f\n\n\n", s);
	return 0;
}