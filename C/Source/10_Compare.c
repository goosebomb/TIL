#include <stdio.h>
#include <stdbool.h>

void main10() {

	// �� : ��ġ�� ����, �Ǵ�. 1�̶�� ������ ǥ����
	// ���� : ��ġ�� ���� ����, ����. 0�̶�� ������ ǥ����

	// �񱳿�����
	// �ǿ����� 2���� ���ϸ� �º��� �캯�� ���Ѵ�.
	// ���� ����� ������(true, false)�� ��ȯ�Ѵ�.

	// ������
	// '==' : �º��� �캯�� ���Ͽ� ���ٸ� true �ٸ��� false
	// '!=' : �º��� �캯�� ���Ͽ� �ٸ��� true ������ false

	printf("* ������\n");
	int num1 = 10;
	printf("num1 == 10 : %d\n", num1 == 10); // true
	printf("num1 == 5 : %d\n", num1 == 5); // false
	printf("num1 != 10 : %d\n", num1 != 10); // false
	printf("num1 != 5 : %d\n", num1 != 5); // true
	printf("\n");

	// ���迬����
	// '>' : �º��� �캯���� ũ�ٸ� true �۰ų� ���ٸ� false(�ʰ�)
	// '<' : �º��� �캯���� �۴ٸ� true ũ�ų� ���ٸ� false(�̸�)
	// '>= ' : �º��� �캯���� ũ�ų� ���ٸ� true �۴ٸ� false(�̻�)
	// '<=' : �º��� �캯���� �۰ų� ���ٸ� true ũ�ٸ� false(����)

	printf("* ���迬����\n");
	int num2 = 10;
	printf("num > 5 : %d\n", num2 > 5); // true
	printf("num < 5 : %d\n", num2 < 5); // false
	printf("num >= 10 : %d\n", num2 >= 10); // true
	printf("num <= 3 : %d\n", num2 <= 3); // false

}