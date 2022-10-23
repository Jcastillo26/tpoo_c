#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <conio.h>
#include <cmath>
	void go(int x, int y){
	
			HANDLE hCon;
			hCon= GetStdHandle(STD_OUTPUT_HANDLE);
			COORD dwPos;
			dwPos.X= x;
			dwPos.Y= y;
	
			SetConsoleCursorPosition(hCon,dwPos);
		
			}

using namespace std;
main(){
	int n=0,n1=0,n2=0,n3=0,n4=0,n5=0,sw1=0,uni=0,de=0,cen=0,mi=0,x=0;
	float f=0,f1=0,f2=0,f3=0,f4=0,f5=0;
	char res,res2;
	string txt;

	do{
		
	cout<<"1. suma, resta, multiplicacion y division de dos enteros: "<<endl;
	cout<<"2. determinacion de numero par o impar: "<<endl;
	cout<<"3. conversion de km a mi, de mt a in y de lb a kg"<<endl;
	cout<<"4. determinar si un numero o texto es palindromo: "<<endl;
	cout<<"5. convertir un numero arabico a romano: "<<endl;
	cout<<"6. transcribe un numero entero: "<<endl;
	cout<<"7. trasncribe un numero con decimales:"<<endl;
	cout<<"8. una tabla de multiplicar: "<<endl;
	cout<<"9. tablas de multiplicar: "<<endl;
	cout<<"10. multiplicacion grafica de 2 enteros: "<<endl;
	cout<<"11. numero decimal a binario: "<<endl;
	cout<<"12. numero decimal a hexadecimal: "<<endl;
	cout<<"13. figuras geometricas basicas: "<<endl;
	cout<<"14. mover un punto por la pantalla: "<<endl;
	cout<<"15. Cajero automatico: "<<endl;
	cout<<"16. Calculo de la Hipotenusa: "<<endl;
	cout<<"ingrese la operacion que desea realizar"<<endl;
	cin>>n;
	system("cls");
	switch(n){
		case 1:{
				cout<<"ingrese el primer numero: "<<endl;
				cin>>n1;
				cout<<"ingrese el segundo numero: "<<endl;
				cin>>n2;
				n3=n1+n2;
				n4=n1-n2;
				n5=n1*n2;
				f=n1/n2;
				cout<<"la suma es: "<<n3<<" , "<<"la resta es: "<<n4<<" , "<<"la multiplicacion es: "<<n5<<" , "<<"la division es: "<<f<<endl;
		break;		
		}
		case 2:{
				cout<<"ingrese un numero: "<<endl;
				cin>>n1;
				if((n1%2)==0){
				cout<<"el numero "<<n1<<" es par"<<endl;
				}else{
				cout<<"el numero "<<n1<<" es impar"<<endl;
				}
				
		break;
		}
		
	    case 3:{
	    	cout<<"1. kilometros a millas: "<<endl;
	    	cout<<"2. millas a kilometros: "<<endl;
	    	cout<<"3. metros a pulgadas: "<<endl;
	    	cout<<"4. pulgadas a metros: "<<endl;
	    	cout<<"5. libras a kilos: "<<endl;
	    	cout<<"6. kilos a libras: "<<endl;
	    	cout<<"que conversion desea realizar: "<<endl;
	    	cin>>sw1;
	    	system("cls");
	    	switch(sw1){
	    		case 1: cout<<"ingrese los kilometros a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1/1.609;
	    				cout<<"los "<<f1<<" kilometros equivalen a "<<f2<<" millas"<<endl;
	    		break;
	    		case 2: cout<<"ingrese las millas a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1*1.609;
	    				cout<<"las "<<f1<<" millas equivalen a "<<f2<<" kilometros"<<endl;
	    		break;
	    		case 3: cout<<"ingrese los metros a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1*39.37;
	    				cout<<"los "<<f1<<" metros equivalen a "<<f2<<" pulgadas"<<endl;
	    		break;
	    		case 4:cout<<"ingrese las pulgadas a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1/39.37;
	    				cout<<"las "<<f1<<" pulgadas equivalen a "<<f2<<" metros"<<endl;
	    		break;
	    		case 5:cout<<"ingrese las libras a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1/2.205;
	    				cout<<"las "<<f1<<" libras equivalen a "<<f2<<" kilos"<<endl;
	    		break;
	    		case 6:cout<<"ingrese los kilos a convertir: "<<endl;
	    				cin>>f1;
	    				f2=f1*2.205;
	    				cout<<"los "<<f1<<" kilos equivalen a "<<f2<<" libras"<<endl;
	    		break;
	    		default: cout<<"esa opcion no esta disponible"<<endl;
			}
			break;
		}
		case 4:{
			cout<<"ingrese la palabra o numero a evaluar: ";
			getline(cin>>ws,txt);
			for(int i=txt.length()-1;i>=0;i--){
			if(txt[i]==txt[n1]){
				n2++;
			}
			n1++;	
			}
			if(txt.length()==n2){
				cout<<"la palabra o numero ingresado si es Palindromo"<<endl;
			}else{
				cout<<"la palabra o numero ingresasdo no es Palindromo"<<endl;
			}
						
			break;
		}
		case 5:{
			cout<<"ingrese el numero que desea convertir: "<<endl;
			cin>>n1;
			uni=n1 % 10;n1 /= 10;
			de=n1 % 10; n1 /= 10;
			cen=n1 % 10; n1 /=10;
			mi=n1 % 10; n1 /=10;
			switch (mi)
 		{
  		case 1: cout<<"M"; break;
 		case 2: cout<<"MM"; break;
  		case 3: cout<<"MMM"; break;
 		}
 
 		switch (cen)
 		{
  		case 1: cout<<"C"; break;
  		case 2: cout<<"CC"; break;
  		case 3: cout<<"CCC"; break;
 		case 4: cout<<"CD"; break;
  		case 5: cout<<"D"; break;
 		case 6: cout<<"DC"; break;
 		case 7: cout<<"DCC"; break;
  		case 8: cout<<"DCCC"; break;
  		case 9: cout<<"CM"; break; 
		 }
 
 		switch (de)
 		{
  		case 1: cout<<"X"; break;
  		case 2: cout<<"XX"; break;
 		case 3: cout<<"XXX"; break;
 		case 4: cout<<"XL"; break;
  		case 5: cout<<"L"; break;
 		case 6: cout<<"LX"; break;
 		case 7: cout<<"LXX"; break;
  		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break; 
 		}
 
 		switch (uni)
		 {
 		 case 1: cout<<"I"; break;
 		 case 2: cout<<"II"; break;
 		 case 3: cout<<"III"; break;
		 case 4: cout<<"IV"; break;
  		 case 5: cout<<"V"; break;
  		 case 6: cout<<"VI"; break;
  		 case 7: cout<<"VII"; break;
  		 case 8: cout<<"VIII"; break;
 		 case 9: cout<<"IX"; break;
 		}
			
			break;
		}
		case 6:{
			cout<<"ingrese un numero entero a transcribir: "<<endl;
   			cin>>x;
			if((x<1)||(x>999)){
			 cout<<"INGRESA UN NUMERO DEL 1 AL 999"<<endl;}
			else 
    	{
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    	cout<<endl;
		break;
		}
		case 7:{
		int main(int argc, char** argv) ;
		{
 		double valor;
 		int miles,cientos,unidades,decimales;

 		char numeros[100][20] = 
 	{
 	 {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
 	 {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
 	 {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
 	 {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
 	 {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
 	 {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
 	 {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
 	 {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
 	 {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
 	 {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
	 };
 	char centenas[10][20] = 
 	{
	 {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
	 };
 
	cout<< "Introduzca numero a transcribir: "<<endl;
	cin>> valor;

	miles = ((int)valor)/1000;
 	cientos = (((int)valor)%1000)/100;
 	unidades = ((int)valor)%100;
 	decimales = ((int) (valor*100.0))%100 ;
 	if (miles)
 	cout << numeros[miles] << " mil ";
	if (cientos)
	cout << centenas[cientos] << " ";
    if (unidades) 
	cout << numeros[unidades];
 	if (decimales)
	 {
  	if(miles || cientos || unidades)
  	{
 	cout << " con ";
  	}
 	cout << numeros[decimales] << " centesimas.";
 	}
	cout << endl;
	}
			
	break;
		}
		case 8:{
			 int tabla=0,res=0;
			 cout<<"Ingrese tabla que desea ver: "<<endl;
 			 cin>>tabla;
 			 for (int i=1;i<=10;i++){
  			 res = tabla*i;
  			 cout<<tabla<< " X "<<i<<" = "<<res<<endl;
			 }
		break;
		}
		case 9:{
			int tabla=0,res=0,inicio=0,fin=0;
			cout<<"Ingrese la tabla inicial:";
 			cin>>inicio;
 			cout<<"Ingrese la tabla final:";
 			cin>>fin;
 
 			for (int tabla=inicio;tabla<=fin;tabla++){
  			cout<<"Esta es la Tabla del "<<tabla<<endl;
  			for (int i=1;i<=10;i++){
  			res = tabla*i;
  			cout<<tabla<< " X "<<i<<" = "<<res<<endl;
 			}			
			
		}
		break;
		}
		case 10:{
		int ar=0,ab=0,x=0,ci[100],ci2[100],ci3;
		
		cout<<"ingrese el multiplicando: "<<endl;
		cin>>ar;
		cout<<"ingrese el multiplicador: "<<endl;
		cin>>ab;
		ci3=ar*ab;
		system("cls");
		
		cout<<"   "<<ar<<endl;
		cout<<"   ";
		while (ab>0){
			ci[x]=ab%10;
			ab=ab/10;
			x++;}
		
		for(int s=x-1;s>=0;s--){
			cout<<ci[s];
			ci2[s]=ci[s]*ar;
		}
		cout<<endl<<"_x_____"<<endl;
		cout<<" ";
		for(int s=0;s<x;s++){
			cout<<"  "<<ci2[s]<<endl;
	    }
		
		cout<<"________"<<endl<<"  "<<ci3;
		
		
		cout<<endl;	
			
			
			break;
		}
		case 11:{
			int numero;
			string binario = "";
			cout << "Ingrese un numero entero positivo: \n";
       		cin >> numero;
   			if (numero > 0) {
        	while (numero > 0) {
            if (numero%2 == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numero = (int) numero/2;
        	}
    		} else if (numero == 0) {
       		 binario = "0";
    		} else {
        	binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
   			}
    		cout << "El resultado de la conversion es: " << binario;
			break;
		}
		case 12:{
		int main(void);
		{
		int mynum;
		cout << "Digite un numero: ";
		cin >> mynum;
		cout.unsetf(ios::dec);
		cout.setf(ios::hex | ios::showbase);
		cout << "En hexadecimal: " << mynum<<endl;
		cout.unsetf(ios::hex);
		cout.setf(ios::oct);
			
		}	
		break;
		}
		case 13:{
			int x=0;
			cout<<"que figura desea visualizar: "<<endl;
			cout<<"1. Cuadrado: "<<endl;
			cout<<"2. triangulo: "<<endl;
			cout<<"3. Rombo: "<<endl;
			cout<<"4. Rectangulo: "<<endl;
			cin>>x;
			system("cls");
			switch(x){
				case 1:{
					int n=8;
				for(int i=0;i<n;i++){
		
				for(int j=0;j<n;j++){
			
				cout<<"* ";
				}
				cout<<endl;
				}
					
					
					break;
				}
				case 2:{
					int n=8;
				for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
				cout<<" ";	
			    }
				for(int j=0;j<=i;j++){
				cout<<"* ";
				}
				cout<<endl;		
				}
					
					break;
				}
				case 3:{
						int n=8;
				for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
				cout<<" ";	
				}
				for(int j=0;j<=i;j++){
				cout<<"* ";
				}
				cout<<endl;		
	 	   		} 
				for(int i=0;i<n;i++){
				for(int j=0;j<=i;j++){
				cout<<" ";
				}
				for(int j=i;j<n;j++){
				cout<<"* ";	
				}
				cout<<endl;		
				}
				break;
				}
			case 4:{
				int n=8;
				for(int i=0;i<n;i++){
		
				for(int j=0;j<(n*2);j++){
			
				cout<<"* ";
				}
				cout<<endl;
				}
				break;
			}
			}
			break;
		}
		case 14: {
			int x=5,y=5;
			go(x,y);printf("*");
			bool over=false;
			while (!over){
			if(kbhit())	{
			char tecla = getch();
			go(x,y);printf(" ");
			if(tecla=='a')x--;
			if(tecla=='d')x++;
			if(tecla=='w')y--;
			if(tecla=='s')y++;			
			go(x,y); printf("*");		
			}
			}
			Sleep(30);
			return 0;
			break;
			}
		case 15:{
		int saldo=500,saldo2=0,op,ret=0;
		float saldo1;
			do{	
			cout<<"\t Bienvenido a 5B: "<<endl;
			cout<<"1. depositar dinero en cuenta: "<<endl;
			cout<<"2. retirar dinero de la cuenta: "<<endl;
			cout<<"3. salir: "<<endl;
			cout<<"Que desea realizar: "<<endl;
			cin>>op;
			system("cls");
			switch(op){
				case 1:
					cout<<"ingrese la cantidad de dinero que va depositar: "<<endl;
					cin>>saldo1;
					system("cls");
					saldo=saldo+saldo1;
					cout<<"deposito realizado exitosamente: "<<endl;
					cout<<"su dinero disponible es: "<<saldo<<endl;break;
				case 2:
					cout<<"ingrese la cantidad de dinero a retirar: "<<endl;
					cin>>ret;
					system("cls");
					if(ret>saldo){cout<<"fondos insuficientes"<<endl;}
					else{cout<<"favor tome su dinero: "<<endl;
					saldo=saldo-ret;
					cout<<"su nuevo saldo disponible es: "<<saldo<<endl;
					break;
					}
				case 3:	break;
					}
			cout<<endl<<"--------------------------------------------------------"<<endl;
			cout<<"Desea hacer otra operacion (s/n):";
 			 cin>>res2;
 			 system("cls");	
				
			}while(res2=='s'||res2=='S');	
			break;
		   }
		case 16:{
			cout<<"ingrese el cateto a: "<<endl;
			cin>>n2;
			cout<<"ingrese el cateto b: "<<endl;
			cin>>n3;
			n4=(n2*n2)+(n3*n3);
			f2=sqrt(n4);
			cout<<"la Hipotenusa es: "<<f2<<endl;
					
			break;
		}
			
		default: cout<<"esa opcion no esta disponible"<<endl;	
	
	}
			cout<<endl<<"--------------------------------------------------------"<<endl;
			cout<<"Desea hacer otra operacion (s/n):";
 			 cin>>res;
 			 system("cls");
 			 
	}while(res=='s'||res=='S');	
	system("pause");
	}
	
	
	
	
	
