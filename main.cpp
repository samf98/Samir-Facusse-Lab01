#include <iostream>

using namespace std;

void ejercicio1();

void ejercicio2(int);

void ejercicio3();

int main()
{
	int ejercicio;
	do
	{
		cout<<"Escoja un ejercicio: ";
		cin>>ejercicio;
		switch(ejercicio)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				int num;
				cout<<"Ingrese el número: ";
				cin>>num;
				ejercicio2(num);
				break;
			}
			case 3:
			{
				break;
			}
		}
	}while(op == 0);
	return 0;
}

void ejercicio2(int num)
{
	int divisores[20];
	int posicion = 0;
	for(int i = 1; i <= num; i++)
	{
		if(num%i==0)
		{
			divisores[posicion] = i;
			posicion++;
		}
	}
}
