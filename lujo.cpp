#include "lujo.h"
#include "productos.h"
#include "cliente.h"
#include <sstream>
#include <string>

using namespace std;
Lujo::Lujo(double volumen, double peso, Cliente cliente, 
	double precio, double tasa): Productos(volumen, peso, cliente, precio),tasa(tasa){
}
Lujo::Lujo(Lujo& other): Productos(other),tasa(tasa){}


string Lujo::toString()const{
	stringstream ss;
	double impuesto=(volumen*tasa)+(peso*tasa);
	ss=Productos::toString()+"Tipo de impuesto: Lujo\n El impuesto es: "+impuesto;
}

void Lujo::cobrar_Impuesto()const{
	double impuesto;
	impuesto=(volumen*tasa)+(peso*tasa);
	this->precio=precio+impuesto;
	
}