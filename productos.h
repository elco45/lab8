#ifndef PRODUCTOS_H
#define PRODUCTOS_H 

#include "cliente.h"
#include <string>
using std::string;

class Productos{
	double volumen, peso, precio;
	Cliente nombre;
public:
	Productos(double, double, Cliente, double);
	Productos(Productos&);
	~Productos();
	virtual void cobrar_Impuesto()=0;
	virtual string toString()const;
	double getVolumen()const;
	double getPeso()const;
	double getPrecio()const;
	void setPrecio(double);
};

#endif			