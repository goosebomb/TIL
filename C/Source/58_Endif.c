#include <stdio.h>
#define TEST 20



void main58() {
	/*
		* #if, #elif, #endif
		��ó�� �ܰ迡�� ������ ���ؼ� �ڵ带 ������ ��󿡼� ���Խ�Ű�ų� ����

	*/
#if TEST == 10 // ������ true��� �ڵ带 ����, false��� �ڵ� ����
	printf("1. TEST : %d\n", TEST)
#elif TEST == 20 // #if���� �����̰� true��� �ڵ带 ����
	printf("2. TEST : 20\n");
#else // #if Ȥ�� #elif�� ��� �����̶�� �ڵ带 ����
	printf("3. Other\n");
#endif // #if���� �������� #endif�� �ٿ��־�� ��

}