#include "educativo.h"
#include "productos.h"
#include "cliente.h"
#include <sstream>
using namespace std;


Educativo::Educativo(double volumen, double peso, Cliente* nombre, 
	double precio, double tasa): Productos(volumen, peso, nombre, precio),tasa(tasa){
}
Educativo::Educativo(Educativo& other): Productos(other),tasa(other.tasa){}


string Educativo::toString()const{
	stringstream ss;
	double impuesto=(getVolumen()*tasa);
	ss<<Productos::toString()<<"Tipo de impuesto: Educativo\n El impuesto es: "<<impuesto;
	ss<<"\nEl precio con impuesto es: "<<getPrecio()+impuesto;
	return ss.str();
}

void Educativo::cobrar_Impuesto(){
	double impuesto=(getVolumen()*tasa);
	setPrecio(impuesto);
	
}
