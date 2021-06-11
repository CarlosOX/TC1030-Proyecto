#include <iostream>
#include <stdlib.h>
#include "Alimento.h"
#include <string>



using namespace std;


string r;
bool c;




int main(){
	cout<<"BIENVENIDO AL ALIMENT REGISTER"<<endl;
	cout<<"DESEA REGISTRARSE?"<<endl;
	cin>>r;
	if (r=="si"){
		string _correo,_contra,_nombre,_sexo;
		float _edad,_peso,_estatura;

		
		cout<<"Ingrese correo: "<<endl;    //inicializacion de variables para guardarlas en los constructores de nuestros objetos
		cin>>_correo;
		cout<<"Ingrese contraseña: "<<endl;
		cin>>_contra;
		cout<<"Ingrese nombre: "<<endl;
		cin>>_nombre;
		cuenta c1(_correo,_contra,_nombre);
		c1.registrarse();
		c1.Iniciar_Sesion();
		
		
		cout<<"\nIngrese su edad: "<<endl;
		cin>>_edad;
		cout<<"Ingrese su peso en kilos: "<<endl;
		cin>>_peso;
		cout<<"Ingrese su estatura en cm: "<<endl;
		cin>>_estatura;
		cout<<"Ingrese su sexo: "<<endl;
		cin>>_sexo;
		
	
		if(_sexo=="hombre"){
			
			Usuario *us = new Hombre(_edad,_peso,_estatura);   //creacion de apuntador para aplicar polimorfismo con la funcion calculoMB.
			us->calculoMB();
			cout<<"Desea registrar alimentos?"<<endl;
			cin>>r; 
			if(r=="si"){
			    int num,i;
				cout<<"Cuantos alimentos desea registrar?"<<endl;
				cin>>num;
				Alimento alim[100];    //creacion de arreglo de objetos ya que se espera registrar muchos objetivos de tipo alimento
				for(i=0;i<num;i++){
					float _lipidos,_proteinas,_carbohidratos;
					string _nombre;
					cout<<"Ingrese el nombre del alimento: "<<endl;
					cin>>_nombre;
					cout<<"Ingrese los lipidos en gramos: "<<endl;
					cin>>_lipidos;
					cout<<"Ingrese las proteinas en gramos: "<<endl;
					cin>>_proteinas;
					cout<<"Ingrese los carbohidratos en gramos: "<<endl;
					cin>>_carbohidratos;
					alim[num]=Alimento(_lipidos,_proteinas,_carbohidratos,_nombre);
					alim[num].calculo_calorias();
				}
				cout<<"DESEA VER LOS REGISTROS?"<<endl;      
				cin>>r;
				if(r=="si"){
					float sumacalorias=0;
					for(i=0;i<num;i++){
						alim[num].Mostrar_info();
						sumacalorias=alim[num].calculo_calorias()+sumacalorias;    //variable que guarda las calorias de nuestros objetos juntos
					}
					float calorias;
					calorias=sumacalorias;
					cout<<"Las calorias consumidas entre todos los alimentos son: "<<calorias<<endl;
					us->calculoMB();
					
				}
				cout<<"ESO ES TODO PARA LA PRUEBA"<<endl;
				cout<<"ADIOS";
			}
			else(cout<<"No hay datos para hacer registro");
		
			
			delete us; 
		}
		
		else if(_sexo=="mujer"){
			Usuario *us = new Mujer(_edad,_peso,_estatura);
			us->calculoMB();
			cout<<"Desea registrar alimentos?"<<endl;
			cin>>r;
			if(r=="si"){
				
				int num,i;
				cout<<"Cuantos alimentos desea registrar?"<<endl;
				cin>>num;
				Alimento alim[100];
				for(i=0;i<num;i++){
					float _lipidos,_proteinas,_carbohidratos;
					string _nombre;
					cout<<"Ingrese el nombre del alimento: "<<endl;
					cin>>_nombre;
					cout<<"Ingrese los lipidos en gramos: "<<endl;
					cin>>_lipidos;
					cout<<"Ingrese las proteinas en gramos: "<<endl;
					cin>>_proteinas;
					cout<<"Ingrese los carbohidratos en gramos: "<<endl;
					cin>>_carbohidratos;
					alim[num]=Alimento(_lipidos,_proteinas,_carbohidratos,_nombre);
					alim[num].calculo_calorias();
				}
				cout<<"DESEA VER LOS REGISTROS?"<<endl;
				cin>>r;
				if(r=="si"){
					float sumacalorias=0;
					for(i=0;i<num;i++){
						alim[num].Mostrar_info();
						sumacalorias=alim[num].calculo_calorias()+sumacalorias;
					}
					float calorias;
					calorias=sumacalorias;
					cout<<"Las calorias consumidas entre todos los alimentos son: "<<calorias<<endl;
					us->calculoMB();
					
				}
				cout<<"ESO ES TODO PARA LA PRUEBA"<<endl;
				cout<<"ADIOS";	
		    }
		    else(cout<<"No hay datos para hacer registro");
		    
			
			
			delete us;
			
		}
		
	
	}
	else(cout<<"ADIOS");

	system("pause");
	return 0;
}
