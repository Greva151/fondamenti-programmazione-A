	#include <iostream>
using namespace std; 

int main(){
	int m, n, l; 

	do{
		cout << "Inserisci la dimensione 'm' della prima matrice = "; 
		cin >> m;

		if(m < 1)
			cout << "Errore: valore non valido" << endl;  
	}while(m < 1);
	
	do{
		cout << "Inserisci la dimensione 'l' della prima matrice = "; 
		cin >> l; 

		if(l < 1)
			cout << "Errore: valore non valido" << endl; 
	}while(l < 1);
	
	do{
		cout << "Insersisci la dimensione 'n' della seconda matrice = "; 
		cin >> n; 

		if(n < 1)
			cout << "Errore: valore non valido" << endl; 
	}while(n < 1);   

	int matrice_prima[l][m]; 
	int matrice_seconda[m][n];

	for(int i = 0; i < l; i++)
		for(int j = 0; j < m; j++){
			cout << "inserisci l'elemento " << i << " " << j << " della prima matrice = "; 
			cin >> matrice_prima[i][j]; 
		}

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			cout << "inserisci l'elemento " << i << " " << j << " della seconda matrice = "; 
			cin >> matrice_seconda[i][j]; 			
		}

	int prodotto[l][n]; 

	for(int i = 0; i < l; i++)
		for(int j = 0; j < n; j++){
			prodotto[i][j] = 1; 

			for(int q = 0; q < m; q++)
				prodotto[i][j] *= matrice_prima[i][q]; 


			for(int q = 0; q < m; q++) 
				prodotto[i][j] *= matrice_seconda[q][j]; 
		}

	cout << "Prima matrice:" << endl; 
	for(int i = 0; i < l; i++){
		for(int j = 0; j < m; j++){
			cout << matrice_prima[i][j] << " "; 
		}
		cout << endl; 
	}

	cout << "Seconda matrice:" << endl; 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << matrice_seconda[i][j] << " "; 
		}
		cout << endl; 
	}

	cout << "Prodotto tra le matrici:" << endl; 
	for(int i = 0; i < l; i++){
		for(int j = 0; j < n; j++){
			cout << prodotto[i][j] << " "; 
		}
		cout << endl; 
	}

	
	return 0; 
}