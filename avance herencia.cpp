
#include <iostream>
#include <stdlib.h>
using namespace std;


 class Usuario{
 	protected:
 		int edad,peso;
 		float estatura;
 		string nombre;
 	public:
 		Usuario(string,int,int,float);
 		void setpeso(int);
		int getedad();
		int getpeso();
		float getestatura();	
		void MostrarDatos();	
 };
 
 class Hombre: public Usuario{
 	protected: 
 		int calorias;
 		string sexo;
 	public:
 		Hombre(string,int,int,float,int,string);
 		int calo_necesarias();
 		void MostrarDatos();
 };
 
 class Mujer: public Usuario{
 	protected:
 		int calorias;
 		string sexo;
 	public:
 		Mujer(string,int,int,float,int,string);
 		int calo_necesarias();
 		void MostrarDatos();	
 };
 
 Usuario::Usuario(string _nombre,int _edad,int _peso, float _estatura){
 	nombre=_nombre;
 	edad=_edad;
 	peso=_peso;
 	estatura=_estatura;
 }
 
 
 void Usuario::setpeso(int _peso){
 	peso=_peso;
 }
 
 int Usuario::getedad(){
 	return edad;
 }
 
 int Usuario::getpeso(){
 	return peso;
 }

float Usuario::getestatura(){
	return estatura;
}
 
 
 void Usuario::MostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;	
 }
 
 
 Hombre::Hombre(string _nombre,int _edad,int _peso,float _estatura,int calo,string _sexo):Usuario( _nombre,_edad, _peso,_estatura){
 	calorias=0;
 	sexo=_sexo;
 }
 
 int Hombre::calo_necesarias(){
 	calorias= (10*peso)+(6.25*(estatura*100))-(5*edad)+5;
 	return calorias;
 }
 
 void Hombre::MostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;
 	cout<<"Sexo: "<<sexo<<endl;
 	
 }
  Mujer::Mujer(string _nombre,int _edad,int _peso,float _estatura,int calo,string _sexo):Usuario( _nombre,_edad, _peso,_estatura){
 	calorias=0;
 	sexo=_sexo;
 }
 
 int Mujer::calo_necesarias(){
 	calorias= (10*peso)+(6.25*(estatura*100))-(5*edad)-161;
 	return calorias;
 }
 
  void Mujer::MostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;
 	cout<<"Sexo: "<<sexo<<endl;
 	
 }
 
 int main(){
 	
 	system("pause");
 	return 0;
 }
 
 
