#include <iostream>
#include <stdlib.h>


using namespace std;


class cuenta{
	protected:
		string correo;
		string contra;
		string nombre;
			
	public:
		cuenta(string,string,string);
		cuenta(){};
		void registrarse();
		void setCorreo(string);
		void setContra(string);
		void setNombre(string);
		string getCorreo();
		string getContra();
		string getNombre();
		void Iniciar_Sesion();
		
				
};

cuenta::cuenta(string _correo,string _contra,string _nombre){
	correo=_correo;
	contra=_contra;
	nombre=_nombre;	
}

void cuenta::setCorreo(string _correo){
	correo=_correo;
}

void cuenta::setContra(string _contra){
	contra=_contra;
} 

void cuenta::setNombre(string _nombre){
	nombre=_nombre;
}  

string cuenta::getCorreo(){
	return correo;
}

string cuenta::getContra(){
	return contra;
}

string cuenta::getNombre(){
	return nombre;
}


void cuenta::registrarse(){
	cout<<endl;
	cout<<"USTED HA QUEDADO REGISTRADO"<<endl;
	cout<<"correo: "<<correo<<endl;
	cout<<"contraseña: "<<contra<<endl;
	cout<<"nombre: "<<nombre<<endl;
	
    
}


void cuenta::Iniciar_Sesion(){
	cout<<"Usted ha iniciado sesion con exito "<<nombre<<endl;
}



class Usuario: public cuenta{
	protected:
		float edad,peso,estatura;
		string sexo;
	public:
		Usuario(string,string,string,float,float,float,string);
		Usuario(float,float,float);
		void setPeso(float);
		void setEdad(float);
		void setEstatura(float);
		void setSexo(string);
		float getPeso();
		float getEdad();
		float getEstatura();	
		string getSexo();
		virtual void calculoMB()=0; //aclaracion de clase abstracta y tambien para aplicar polimorfismo
		
};


Usuario::Usuario(string _correo,string _contra,string _nombre,float _edad,float _peso,float _estatura,string _sexo):cuenta(_correo,_contra,_nombre){
	edad=_edad;
	peso=_peso;
	estatura=_estatura;
	sexo=_sexo;
	
}

Usuario::Usuario(float _edad,float _peso,float _estatura){
	edad=_edad;
	peso=_peso;
	estatura=_estatura;
	
}

void Usuario::setPeso(float _peso){
	peso=_peso;
}

void Usuario::setEdad(float _edad){
	edad=_edad;
}

void Usuario::setEstatura(float _estatura){
	estatura=_estatura;
}

void Usuario::setSexo(string _sexo){
	sexo=_sexo;
}

float Usuario::getPeso(){
	return peso;
}

float Usuario::getEdad(){
	return edad;
}

float Usuario::getEstatura(){
	return estatura;
}



string Usuario::getSexo(){
	return sexo;
}







	
class Mujer: public Usuario{
	public:
		Mujer(float _edad,float _peso,float _estatura):Usuario(_edad,_peso,_estatura){}
		Mujer(string _correo,string _contra,string _nombre,float _edad,float _peso,float _estatura,string _sexo):Usuario(_correo,_contra,_nombre,_edad,_peso,_estatura,_sexo){}
		void calculoMB(); //sobrecarga de metodos
};



void Mujer::calculoMB(){
	float MB;
	MB=(10*peso)+(6.25*estatura)-(5*edad)-161;
	cout<<"La calorias que neceista consumir al dia son: "<<MB<<endl;
};




class Hombre: public Usuario{

	public:
		Hombre(float _edad,float _peso,float _estatura):Usuario(_edad,_peso,_estatura){}
		Hombre(string _correo,string _contra,string _nombre,float _edad,float _peso,float _estatura,string _sexo):Usuario(_correo,_contra,_nombre,_edad,_peso,_estatura,_sexo){}
		void calculoMB(); //sobrecarga de metodos
			
};

void Hombre::calculoMB(){
	float MB;
	MB= (10*peso)+(6.25*estatura)-(5*edad)+5;
	cout<<"La calorias que neceista consumir al dia son: "<<MB<<endl;
	
};





