#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <time.h>
#include <math.h>

#define VELIKOST 5

using namespace std;

void p1()
{
	int pole[5] = { 10, 20, 30, 40, 50 };
	
	int *b = (pole + 4);

	for (int i = 0; i < 5; i++) cout << setw(4) << pole[i] << flush;
	cout << endl;
	//for (size_t i = 0; i < 5; i++) cout << setw(4) << *(b - i) << flush;
	//for (int i = 4; i >= 0; i--) cout << setw(4) << pole[i] << flush;
	for (int i = 0; i < 5; i++) cout << setw(4) << pole[4 - i] << flush;
}

int suma(int *pole, int velikost)
{
	int res = 0;
	for (int i = 0; i < velikost; i++) 	res += pole[i];
	return res;
}

double norma(int *v1, int velikost)
{
	double res = 0;
	for (int i = 0; i < velikost; i++) res += (v1[i] * v1[i]);
	return sqrt(res);
}

void vect_sum(int *v1, int *v2, int *v, int velikost)
{
	for (int i = 0; i < velikost; i++) v[i] = v1[i] + v2[i];
}

void print_arr(int pole[], int velikost)
{
	for (int i = 0; i < velikost; i++)
	{
		cout << pole[i] << endl;
	}
}


int main()
{
	int buf1[5000];
	int buf2[5000];
	int idx = 0;
	
	ifstream f1("data1.txt");
	ifstream f2("data2.txt");
	
	while (!(f1.eof() || f2.eof()) && idx < 5000)
	{
		f1 >> buf1[idx];
		f2 >> buf2[idx++];
	}

	cout << "Suma" << endl;
	cout << "Data 1: " << suma(buf1, 5000) << endl;
	cout << "Data 2: " << suma(buf2, 5000) << endl;
	
	cout << "Norma" << endl;
	cout << "Data 1: " << fixed << setprecision(5) << norma(buf1, 5000) << endl;
	cout << "Data 2: " << fixed << setprecision(5) << norma(buf2, 5000) << endl;

	cin.get();

	return 0;
}
