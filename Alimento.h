#include <iostream>
#include <stdlib.h>
#include "cuentas.h"


using namespace std;



class Alimento{
	
	protected:
		float lipidos,proteinas,carbohidratos;
		string nombre;
		
	public:
		Alimento(float,float,float,string);
		Alimento(){};
		float calculo_calorias();
		void Mostrar_info();
		void setLipidos(float);
		void setProteinas(float);
		void setCarbohidratos(float);
		float getLipidos();
		float getProteinas();
		float getCarbohidratos();
			
		
};


Alimento::Alimento(float _lipidos,float _proteinas,float _carbohidratos,string _nombre){
	lipidos=_lipidos;
	proteinas=_proteinas;
	carbohidratos=_carbohidratos;
	nombre=_nombre;
	
}




void Alimento::setLipidos(float _lipidos){
	lipidos=_lipidos;
	
}

void Alimento::setProteinas(float _proteinas){
	proteinas=_proteinas;
	
}

void Alimento::setCarbohidratos(float _carbohidratos){
	carbohidratos=_carbohidratos;	
}

float Alimento::getLipidos(){
	return lipidos;
}

float Alimento::getProteinas(){
	return proteinas;
}

float Alimento::getCarbohidratos(){
	return carbohidratos;
}

float Alimento::calculo_calorias(){


return ((lipidos*9)+(proteinas*4)+(carbohidratos*4));
}


void Alimento::Mostrar_info(){
	float calorias;
	calorias=calculo_calorias();
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Calorias: "<<calorias<<endl;
	cout<<"Lipidos: "<<lipidos<<endl;
	cout<<"Proteinas:"<<proteinas<<endl;
	cout<<"carbohidratos:"<<carbohidratos<<endl;
}






