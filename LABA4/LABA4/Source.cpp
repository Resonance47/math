#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a[9];//array
	int sum = 0;//+ sum
	int k = 0;//positive integers
	int zero = 0;
	int zerO_o = 0;
	int No = 4;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> a[i];
	}
	int max3 = a[8];
	for (int i = 8; i>=0 ; i--)
	{
		if (a[i]>0)
		{
			sum += a[i];
			k++;
		}
		else if(a[i]==0)
		{
			zero++;
		}
		if (max3 < a[i])//trouble
			max3 = a[i];


		if (i == 6 || i == 3)///or if(i%3==0 && i!=0); global if(i%n==0 && i!=0), n = 3, 4, 5... and array a[k*n], neN
		{
			std::cout << max3 << " ";
			max3 = a[i - 1];
			if (zero > zerO_o)
			{
				
				No = i/3 + 1;
				zerO_o = zero;
				zero = 0;
			}

		}
	}
	if (zero > zerO_o)
	{
		No = 1;
	}
	std::cout << max3;//вывд максимума последней тройки

	std::cout << std::endl << (double)sum/(double)k << std::endl;



	if (No == 4)
	{
		std::cout << "Нулей в массиве нет";
	}
	else
		std::cout << No;
	
	k = 0;
	for (int i = 0; i < 8; i++) 
	{
		for (int j = 0; j < 8 - i; j++) 
		{
			if (a[j] > a[j + 1]) 
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	std::cout << std::endl;
	for(int i = 0; i < 9; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 47;
}