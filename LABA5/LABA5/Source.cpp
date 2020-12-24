#include <iostream>
#include <conio.h>

int main()
{
	int R;
	std::cin >> R;

	double** a = new double* [R];
	double** b = new double* [R];
	double** c = new double* [R];

	for (int i = 0; i < R; i++)
	{
		a[i] = new double[R];
	}
	for (int i = 0; i < R; i++)
	{
		b[i] = new double[R];
	}
	for (int i = 0; i < R; i++)
	{
		c[i] = new double[R];
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
			std::cin >> a[i][j];
	}

	int N;
	std::cin >> N;

	for (int i = 0; i < R; i++)
		for (int j = 0; j < R; j++)
			b[i][j] = a[i][j];

	for (int i = 0; i < R; i++)
		for (int j = 0; j < R; j++)
			c[i][j] = 0;
	/// a -> b c




	for (int h = 1; h < N; h++)
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < R; j++)
				for (int k = 0; k < R; k++)
					c[i][j] += b[i][k] * a[k][j];
		}
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < R; j++) 
			{
				b[i][j] = c[i][j];
				c[i][j] = 0;
			}
		}

	}

 //ij 00*00 + 01*10 + 02*20 + ... +0R*R0
//    i0*0i


	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
			std::cout << b[i][j] <<" ";
		std::cout << std::endl;
	}






	for (int i = 0; i < R; i++)
	{
		delete a[i];
	}
	delete[] a;
	for (int i = 0; i < R; i++)
	{
		delete b[i];
	}
	delete[] b;

	for (int i = 0; i < R; i++)
	{
		delete c[i];
	}
	delete[] c;
	system("pause");
	return 47;
}