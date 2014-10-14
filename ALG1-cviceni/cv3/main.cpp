#include <iostream>
#include "funkce.h"

int main()
{
	// Priklad 1
	//print_log();

	// Priklad 2
	bool vysledek = is_even(25);

	if (vysledek)
	{
		std::cout << "Cislo je sude." << std::endl;
	}
	else
	{
		std::cout << "Cislo neni sude." << std::endl;
	}

	// Priklad 3
	//den(5);

	// Priklad 4
	std::cout << "Suma 5:" << sum(5) << std::endl;


	std::cin.get();
	return 0;
}
