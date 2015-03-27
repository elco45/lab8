#include "cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
Cliente::Cliente(string nombre){
	this->nombre=nombre;
}
string Cliente::toString()const{
	stringstream ss;
	ss<<"Nombre: "<<nombre;
	return ss.str();
}
string Cliente::getNombre()const{
	return nombre;
}

