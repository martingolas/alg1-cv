#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string binary(int num)
{
	stringstream output;
	for (int i = (sizeof(int)* 8) - 1; i >= 0; --i)
	{
		output << ((num >> i) & 1);

		if (i % 8 == 0) output << " ";
	}
	return output.str();
}




















int max_div(int a, int b)
{
	if (a < 1 || b < 1) return -1;
	int r = 0;
	do
	{
		r = a % b;
		a = b;
		b = r;
	} while (b != 0);

	return a;
}

int count_one(int num)
{
	int res = 0;
	while (num != 0)
	{
		if (num & 1) res++;
		num = num >> 1;
	}
	return res;
}
