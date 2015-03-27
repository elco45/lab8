#ifndef ALCOHOLICO_H
#define ALCOHOLICO_H
#include <string>
#include "productos.h"
#include "cliente.h"
using namespace std;

class Alcoholico: public Productos{
	double tasa;
public:
	Alcoholico(double,double,Cliente,double,double);//volumen,peso,cliente,precio,tasa
	Alcoholico(Alcoholico&);
	~Alcoholico();
	virtual string toString()const;
	virtual void cobrar_Impuesto()const;
	
}