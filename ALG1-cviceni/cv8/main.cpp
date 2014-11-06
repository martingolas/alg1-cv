#include <iostream>
#include <climits>
#include <cstdint>
#include <iomanip>

using namespace std;

// Priklad 1 - Faktorial
int fact_r(int n)
{
	if (n <= 1) return 1;
	else return n * fact_r(n - 1);
}

uint64_t fact_long(uint64_t n)
{
	if (n <= 1) return 1;
	else return n * fact_r(n - 1);
}
























// Priklad 2 - Fibonnacciho posloupnost
int fib_seq(int last)
{
	int first = 0, second = 1, tmp = 0;

	for (size_t i = 1; i <= last; i++)
	{
		if (i <= 1)
		{
			tmp = i;
		}
		else
		{
			tmp = first + second;
			first = second;
			second = tmp;
		}
	}

	return tmp;
}

int fib_r(int last)
{
	if (last == 0 || last == 1) return last;
	else return fib_r(last - 1) + fib_r(last - 2);
}


// Priklad 3 - Nejvetsi prvek v poli
int max_r(int array[], int size)
{
	int max = INT_MIN, idx = size - 1;
	
	if (size == 1)
	{
		return array[0];
	}
	else
	{
		max = max_r(array, idx - 1);
		if (max < array[idx]) return array[idx];
		else return max;
	}
}

// Priklad 4 - Obratit retezec
void reverse(char *input, int first, int last)
{
	if (first <= last)
	{

	char temp = input[first];
	input[first] = input[last];
	input[last] = temp;
	
		reverse(input, ++first, --last);
	}
}

// Priklad 5 - Ciferny soucet
int num_sum(int num)
{
	int n = num / 10, sum = 0;
	sum += num % 10;
	if (n > 0)
	{
		return sum + num_sum(n);
	}
	else
	{
		return sum;
	}
}

int main()
{
	// Priklad 1
	cout << "MAX INT: " << INT_MAX << "MAX UINT64: " << UINT64_MAX << endl;
	for (size_t i = 1; i < 20; i++)
	{
		cout << i << "!= " << fact_long(i) << "  " << fact_r(i) << endl;
	}
	
	// Priklad 2
	for (size_t i = 1; i <= 10000; i++) cout << fib_r(i) << endl;

	// Priklad 3
	int arr[5] = { 10, 20, 350, 40, 50 };
	cout << "Max: " << max_r(arr, 5) << endl;

	// Priklad 4
	char text[] = { "ab" };
	cout << text << ": ";
	reverse(text, 0, 1);
	cout << text << endl;
	
	// Priklad 5
	cout << "128: " << num_sum(128) << endl;

	cin.get();

	return 0;
}