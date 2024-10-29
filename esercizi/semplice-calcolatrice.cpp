#include <iostream>
using namespace std; 

int main(){
	int a, b, c; 

	cout << "inserisci tre numeri: " << endl; 
	cin >> a >> b >> c; 

	if(c != 1 && c != 2)
		cout << "ERRORE: operazione non valida" << endl; 
	else{
		int risultato; 
		if(c == 1)
			risultato = a + b; 
		else 
			risultato = a - b; 
		cout << "risultato = " << risultato << endl; 
	}


	return 0; 
}