
#include<iostream>
#include<stdlib.h>
using namespace std;


 class Usuario{
 	private: 
 		string nombre;
 		int edad,peso;
 		float estatura
 	public:
 		Usuario(string,int,int,float);
 		void setpeso(int);
		int getedad();
		int getpeso();
		float getestatura();	
		void MostrarDatos();	
 };
 
 class Hombre: public Usuario{
 	private: 
 		int talla;
 		string sexo;
 	public:
 		Hombre(string,int,int,float,int,string);
 		int calo_necesarias();
 		void MostrarDatos();
 };
 
 class Mujer: public Usuario{
 	private:
 		int talla;
 		string sexo;
 	public:
 		Mujer(string,int,int,int,int,string);
 		int calo_necesarias();
 		void MostrarDatos();	
 };
 
 Usuario::Usuario(string _nombre,int _edad,int _peso, float _estatura){
 	nombre=_nombre;
 	edad=_edad;
 	peso=_peso;
 	estatura=_estatura;
 }
 
 
 int Usuario::setpeso(int _peso){
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
 
 
 void Usuario::mostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;	
 }
 
 
 Hombre::Hombre(string _nombre,int _edad,int _peso,float _estatura,int _talla,string _sexo):Usuario( _nombre,_edad, _peso,_estatura){
 	talla=_talla;
 	sexo=_sexo;
 }
 
 int Hombre::calo_necesarias(){
 	calo_necesarias= (10*peso)+(6.25*(altura*100))-(5*edad)+5;
 	return IMC
 }
 
 void Hombre::mostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;
 	cout<<"Sexo: "<<sexo<endl;
 	
 }
  Mujer::Mujer(string _nombre,int _edad,int _peso,float _estatura,int _talla,string _sexo):Usuario( _nombre,_edad, _peso,_estatura){
 	talla=_talla;
 	sexo=_sexo;
 }
 
 int Mujer::calo_necesarias(){
 	IMC= 10*peso)+(6.25*(altura*100))-(5*edad)-161;
 	return IMC
 }
 
  void Hombre::mostrarDatos(){
 	cout<<"Nombre: "<<nombre<<endl;
 	cout<<"Edad: "<<edad<<endl;
 	cout<<"Peso: "<<peso<<endl;
 	cout<<"Estatura: "<<estatura<<endl;
 	cout<<"Sexo: "<<sexo<endl;
 	
 }
 
 
 
