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

	int x; 

	cout << "Inserisci un numero x = "; 
	cin >> x; 

	int couter_multipli = 0; 

	for(int i = 0; i < n; i++){
		if(array[i] % x == 0){
			cout << array[i] << " ";
			couter_multipli++;  
		}
	}

	cout << endl; 
	cout << "il numero di multipli all'interno dell'array e' = " << couter_multipli << endl; 

	return 0; 
}