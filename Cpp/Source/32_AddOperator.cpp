#include <stdio.h>

namespace Study32
{
	class Vector
	{
	private:
		float x, y, z;
	public:
		Vector(float _x, float _y, float _z)
		{
			x = _x; y = _y; z = _z;
		}

		/* ���ϱ� ������ �����ε� */
		Vector operator +(Vector& other)
		{
			return Vector(x + other.x, y + other.y, z + other.z);
		}

		/* ���� ������ �����ε� */
		Vector operator -(Vector& other)
		{
			return Vector(x - other.x, y - other.y, z - other.z);
		}

		/* ���ϱ� ������ �����ε� */
		Vector operator *(Vector& other)
		{
			return Vector(x * other.x, y * other.y, z * other.z);
		}

		/* ������ ������ �����ε� */
		Vector operator /(Vector& other)
		{
			return Vector(x / other.x, y / other.y, z / other.z);
		}

		void Display()
		{
			printf("x : %f / y : %f / z : %f\n", x, y, z);
		}
	};
}

using namespace Study32;

void main32()
{
	/*
		* ������ �����ε�
		Ŭ�������� ������ ����� ����� �ִ� ��
		������ ���� ���ο� �����ڴ� ���� �� ����.(^, @, #, $)
	*/
	Vector v1(1, 2, 3);
	Vector v2(4, 5, 6);

	Vector result = v1 + v2;
	result.Display(); // 5, 7, 9

	result = v1 - v2;
	result.Display(); // -3, -3, -3

	/*
		* �ǽ�
		���ϱ�, ������ �����ڿ����ε� �����
	*/

	result = v1 * v2;
	result.Display(); // 4, 10, 18

	result = v1 / v2;
	result.Display(); // 0.25, 0.4, 0.5
}