#include <iostream>
using namespace std;

main () {
	int tam=0, suma= 0, promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout << "Ingrese nota"<< endl;
		cin >> notas[tam-1];
		cout<< "Desea ingresar otra nota? (s/n)"<< endl;
		cin >>res;
	}while (res=='s'|| res=='S');
	
	for(int i= 0; i <tam; i++){
		cout << notas[i]<< endl;
	}
	promedio= suma/tam;
	cout << "El promedio es: "<< promedio << endl;
	
	
	system("pause");
}
