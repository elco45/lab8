#include "lujo.h"
#include "productos.h"
#include "cliente.h"
#include <sstream>
#include <string>

using namespace std;
Lujo::Lujo(double volumen, double peso, Cliente* nombre, 
	double precio, double tasa): Productos(volumen, peso, nombre, precio),tasa(tasa){
}
Lujo::Lujo(Lujo& other): Productos(other),tasa(other.tasa){}


string Lujo::toString()const{
	stringstream ss;
	double impuesto=(getVolumen()*tasa)+(getPeso()*tasa);
	ss<<Productos::toString()<<"Tipo de impuesto: Lujo\n El impuesto es: "<<impuesto;
	return ss.str();
}

void Lujo::cobrar_Impuesto(){
	double impuesto;
	impuesto=(getVolumen()*tasa)+(getPeso()*tasa);
	setPrecio(impuesto);
	
}