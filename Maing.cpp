#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"ingresar NIT: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombres;
	cout<<"ingresar apellidos: ";
	cin>>apellidos;
	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	/*
	Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();*/
	/*
	Cliente obj= Cliente();
	obj.set	setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	obj.mostrar();
	*/
	
	Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
	cout<<"datos del cliente: "<<obj.getnit()<<","<<obj.getnombres()<<","<<obj.getapellidos()<<","<<obj.getdireccion()<<","<<obj.gettelefono()<<endl;
	
	
}