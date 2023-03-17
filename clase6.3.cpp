#include <iostream>
using namespace std;

main(){
	string nombre;
	int dato;
	
	//char nombre[30];
	cout << "Ingrese dato: "<< endl;
	cin >> dato;
	cin.ignore();
	cout << "Ingrese nombre completo : "<< endl;
	//cin >> nombre;
	//cin.get(nombre,30);
	getline(cin,nombre);
	cout << nombre << endl;
	
	
	
	system("pause");
}
