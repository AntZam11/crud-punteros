#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<string>
#include<cstdlib>
#include<fstream>



using namespace std;

struct Estudiante{
	
	int *codigo;
	string *nombre;
	string *apellido;
	string *direccion;
	int *telefono;
	int **pm_notas;
	
};
void dato();
main(){

	dato();

return 0;
}

void dato(){
		
    ofstream arch;
	

	int fila=0,columna=0;
	Estudiante estudiante;
	
	cout<<"Cuantos Estudiantes Desea Ingresar:";
	cin>>fila;
    cout<<"Cuantas Notas por Estudiante Desea Ingresar:";
	cin>>columna;
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.apellido = new string[fila];
	estudiante.direccion = new string[fila];
	estudiante.telefono = new int[fila];
	estudiante.pm_notas = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.pm_notas[i] = new int[columna];
	
	
	}


	
	cout<<" ------------------------------ Ingreso de  Notas -----------------------"<<endl;


	
	for(int i=0;i<fila;i++){
		cout<<"Codigo:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre:";
		getline(cin,estudiante.nombre[i]);
     	cout<<"Apellido:";
		getline(cin,estudiante.apellido[i]);
		cout<<"Direccion: ";
		getline(cin,estudiante.direccion[i]);
		cout<<"Telefono:";
		cin>>estudiante.telefono[i];
		cin.ignore();
		cout<<"Nota:";
			
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese nota["<<ii<<"]:";
					
cin>>*(*(estudiante.pm_notas+i)+ii);


	}
	cout<<"________________________________"<<endl;	
	}
		
	
	cout<<" ------------------------------ Mostrar de  Notas -----------------------"<<endl;
	arch.open("archivo.dat", ios::out | ios::app);
	
	for(int i=0;i<fila;i++){
		cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre:"<<estudiante.nombre[i]<<endl;
		cout<<"Apellido;"<<estudiante.apellido[i]<<endl;
		cout<<"Direccion:"<<estudiante.direccion[i]<<endl;
		cout<<"Telefono:"<<estudiante.telefono[i]<<endl;
		
		
		
		for(int ii=0;ii<columna;ii++){
			cout<<"Nota["<<ii<<"]:"<<*(*(estudiante.pm_notas+i)+ii)<<endl;


	arch<<"|"<<estudiante.codigo[i]<<"|"<<estudiante.nombre[i] <<"| "<<estudiante.apellido[i]<<"| "<<estudiante.direccion[i]<<"| "<<estudiante.telefono[i]<<"| \n\n";
	arch.close();
	
	
	}

			
	cout<<"________________________________"<<endl;	
	}
	
		for (int i=0;i<fila;i++){
	delete [] estudiante.pm_notas[i];

  
	}
    delete [] estudiante.pm_notas;
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.apellido;
	delete[] estudiante.direccion;
	delete[] estudiante.telefono;
	
	system("PAUSE");
	
	

	}	

	