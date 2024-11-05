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

	int array1[50]; 

	for(int i = 0; i < n; i++){
		cout << "Inserisci l'elemento numero " << i + 1 << " = "; 
		cin >> array1[i]; 
	}

	int m;

	do{
		cout << "Inserisci il numero di elementi dell'array = "; 
		cin >> m; 

		if(m < 0 || m > 50)
			cout << "Errore: numero di elementi non valido" << endl; 
	}while(m < 0 || m > 50); 

	int array2[50]; 

	for(int i = 0; i < m; i++){
		cout << "Inserisci l'elemento numero " << i + 1 << " = "; 
		cin >> array2[i]; 
	}

	int array3[50]; 
	int q = 0; 

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(array1[i] == array2[j]){
				bool flag = false; 

				for(int t = 0; t < q; t++){
					if(array1[i] == array3[t])
						flag = true; 
				}

				if(!flag){
					array3[q] = array1[i]; 
					q++; 
				}
			}

	for(int i = 0; i < q; i++)
		cout << array3[i] << " "; 

	return 0; 
}