#include <iostream>
#include <cmath>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "Bits: "; 
		cin >> n; 

		if(n < 2)
			cout << "Errore!" << endl; 
	}while(n < 2); 

	int array[n]; 

	for(int i = 0; i < n; i++){
		do{
			cout << "Inserisci il bit nella posizione " << n - 1 - i << ": "; 
			cin >> array[i]; 

			if(array[i] != 0 && array[i] != 1)
				cout << "Errore!" << endl; 
		}while(array[i] != 0 && array[i] != 1); 
	}

	int scelta; 

	cout << "Operazione: " << endl; 
	cout << "	0 - Stampa binario: " << endl; 
	cout << "	1 - Converti in decimale: " << endl; 
	cout << "	2 - Somma: " << endl;

	do{
		cin >> scelta;  
		if(scelta < 0 || scelta > 2)
			cout << "Errore!" << endl; 
	}while(scelta < 0 || scelta > 2); 
	

	if(scelta == 0){
		cout << "Numero binario: "; 
		for(int i = 0; i < n; i++)
			cout << array[i]; 
	}
	else if(scelta == 1){
		int numero = 0; 

		if(array[0] == 0){
			int q = 0; 
			for(int i = n - 1; i > 0; i--)
				numero += array[i] * pow(2, q++);
		}
		else{
			for(int i = n - 1; i > -1; i--){
				if(array[i] == 1){
					array[i] = 0;

					for(int j = i + 1; j < n; j++)
						array[j] = 1; 

					break; 
				}
			}

			for(int i = 0; i < n; i++)
				if(array[i] == 1)
					array[i] = 0; 
				else 
					array[i] = 1; 

			int q = 0;
			for(int i = n - 1; i > -1; i--)
				numero += array[i] * pow(2, q++);
			
			numero *= -1; 
		}

		cout << "Numero decimale: " << numero << endl; 
	}
	else{
		int old_bit = array[0]; 

		bool is_full = true;
		for(int i = n - 1; i > -1; i--)
			if(array[i] == 0){
				array[i] = 1; 

				for(int q = i + 1; q < n; q++)
					array[q] = 0; 

				is_full = false; 

				break; 
			}
	
		if(is_full)
			for(int i = 0; i < n; i++)
				array[i] = 0;

		if(old_bit == 0 && array[0] == 1)
			cout << "Overflow!" << endl; 
		else 
			for(int i = 0; i < n; i++)
				cout << array[i];   
	}

	return 0; 
}