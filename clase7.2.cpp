#include <iostream>
using namespace std;

main(){
	
	int fil=0,col=0;
	
	cout << "Ingrese filas"<< endl;
	cin >> fil;
	cout << "Ingrese columnas "<< endl;
	cin >> col;
	int matriz[fil][col]{{10,20,30},{40,50,60}};
	
	cout <<"-----------------ingresar----------------"<< endl;
	for (int i =0; i<fil; i++){
		for (int ii=0; ii<col; ii++){
			cout << i << ", "<< ii << ": "<< endl;
			cin >> matriz[i][ii];
		}
	}
	cout<< "---------------mostrar-------------------"<<endl;	
	for (int i=0;i<fil;i++){
		cout<< "____________ "<<endl;
		for(int ii=0;ii<col;ii++){
		cout<< i << ", "<< ii << ":"<< matriz[i][ii]<< endl;
		}
	}
	
	system("pause");
}
