#include <iostream> 
using namespace std;

int main()
{
	bool bbb = true;

	bbb |= false;
	bbb |= true;


	long l = 0;
	long l1 = 1;
	long l2 = 2;
	long l3 = 3;

	if (false && false)
	{
		int aaa = 1;
	}

	printf_s("%d\n", l | l1);
	printf_s("%d\n", l | l2);
	printf_s("%d\n", l | l3);

	l |= l2;
	l |= l2;
	l |= l2;
	l |= l2;
	l |= l2;
	l |= l2;
	printf_s("%d\n", l);

	l |= l1;
	l |= l1;
	l |= l2;
	l |= l2;
	l |= l2;
	l |= l2;
	printf_s("%d\n", l);
}