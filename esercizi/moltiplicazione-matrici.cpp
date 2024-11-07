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

	int matrice[l][m] = {0}; 

	for(int i = 0; i < l; i++)
		for(int j = 0; j < m; j++){
			cout << "inserisci l'elemento " << i << " " << j << " della prima matrice = "; 
			cin >> matrice[i][j]; 
		}

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			cout << "inserisci l'elemento " << i << " " << j << " della seconda matrice = "; 
			cin >> matrice[i][j]; 			
		}

	return 0; 
}