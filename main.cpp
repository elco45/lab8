#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "productos.h"
#include "alcoholico.h"
#include "educativo.h"
#include "lujo.h"
#include "cliente.h"
using namespace std;

int menu();
int tipoP();

int main(int argc, char const *argv[])
{
	srand(time(0));

	vector<Productos> lp;
	vector<Clientes> lc;

	int opcion = menu();

	do
	{

		if (opcion == 1){//Agregar Clientes
			
		}else if(opcion == 2){//Agregar Productos
			double volumen, precio, tasa, peso;
			Cliente persona;
			cout << "Volumen: ";
			cin >> volumen;
			cout << "Peso: ";
			cin >> peso;
			cout << "Precio: ";
			cin >> precio;		

			int type = tipo();
			if (type == 1){//Producto Educativo
				cout << "Tasa: ";
				cin >> tasa;

			}else if(type == 2){//Producto alcoholico
				

			}else if(type == 3){//Producto de lujo

			}
		}else if(opcion == 3){//Historial

		}
	} while (opcion <= 3);

	return 0;
}

int menu(){
	int opcion;
	cout << "****** Menu ******" << endl
		 << "1. Agregar Clientes" << endl
		 << "2. Agregar Productos" << endl
		 << "3. Historial" << endl
		 << "4. Salir"
		 << "Ingrese la opcion que desea realizar";
	cin >> opcion;
	return opcion;
}

int tipoP(){
	int tipo;
	cout << "*** Tipo de Producto ***" << endl
		 << "1. Producto educativo" << endl
		 << "2. Producto alcoholico" << endl
		 << "3. Producto de lujo" << endl
		 << "4. Salir"
		 << "Ingrese la opcion que desea realizar";
	cin >> opcion;
	return opcion;
}




