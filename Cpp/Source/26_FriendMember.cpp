#include <stdio.h>

namespace Study26
{
	class Date
	{
	private:
		int year, month, day;
	public:
		Date(int y, int m, int d)
		{
			year = y; month = m; day = d;
		}
		void Today(class Time& time);
	};

	class Time
	{
		friend void Date::Today(Time&);
	private:
		int hour, min, sec;
	public:
		Time(int h, int m, int s)
		{
			hour = h; min = m; sec = s;
		}
	};

	void Date::Today(class Time& time)
	{
		printf(("%d�� %d�� %d��\n"), year, month, day);
		printf("%d�� %d�� %d��\n", time.hour, time.min, time.sec);
	}
}

using namespace Study26;

void main()
{
	Date* date = new Date(2023, 10, 19);
	Time time(9, 47, 10);
	date->Today(time);
}