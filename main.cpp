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

	vector<Productos*> lp;
	vector<Cliente*> lc;

	int opcion = menu();

	do
	{

		if (opcion == 1){//Agregar Clientes
			string num;
			for (int i = 0; i < 100; i++){
				num=i+"";
				lc.push_back(new Cliente(num));
			}
		}else if(opcion == 2){//Agregar Productos
			int random = rand() % lc.size();
			double volumen, precio, tasa, peso;
			Cliente* persona = lc.at(random);
			cout << "Volumen: ";
			cin >> volumen;
			cout << "Peso: ";
			cin >> peso;
			cout << "Precio: ";
			cin >> precio;
			int type = tipoP();
			if (type == 1){//Producto Educativo
				cout << "Tasa: ";
				cin >> tasa;
				lp.push_back(new Educativo(volumen, peso, persona, precio, tasa));
			}else if(type == 2){//Producto alcoholico
				cout << "Tasa: ";
				cin >> tasa;
				lp.push_back(new Alcoholico(volumen, peso, persona, precio, tasa));
			}else if(type == 3){//Producto de lujo
				cout << "Tasa: ";
				cin >> tasa;
				lp.push_back(new Lujo(volumen, peso, persona, precio, tasa));
			}
		}else if(opcion == 3){//Historial


		}
	} while (opcion <= 3);

	return 0;
}

int menu(){
	int opcion;
	do{
		cout << "****** Menu ******" << endl
			 << "1. Agregar Clientes" << endl
			 << "2. Agregar Productos" << endl
			 << "3. Historial" << endl
			 << "4. Salir"
			 << "Ingrese la opcion que desea realizar";
		cin >> opcion;
		if(opcion>=1&&opcion<=4){
			return opcion;
		}else{
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}

int tipoP(){
	int tipo;
	do{
		cout << "*** Tipo de Producto ***" << endl
			 << "1. Producto educativo" << endl
			 << "2. Producto alcoholico" << endl
			 << "3. Producto de lujo" << endl
			 << "4. Salir"
			 << "Ingrese la opcion que desea realizar";
		cin >> tipo;
		if(tipo>=1&&tipo<=4){
			return tipo;
		}else{
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}




