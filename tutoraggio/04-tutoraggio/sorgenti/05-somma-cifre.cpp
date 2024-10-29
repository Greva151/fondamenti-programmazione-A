#include <iostream>
using namespace std; 

int main(){
	int n; 
	int somma = 0; 

	cout << "inserisci un numero intero positivo: "; 
	cin >> n; 
 
	while(n > 0){
		somma += n % 10;
		n /= 10; 
	}

	cout << "somma cifre = " << somma << endl; 

	return 0; 
}