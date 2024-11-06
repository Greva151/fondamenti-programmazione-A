#include <iostream>
using namespace std; 

int main(){
	int n; 	

	do{
		cout << "Inserisci la dimensione dell'array = "; 
		cin >> n; 

		if(n < 1)
			cout << "Errore: dimensione non valida" << endl; 
	}while(n < 1); 

	int array[n]; 

	for(int i = 0; i < n; i++){
		cout << "Inserisci l'elemento numero " << i << " dell'array = "; 
		cin >> array[i]; 
	}

	int compatto[n] = {0}; 
	int q = 0; 

	for(int i = 0; i < n; i++){
		bool flag = true; 

		for(int j = 0; j < q; j++)
			if(array[i] == compatto[j] || array[i] == 0)
				flag = false; 

		if(flag){
			compatto[q] = array[i]; 
			q++; 
		}
	}

	for(int i = 0; i < q; i++)
		cout << compatto[i] << " "; 

	cout << endl; 

	return 0; 
}