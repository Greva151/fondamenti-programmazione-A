#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "Inserisci il numero di elementi dell'array = "; 
		cin >> n; 

		if(n < 0 || n > 50)
			cout << "Errore: numero di elementi non valido" << endl; 
	}while(n < 0 || n > 50); 

	int array[50]; 

	for(int i = 0; i < n; i++){
		cout << "Inserisci l'elemento numero " << i + 1 << " = "; 
		cin >> array[i]; 
	}

	char array_invertito[50]; 
	int q = n - 1; 

	for(int i = 0; i < n / 2; i++){
		int appoggio = array[q]; 
		array[q] = array[i]; 
		array[i] = appoggio; 
		q--; 
	}

	for(int i = 0; i < n; i++)
		cout << array[i] << " "; 


	return 0; 
}