#include "cv4.h"
#include <iostream>

int main()
{
	// Pr 1 & 2

	int h = 0, i = 0;
	//do
	//{
	//	std::cin >> h;
	//	//add_ten_ref(h);
	//	//std::cout << h << std::endl;

	//	std::cout << add_ten(h) << std::endl;

	//} while ((i++) < 5);
	
	//Pr 3
	std::cout << "Pocet cisel: " << std::flush;
	std::cin >> h;
	const char nazev_souboru[10] = "cisla.txt";
	int radku = gen_random(nazev_souboru, h);
	std::cout << "Zapsano " << radku << " radku." << std::endl;
	

	//Pr 4
	radku = read_file(nazev_souboru);
	std::cout << "Precteno " << radku << " radku." << std::endl;

	// Pr 5
	/*std::cin >> h;
	
	std::cout << "Fact: " << fact(h) << std::endl;
	*/
	std::cin.ignore();
	std::cin.get();


	return 0;
}