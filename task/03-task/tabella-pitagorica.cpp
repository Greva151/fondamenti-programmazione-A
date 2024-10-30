#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "Inserisci un valore intero (> 0): "; 
		cin >> n; 

		if(n < 1)
			cout << "Input errato" << endl; 
	}while(n < 1); 

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << (i + 1) * (j + 1) << " "; 
		}
		cout << endl; 
	}


	return 0; 
}