#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "Inserisci il numero degli elementi dell'array = "; 
		cin >> n;

		if(n < 0 || n > 50)
			cout << "Errore: numero non valido" << endl;  
	}while(n < 0 || n > 50);

	int array[50]; 

	for(int i = 0; i < n; i++){
		cout << "Inserisci l'elemento numero " << i + 1 << " = "; 
		cin >> array[i]; 
	} 

	int somma_dispari = 0; 
	int somma_pari = 0; 

	for(int i = 0; i < n; i++){
		if(array[i] % 2 == 0)
			somma_pari += array[i]; 
		else
			somma_dispari += array[i]; 
	}

	int differenza = somma_pari - somma_dispari; 

	cout << "La differnza tra le due somme e' di = " << differenza << endl; 

	return 0; 
}