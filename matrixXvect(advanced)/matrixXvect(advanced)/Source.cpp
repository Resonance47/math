#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>


////TODO: Сделать через класс + дописать возможность умонжения любого вектора //+
using namespace std;
int main()
{
	int rows;//строки нашей матрицы
	int cols;//строки матрицы
	int r;//размерность вектора
	cin >> rows >> cols;
	r = rows;
	//Выделение динамической памяти, если сразу знаем размер - заменяем на p[n][m]
	double **matrix = new double*[rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new double[cols];
	}

	double *vect = new double[cols];//размерность вектора совпадает с числом столбцев

	////////////////////////////////////////////////////////////////////////////
	double *vectOUT = new double[rows];//сюда будем писать рез-т умножения, по сути это и есть результирующий вектор, ВАЖНО: размерность вектора на выходе будет равна кол-ву столбцев а не строк, как вектора на входе (просто математика)




	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];
	}

	for (int i = 0; i < cols; i++)
		cin >> vect[i];



	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Алгоритм
	for (int i = 0; i < rows; i++)//заполняем вектор нулями нулями
		vectOUT[i] = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			vectOUT[i] += matrix[i][j] * vect[j];
		}

	}
	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%	

	for (int i = 0; i < rows; i++)//вывод рез-го вектора
		cout << vectOUT[i] << " ";




	/* //тест кода в случае ошибок
	for (int i = 0; i < rows; i++)
	{
	for (int j = 0; j < cols; j++)
	cout << matrix[i][j] << " ";
	cout << endl;
	}
	cout << endl;
	for (int i = 0; i < cols; i++)
	cout << vect[i] << " ";
	*/





	///////////////////////////////////////////////////////////////////////////
	//Очистка дин памяти
	delete vect;
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


	_getch();
	return 0;
}