#ifndef EDUCATIVO_H
#define EDUCATIVO_H
#include "cliente.h"
#include "productos.h"
 using namespace std;
 class Educativo: public Productos{
 	double tasa;
 public:
 	Educativo(double,double,cliente,double,double);
 	Educativo(Educativo&);
 	~Educativo();
 	virtual string toString()const;
 	virtual void cobrar_Impuesto()const;

 }