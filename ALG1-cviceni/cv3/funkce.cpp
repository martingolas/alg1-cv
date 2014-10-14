// Funkce.cpp
#include <iostream>
#include "funkce.h"

void print_log()
{
	std::cout << "gol0011" << std::endl;
}


bool is_even(int x)
{
	/*if(x >= 0 && (x % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}*/

	return (x >= 0 && (x % 2) == 0);
}





void den(int x)
{
	switch (x)
	{
		case 1:
			std::cout << "Pondeli" << std::endl;
			break;
		case 2:
			std::cout << "Utery" << std::endl;
			break;
		case 3:
			std::cout << "Streda" << std::endl;
			break;
		case 4:
			std::cout << "Ctvrtek" << std::endl;
			break;
		case 5:
			std::cout << "Patek" << std::endl;
			break;
		case 6:
			std::cout << "Sobota" << std::endl;
			break;
		case 7:
			std::cout << "Nedele" << std::endl;
			break;
		default:
			std::cout << "Pouze sedm dni v tydnu mame..." << std::endl;
			break;
	}
}





int sum(int x)
{
	int result = 0;
	for (int i = x; i >= 1; --i) result += i;
	return result;
}





















void fib(int x)
{
	int first = 0, second = 1, next = 0;
	std::cout << x << " prvku Fibonacciho posloupnosti: " << std::endl;

	for (int i = 0; i < x; ++i)
	{
		if (i <= 1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}

		std::cout << i+1 << ": " << next;

		if(is_even(next))
		{
			std::cout << " [sude]" << std::endl;
		} 
		else
		{
			std::cout << " [liche]" << std::endl;
		}

	}




}