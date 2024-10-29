#include <iostream>
using namespace std; 

int main(){
	int n;
	int fatt = 1; 

	cout << "inserisci un numero per ricavare il fattoriale: "; 
	cin >> n; 

	int count = 1; 
	while(count <= n){
		fatt *= count; 
		count++; 
	}

	cout << "fattoriale = " << fatt << endl; 

	return 0; 
}	