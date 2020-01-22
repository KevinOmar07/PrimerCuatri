#include <iostream>

using namespace std;

void datos();
void verificarDados();
void sumar();
void status();

int d1,d2, resultado;

main(){
datos();
}

void datos(){
	cout<<"Ingrese el valor del dado 1"<<endl;
	cin>>d1;
	cout<<"Ingrese el valor del dado 2"<<endl;
	cin>>d2;
	verificarDados();
}

void verificarDados(){
	if (d1>0 && d1<7){
		if (d2>0 && d2<7){
			sumar();
		}
		else{
			cout<<"El valor del dado 2 es incorrecto"<<endl;
			datos();
		}
	}
	else{
		cout<<"El valor del dado 1 es incorrecto"<<endl;
		datos();
	}
}

void sumar(){
	resultado=d1+d2;
	status();
}

void status(){
	if (resultado==7 || resultado==11){
		cout<<"Felicidades ha ganado"<<endl;
	}
	else{
		if (resultado==2 || resultado==3 || resultado==12){
			cout<<"Lo siento usted ha perdido"<<endl;
		}
		else{
			cout<<"Tienes "<<resultado<<" puntos a favor, elija premio o siga tirando"<<endl;
			datos();
		}
	}
}

