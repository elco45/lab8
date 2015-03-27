#include "educativo.h"
#include "productos.h"
#include "cliente.h"

Educativo::Educativo(double volumen, double peso, Cliente cliente, 
	double precio, double tasa): Productos(volumen, peso, cliente, precio),tasa(tasa){
}
Educativo::Educativo(Educativo& other): Productos(other),tasa(tasa){}


string Educativo::toString()const{
	stringstream ss;
	double impuesto=(volumen*tasa);
	ss=Productos::toString()+"Tipo de impuesto: Educativo\n El impuesto es: "+impuesto;
}

void Educativo::cobrar_Impuesto()const{
	double impuesto;
	impuesto=(volumen*tasa);
	this->precio=precio+impuesto;
	
}
