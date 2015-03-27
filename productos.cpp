#include "productos.h"
#include "cliente.h"
#include <string>
#include <sstream>
using namespace std;

Productos::Productos(double volumen, double peso, Cliente nombre, double precio)
		:volumen(volumen), peso(peso), nombre(nombre), precio(precio) {

}
Productos::Productos(Productos& prod):volumen(prod.volumen), peso(prod.peso), nombre(prod.nombre), precio(prod.precio) {

}
Productos::~Productos(){

}
string Productos::toString()const{
	stringstream ss;
	ss << "Producto \nVolumen: " << volumen << "\nPeso: " << peso << "\nNombre del Cliente: " << nombre.getNombre() << "\nPrecio: " << precio << "\n";
	return ss.str();
}
double Productos::getVolumen()const{
	return volumen;
}
double Productos::getPeso()const{
	return peso;
}
double Productos::getPrecio()const{
	return precio;
}