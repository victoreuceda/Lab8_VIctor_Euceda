#include "obra.h"
#include "escultura.h"
#include <string>
#include <sstream>

Escultura::Escultura(string nombre,string autor,string ingreso,double peso,string material): Obra(nombre,autor,ingreso), peso(peso),material(material){
}

Escultura::~Escultura(){
}

string Escultura::toString() const{
	stringstream ss;
	ss << "Escultura\n" << Obra::toString() << "\nPeso: " << peso << "\nMaterial: " << material;
	return ss.str(); 
}
