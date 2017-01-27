#include <iostream>

using namespace std;


int main ()
{
	int option;
	char answer = 's';
	while (answer=='s'){
		cout<<"Menu" << endl;
		cout<<"1.- Ejercicio No.1" << endl;
		cout<<"2.- EJercicio No.2" << endl;
		cout<<"3.- EJercicio NO.3" << endl;
		cout<<"Ingrese la opcion: ";
		cin>>option;
		int number=0, column=0, counter = 1;
		while (option<1 || option>3){
			cout<<"Error en la opcion" << endl;
			cout<<"Ingrese una opcion: ";
			cin>>option;
		}
		switch (option){
			case 1: {
				//Ejercicio No.1
				cout<<"Ingrese un numero para el tamaño de la matriz: ";
				cin>>number;
				column = number + 1 ;
				int goro [number] [column];
				for (int i = 0; i<number; i++){
					for (int j = 0; j<column; j++){
						if (i==j){
							goro[i][j]=counter;
							counter++;
						}
						else if (i>j){
							goro[i][j]=counter;
							counter++;
						}
					
					}
				}
				break;
			}
			case 2:{//Ejercicios No.2
				number = 5;
				int vector [number];
				//Introduccion de numeros al arreglo
				for (int i=0; i<number; i++){
					cout<<"Ingrese un numero: ";	
					cin>>vector[i];
				}		
				//numero menor
				int less;
				for (int i=0; i<number; i++){
					counter = 0;
					for (int j=0 ; j<number; j++){
						if (vector[i]<=vector[j]){
							counter++;
						}
					}
					if(counter==number){
						less=vector[i];
						break;
					}
				}
				//numero mayor
				int higher;
				for (int i=0; i<number; i++){
					counter=0;
					for (int j=0; j<number; j++){
						if (vector[i]>=vector[j]){
							counter++;
						}
					}
					if (counter==number){
						higher=vector[i];
						break;
					}
				}
				//Ordenamiento de matriz
				int axu;
				for (int i=0; i<number; i++){
					for (int j=i+1; j<number; j++){
						if (vector[i]>=vector[j]){
							axu=vector[i];
							vector[i]=vector[j];
							vector[j]=axu;
						}
					}
				}
				//Impresion de matriz
				for (int i=0; i<number;i++){
					cout<<vector[i] << ", ";
				}
				cout<< "" << endl << "El numero menor es " << less << endl << "El numero mayor es " << higher << endl;
				break;
			}
			case 3:{//Ejercicio No.3
				cout<<"Ingrese un numero: ";
				cin>>number;
				counter = 1;
				int accumulator = 0;
				while (true){
					accumulator+=counter;
					if (number==accumulator){
						cout<<"EL numero es triangular" << endl;
						accumulator-=counter;
						cout<<"El numero triangular anterior es " << accumulator << endl;
						break;
					}
					else if (number<accumulator){
						cout<<"El numero no es triangular" << endl;
						accumulator-=counter;
						cout<<"El numero triangular anterior es: " << accumulator << endl;
						break;
					}
					counter++;
				}
				break;
			}
		}
		cout<<"Desea continuar [s/n]: ";
		cin>>answer;
		
	}
	return 0;
}
