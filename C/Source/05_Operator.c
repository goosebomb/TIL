#include <stdio.h>

void main5() {

	// ��Ģ����
	// ���ϱ�(+), ����(-), ���ϱ� (*), ������ (/), ������ (%)

	printf("3 + 2 = %d\n", 3 + 2);
	printf("10 - 5 = %d\n", 10 - 5);

	int a = 10, b = 5, result;

	result = a + b;
	printf("a + b = %d\n", result);

	result = a - b;
	printf("a - b = %d\n", result);

	result = a * b;
	printf("a * b = %d\n", result);

	result = a / b;
	printf("a / b = %d\n", result);

	result = a % b;
	printf("a %% b = %d\n", result);

	result = 10 % 3;
	printf("10 %% 3 = %d\n", result);

	float value, q = 10.0f, w = 3.0f;
	// value = q % w;
	// ������ ������ �Ǽ����� ������ �������� 0�� ���´�.
	// �Ǽ������� c���� ���Ƴ���
	value = q / w;
	printf("q / w = %f\n", value);

	// ���ǻ���
	// ���ϱ�� ���ϱⰡ ���������� �������� ���� ��ȣ�� �־��ش�.
	result = 2 + (3 * 4);
	printf("2 + 3 * 4 = %d\n", result);


	// �ǽ�
	// float������ ������ ����� ��Ģ���� �� ���

	float fValue1 = 33.0f, fValue2 = 12.0f, result2;

	result2 = fValue1 + fValue2;
	printf("%.2f + %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 - fValue2;
	printf("%.2f - %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 / fValue2;
	printf("%.2f / %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 * fValue2;
	printf("%.2f * %.2f = %.2f\n", fValue1, fValue2, result2);




}