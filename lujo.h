#ifndef LUJO_H
#define LUJO_H
#include "cliente.h"
#include "productos.h"
 using namespace std;
class Lujo: public Productos{
 	double tasa;
 public:
 	Lujo(double,double,Cliente,double,double);
 	Lujo(Lujo&);
 	~Lujo();
 	virtual string toString()const;
 	virtual void cobrar_Impuesto();

 };
 #endif
