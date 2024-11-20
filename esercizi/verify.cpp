#include <iostream>
using namespace std; 

bool verify(int arr[], int dim){
	for(int i = 0; i < dim; i++){
		if(arr[i] <= 0)
			return false; 
		else{
			int couter = 0; 
			for(int j = 0; j < dim; j++)
				if(arr[i] == arr[j])
					couter++; 
			if(couter != arr[i])
				return false; 
		}
	}
	return true; 
}	


int main(){
	int n; 

	do{
		cout << "Inserisci il numero di elementi dell'array: "; 
		cin >> n;

		if(n < 1)
			cout << "Errore: valore non accettato" << endl; 
	}while(n < 1); 

	int array[n];

	for(int i = 0; i < n; i++){
		cout << "Inserisci il valore alla posizione " << i << ": "; 
		cin >> array[i]; 
	} 

	if(verify(array, n))
		cout << "L'array e' verificato" << endl; 
	else
		cout << "L'array non e' verificato" << endl; 

	return 0; 
}