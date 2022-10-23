#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <iostream>
#define N 50

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
const char *no_archivo="Traductor.dat";
struct Traductor{
	int n,n2,n3;
	char esp[100];
	char ing[100];
	};

int main(void){
int x=0;
char res2,res3;
void crear ();
void leer ();
void actualizar();
void borrar();
	do{
	cout<<"1. ingresar palabras con su traduccion: "<<endl;
	cout<<"2. ensenar listado de palabras con su traduccion: "<<endl;
	cout<<"3. actualizar alguna palabra: "<<endl;
	cout<<"4. borrar una palabra: "<<endl;
	cout<<"----------Que desea Realizar: "<<endl;
	cin>>x;
	system("cls");
	switch(x){
	case 1:{
	void crear();{
	FILE*archivo=fopen(no_archivo,"a+b");
	char res;
	Traductor traductor;
	do{
		fflush(stdin);
		cout<<"ingrese una palabra en espanol: ";
		cin.getline(traductor.esp,100);
		cout<<"ingrese la traduccion en ingles: ";
		cin.getline(traductor.ing,100);
		
	fwrite(&traductor,sizeof(Traductor),1,archivo);	
	cout<<"desea agregar otra palabra (s/n): "<<endl;
	cin>>res;
	system("cls");	
	}while(res=='s'||res=='S');
	fclose(archivo);
	}
	break;
	}
	case 2:{
	void leer();{
	system("cls");
	FILE*archivo=fopen(no_archivo,"rb");
	if(!archivo){
		FILE*archivo=fopen(no_archivo,"w+b");
	}
	Traductor traductor;
	int id=0;
	fread(&traductor,sizeof(Traductor),1,archivo);
	cout<<"-------------------------------------"<<endl;
	cout<<"No."<<" ||"<<"espanol"<<"||"<<"ingles"<<endl;
	do{
		cout<<id<<" "<<" ||"<<traductor.esp<<"||"<<traductor.ing<<endl;
		fread(&traductor,sizeof(Traductor),1,archivo);
		id+=1;
	}while(feof(archivo)==0);
	 fclose(archivo);
	}	
	break;
	}
	case 3:{
	void actualizar();{
	FILE*archivo=fopen(no_archivo,"r+b");
	Traductor traductor;
	int id=0;
	cout<<"ingrese el no. de palabra que desea modificar: "<<endl;
	cin>>id;
		fseek(archivo,id * sizeof(Traductor),SEEK_SET);	
		fflush(stdin);
		cout<<"ingrese una palabra en espanol: ";
		cin.getline(traductor.esp,100);
		cout<<"ingrese la traduccion en ingles: ";
		cin.getline(traductor.ing,100);
		
	fwrite(&traductor,sizeof(Traductor),1,archivo);	
		
	fclose(archivo);}
	break;
	}
	case 4:{
		void borrar();{
		const char *no_archivo_te="Traductor_te.dat";
		FILE*archivo_te=fopen(no_archivo_te,"w+b");		
		FILE*archivo=fopen(no_archivo,"rb");
		Traductor traductor;
		int id=0,i=0;
		cout<<"que no. de registro desea eliminar: "<<endl;
		cin>>id;
		while(fread(&traductor,sizeof(Traductor),1,archivo)){
			if(i!=id){
			fwrite(&traductor,sizeof(Traductor),1,archivo_te);	
			}
			i++;
		}			
		fclose(archivo);
		fclose(archivo_te);	
		
		archivo_te=fopen(no_archivo_te,"rb");		
		archivo=fopen(no_archivo,"wb");
		while(fread(&traductor,sizeof(Traductor),1,archivo_te)){
			fwrite(&traductor,sizeof(Traductor),1,archivo);
			}
		fclose(archivo);
		fclose(archivo_te);	
		}
		
		break;
	}
	
	
	default: cout<<"esa opcion no esta disponible"<<endl;
	
	}cout<<"desea hacer algo mas (s/n): "<<endl;
	 cin>>res2;
	 system("cls");
	}while(res2=='s'||res2=='S');
	
	
	
}