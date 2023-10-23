#include <stdio.h>

enum DiseaseState {
	Normal = 0,          // 0000
	Stun = 1 << 0,     // 0001
	Burn = 1 << 1,     // 0010
	Poison = 1 << 2  // 0100
};

enum Color {
	Standard,
	White = 0,
	Red = 1 << 0,
	Blue = 1 << 1,
	Green = 1 << 2,
	Yellow = 1 << 3
};

void main26() {

	enum DiseaseState diseaseState = Normal;

	diseaseState |= Burn; // ȭ�� �߰� 0010
	diseaseState |= Poison; // �ߵ� �߰� 0110
	diseaseState |= Stun; // ���� �߰� 0111

	diseaseState &= ~Burn; // ȭ�� ���� 0101

	if ((diseaseState & Stun) == Stun) {
		printf("���� ����\n");
	}

	else if ((diseaseState & Poison) == Poison) {
		printf("�ߵ� ����\n");
	}

	/*�ǽ�
	������ Color�� �����
	White, Red, Blue, Green, Yellow�� ������
	Color������ ���� Red, Blue, Yellow�� �߰�
	Blue����
	Red, Yellow�� ��� ������ �ִٸ� "Orange"�� ���*/

	enum Color color = Standard;

	color |= Red; // 0001
	color |= Blue; // 0011
	color |= Yellow; // 1011

	color &= ~Blue; // 1001

	if ((color & Red) == Red && (color & Yellow) == Yellow) {
		printf("%d, Orange\n", color);
	}
}