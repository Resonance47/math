#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>


////TODO: ������� ����� ����� + �������� ����������� ��������� ������ ������� //+
using namespace std;
int main()
{
	int rows;//������ ����� �������
	int cols;//������ �������
	int r;//����������� �������
	cin >> rows >> cols;
	r = rows;
	//��������� ������������ ������, ���� ����� ����� ������ - �������� �� p[n][m]
	double **matrix = new double*[rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new double[cols];
	}

	double *vect = new double[cols];//����������� ������� ��������� � ������ ��������

	////////////////////////////////////////////////////////////////////////////
	double *vectOUT = new double[rows];//���� ����� ������ ���-� ���������, �� ���� ��� � ���� �������������� ������, �����: ����������� ������� �� ������ ����� ����� ���-�� �������� � �� �����, ��� ������� �� ����� (������ ����������)




	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];
	}

	for (int i = 0; i < cols; i++)
		cin >> vect[i];



	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ��������
	for (int i = 0; i < rows; i++)//��������� ������ ������ ������
		vectOUT[i] = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			vectOUT[i] += matrix[i][j] * vect[j];
		}

	}
	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%	

	for (int i = 0; i < rows; i++)//����� ���-�� �������
		cout << vectOUT[i] << " ";




	/* //���� ���� � ������ ������
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
	//������� ��� ������
	delete vect;
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


	_getch();
	return 0;
}