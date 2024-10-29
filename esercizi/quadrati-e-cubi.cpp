#include <iostream>
using namespace std; 

int main(){ 
	int numero; 
	cout << "insersci un numero: " << endl; 
	cin >> numero;

	int calcolo = (numero % 2 == 0 ? numero * numero : numero * numero * numero); 

	cout << calcolo << endl; 

	return 0; 
}