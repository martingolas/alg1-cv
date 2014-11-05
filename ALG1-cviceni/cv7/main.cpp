#include <iostream>
#include <iomanip>
#include <random>
#include <fstream>

#define ROWS 5
#define COLS 5

#define SIZE 100;

using namespace std;

// Pr. 1
void print_matrix(int (*matrix)[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

// Pr. 2
void swap_cols(int(*matrix)[ROWS], int col1, int col2)
{
	if (col1 >= COLS || col2 >= COLS) return; // Kontrola
	
	int buf = 0;
	for (int i = 0; i < ROWS; i++)
	{
		buf = matrix[i][col2]; // Odloz puvodni hodnotu
		matrix[i][col2] = matrix[i][col1]; // Prepis hodnotu druhym sloupcem
		matrix[i][col1] = buf; // Prepis hodnotu v druhem sloupci puvodni
	}
}


// Pr. 3
void vect_matrix_mult(int(*matrix)[ROWS], int *src_vect, int *dest_vect)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			dest_vect[i] += src_vect[i] * matrix[i][j];
		}
	}
}

void print_vect(int *vect, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << setw(4) << vect[i];
	}
	cout << endl;
}

bool sequential_search(int *array, int length, int item)
{
	for (int i = 0; i < length; i++)
	{
		if (array[i] == item) return true;
	}
	return false;
}

int main()
{
	int matrix[ROWS][COLS] = { 0 }; // Deklarace a incializace

	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			matrix[i][j] = (i * ROWS) + (j + 1); // Naplneni pole {1,2,3, ...}
		}
	}

	// Priklad 1
	print_matrix(matrix);
	cout << endl;

	// Priklad 2
	cout << "Vymena 3. a 4. sloupce " << endl;
	swap_cols(matrix, 2, 3);
	print_matrix(matrix);

	cout << endl;

	// Priklad 3
	int vect[COLS] = {2,2,2,2,2};
	int result[COLS] = {0,0,0,0,0};

	cout << "Soucin vektoru a matice " << endl;

	vect_matrix_mult(matrix, vect, result);

	print_vect(result, COLS);

	cout << endl;

	//// Priklad 4
	//int prvek = 0, pocet = 0;

	//cout << "Zadej pocet: " << flush;
	//cin >> pocet;
	//cin.ignore();

	//cout << "Generuji ";
	//int *pole = new int[pocet];
	//for (int i = 0; i < pocet; i++)
	//{
	//	pole[i] = rand() % 10;
	//	if (i % 10 == 0) cout << "." << flush;
	//}
	//cout << "OK" << endl;

	//cout << "Zadej prvek: " << flush;
	//cin >> prvek;
	//cin.ignore();

	//cout << "Prvek " << prvek;
	//if (sequential_search(pole, pocet, prvek)) cout << " se v poli nachazi." << endl;
	//else cout << " se v poli nenachazi." << endl;

	//if (pocet < 100)
	//{
	//	cout << "Obsah pole: ";
	//	print_vect(pole, pocet);
	//}
	//
	//delete[] pole; 


	// Priklad 5

	/*int buf = 0, lines = 0;
	const char fname[20] = "d:/large-data.txt";

	ifstream ifile(fname);

	while (!ifile.eof())
	{
		ifile >> buf;
		lines++;
		cout << lines << "\r" << flush;
	}

	ifile.close();
	
	int *contents = new int[lines];
	int pos = 0;
	ifile.open(fname);
	while (!ifile.eof())
	{
		ifile >> contents[pos++];
	}
	ifile.close();
	
	delete[] contents;*/

	cin.get();

	return 0;
}

