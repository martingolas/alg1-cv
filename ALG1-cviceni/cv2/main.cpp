#include <iostream>
#include <string>
#include <sstream>

void p1()
{
	int x = 0, y = 0;

	std::cout << "Prvni cislo: " << std::endl;
	std::cin >> x;
	std::cin.ignore();

	std::cout << "Druhe cislo: " << std::endl;
	std::cin >> y;
	std::cin.ignore();

	std::cout << "Soucet: " << x + y << " Soucin: " << x*y << " Rozdil: " << x - y << " Podil: " << x / y << " Zbytek po deleni: " << x % y << std::flush;

	std::cin.get();
}


void p2()
{
	int x = 0;
	
	for (size_t i = 0; i < 6; i++)
	{
		int tmp = 0;
		std::cout << i+1 << ". cislo: " << std::flush;
		std::cin >> x;
		std::cin.ignore();

		if (x < tmp) x = tmp;
	}

	std::cout << "Maximum: " << x << std::flush;
	std::cin.get();
}

void p3()
{
	int x = 1;

	for (size_t i = 1; i < 10; i++)
	{
		//x = x * 2;
		x = x << 1;
		std::cout << x << std::endl;
	}
	std::cin.get();
}


void p4()
{
	int sum = 0, input = 0;

	//do
	//{
	//	

	//} while (input != 0);

	//std::cout << "Suma: " << sum << std::endl;
	//std::cin.get();


	while (true)
	{
		std::cout << "Cislo: " << std::flush;
		std::cin >> input;
		std::cin.ignore();
		
		if (input == 0) break;

		sum += input;

	}

	std::cout << "Suma: " << sum << std::endl;
	std::cin.get();


}


void p5()
{
	for (size_t i = 0; i <= 100; i++)
	{
		if (i % 5 == 0 && i != 0) std::cout << i + 1000 << std::endl;
		else std::cout << i << std::endl;
	}

	std::cin.get();
}


int main()
{
	
	//p1();
	//p2();
	//p3();
	//p4();
	p5();

	std::cin.get();
	return 0;
}


