#include <stdio.h>

void main2() {

	/*
		* 자료형(DataType)
		   데이터를 표현하는 형태
		   정수형, 실수형, 문자형, 논리형
		   정수형: 소수점이 없는 숫자

		* 변수
		   데이터가 저장된 주소에 이름을 붙인 것
		   데이터를 전달하고 저장하는 역할을 하게 한다.
	*/

	char ch = 1;   // 1byte
	short sh = 2;  // 2byte
	int num = 3;  // 4byte
	long lo = 4;   // 4byte

	//unsigned: 양수만 표현 가능하게 해주는 명령어
	unsigned int uint = 5;

	//%d: 출력 타입의 종류(정수형 데이터 표기)
	ch = -129;
	// 언더플로우 : 저장할 수 있는 최소값을 벗어나 최대값이 되는 현상
	printf("ch: %d\n", ch);
	ch = 128;
	// 오버플로우 : 저장할 수 있는 최대값을 벗어나 최소값이 되는 현상
	printf("ch: %d\n", ch);

	// 변수 선언 방법
	// 변수 선언: 변수를 만든 것
	int a;
	a = 50;
	int b = 10, c = 20, d = 30; // 여러 개를  동시에 선언할 수 있다.
	 /*
		 같은 이름의 변수명 사용 못함
		 int a;
		 변수명은 알파벳, 숫자, 언더바만 사용할 수 있다.
		 첫 문자를 숫자로 사용할 수 없다.
		 대소문자를 구분한다.
		 변수에 값을 넣어주고 사용해야 한다.(안 넣어주면 쓰레기값이 들어간다)
	 */

	int count = 10;
	printf("count: %d\n", count);

}