#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ejercicio1(string);

void ejercicio2(int);

int encontrarPrimos(int);

void ejercicio3(string);

int main()
{
	int ejercicio;
	do
	{
		cout<<"Escoja un ejercicio: ";
		cin>>ejercicio;
		int num;
		string numero;
		switch(ejercicio)
		{
			case 1:
			{
				cout<<"Ingrese el número: ";
				cin>>numero;
				ejercicio1(numero);
				cout<<endl;
				break;
			}
			case 2:
			{
				cout<<"Ingrese el número: ";
				cin>>num;
				ejercicio2(num);
				cout<<endl;
				break;
			}
			case 3:
			{
				cout<<"Ingrese el número: ";
				cin>>num;
				ejercicio3(numero);
				break;
			}
		}
		cout<<"Salir? [0=No/1=Si] ";
		cin>> ejercicio;
	}while(ejercicio == 0);
	return 0;
}

void ejercicio1(string numero)
{
	int base;
	int base_decimal = 0;
	int numeros[numero.size()+1];
	for(int i = 0; i < numero.size(); i++)
	{
		numeros[i] = numero[i]-48;
	}
	int mayor = 0;
	for(int j = 0; j < numero.size(); j++)
	{
		if(mayor<numeros[j])
			mayor = numeros[j];
	}
	base = mayor+1;
	int posicion = 0;
	for(int k = base-1; k >= 0; k--)
	{
		base_decimal+=numeros[posicion]*pow(base,k);
		posicion++; 
	}
	cout<<numero<<" está en base "<<base<<" y equivale a "<<base_decimal<<" en base decimal";
	cout<<endl;
}

void ejercicio2(int num)
{
	int total = 0;
	int divisores[20];
	int posicion_1 = 0;
	for(int i = 1; i <= num; i+=1)
	{
		if(num%i==0){
			divisores[posicion_1]=i;
			posicion_1++;
		}
	}
	for(int g = 0; g < posicion_1; g++)
	{
		if(encontrarPrimos((divisores[g]+num)/divisores[g]))
		{
			total+=(divisores[g]+num)/divisores[g];
		}
	}
	cout<<"El total es: "<<total<<endl;

}

int encontrarPrimos(int numero)
{
	int divisores = 0;
	for(int i = 1; i <= numero; i+=1)
	{
		if(numero%i==0)
			divisores++;
	}
	if(divisores<=2)
		return 1;
	else
		return 0;
}

void ejercicio3(string numero_inicial)
{
	
}
