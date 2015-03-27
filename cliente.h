#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using std::string;

class Cliente{
	string nombre;
public:
	Cliente(string);
	string toString()const;
	string getNombre()const;
};
#endif