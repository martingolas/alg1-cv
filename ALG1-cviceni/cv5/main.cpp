#include <iostream>
#include <iomanip>
#include "funkce.h"

using namespace std;

int main()
{

	int x = 0,y = 0;

	/*cout << "Velikost INT: " << sizeof(int) << " B" << endl;
	cout << "Velikost CHAR: " << sizeof(char) << " B"  << endl;
	cout << "Velikost FLOAT: " << sizeof(float) << " B"  << endl;
	cout << "Velikost SHORT: " << sizeof(short) << " B" << endl;

*/
	cout << "Zadej dve cisla: " << flush;
	cin >> x >> y;
	cin.ignore();

	cout << setw(8) << "X: " << binary(x) << "(" << count_one(x) << ")" <<  endl;
	cout << setw(8) << "Y: " << binary(y) << "(" << count_one(y) << ")" <<  endl;

	cout << endl;

		
	cout << setw(8) << "AND: " << binary(x & y) << endl;
	cout << setw(8) << "OR:  " << binary(x | y) << endl;
	cout << setw(8) << "XOR: " << binary(x ^ y) << endl;
	
	cout << setw(8) << "NOT(X): " << binary(~x) << endl;
	cout << setw(8) << "NOT(Y): " << binary(~y) << endl;


	cout << "Nejvetsi spol. delitel: " << max_div(x, y) << endl;
	
	cin.get();

	return 0;
}