#include <iostream>
using namespace std; 

int main(){
	int n;

	do{
		cout << "Inserisci il numero di elementi dell'array: "; 
		cin >> n;

		if(n < 1)
			cout << "Errore: numero di elementi non valido" << endl; 
	}while(n < 1); 	 

	int array[n]; 

	for(int i = 0; i < n; i++){
		cout << "Inserisci l'elemento numero " << i << " dell'array = "; 
		cin >> array[i]; 
	} 

	int elementi_singoli[n] = {0}; 
	int q = 0; 

	for(int i = 0; i < n; i++){ 
		bool flag = true;

		for(int j = 0; j < q; j++){
			if(array[i] == elementi_singoli[j])
				flag = false; 
		}

		if(flag){
			elementi_singoli[q] = array[i]; 
			
			int counter = 0; 

			for(int j = 0; j < n; j++)
				if(elementi_singoli[q] == array[j])
					counter++; 
			
			cout << "numero = " << elementi_singoli[q] << "  --> occorrenza = " << counter << endl; 

			q++;
		}
	} 

	return 0; 
}