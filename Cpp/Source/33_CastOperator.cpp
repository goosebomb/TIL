#include <stdio.h>

namespace Study33
{
	class Cast
	{
	private:
		int data;
	public:
		Cast(int _data) { data = _data; }

		/* ����ȯ �����ε� */
		operator double() const
		{
			return double(data);
		}
	};
}

using namespace Study33;

void main33()
{
	Cast castA(10);
	double db = castA; // ����ȯ �����ε��� ȣ��ȴ�.
	
	printf("db : %f\n", db);
}