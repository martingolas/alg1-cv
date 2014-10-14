#include <fstream>
#include <iostream>
#include <cstdlib>

int add_ten(int a)
{
	return (a > 0) ? ( (a%2==0) ? a+10 : a+100 ) : 0;
}

void add_ten_ref(int &a)
{
	a = add_ten(a);
}


















int fact(int a)
{
	int result = 1;
	if (a == 1) result = a;
	else
	{
		for (size_t i = a; i > 0; --i) result = result * i;
	}
	return result;
}


int gen_random(const char* filename, int n)
{
	std::ofstream soubor(filename);
	int written = 0;
	for (int i = 0; i < n; i++)
	{
		if (!soubor.good()) return 0;
		else
		{
			soubor << rand() << std::endl;
			written++;
		}
	}
	soubor.close();
	return written;
}

#define BUFFER_SIZE 512
int read_file(const char* filename)
{
	std::ifstream vstup(filename);

	if (!vstup.good()) return 0;
	else
	{
		int pocet_radku = 0;
		char buffer[BUFFER_SIZE];
		while (!vstup.eof())
		{
			vstup.getline(buffer, BUFFER_SIZE);
			std::cout << "Radek " << pocet_radku++ << ": " << buffer << std::endl;
		}
		vstup.close();
		return pocet_radku;
	}
}
