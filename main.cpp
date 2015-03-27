#include <iostream>
#include "productos.h"
#include "alcoholico.h"
#include "educativo.h"
#include "lujo.h"
#include "cliente.h"
using namespace std;

int menu();

int main(int argc, char const *argv[])
{
	
	return 0;
}

int menu(){
	int opcion;
	cout << "****** Menu *******" << endl
		 << "1. Agregar Clientes" << endl
		 << "2. Agregar Productos" << endl
		 << "3. Historial" << endl
		 << "Ingrese la opcion que desea realizar";
	cin >> opcion;
}