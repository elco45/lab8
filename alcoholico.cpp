#include "alcoholico.h"
#include "productos.h"
#include "cliente.h"
#include <string>
#include <sstream>

Alcoholico::Alcoholico(double volumen,double peso,Cliente c,double precio,double tasa)
	:Productos(volumen,peso,c,precio),tasa(tasa){
	
}

Alcoholico::Alcoholico(Alcoholico& other)
	:Productos(other),tasa(other.tasa){

}

Alcoholico::~Alcoholico(){

}

string Alcoholico::toString()const{
	stringstream ss;
	double impuesto=(getPeso()+getVolumen())*tasa;
	ss<<Productos::toString()<<"Tipo de impuesto: Alcoholico\n"<<"El impuesto es de: "<<impuesto;
	return ss.str();
}

void Alcoholico::cobrar_Impuesto(){
	double impuesto=(getPeso()+getVolumen())*tasa;
	setPrecio(impuesto);
}

