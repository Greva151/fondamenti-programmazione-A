#include <iostream>
using namespace std; 

int main(){
	int n; 
	int somma = 0; 

	cout << "inserisci un numero intero positivo: "; 
	cin >> n; 

	int i = 1; 
	while(i <= n){
		if(i % 2 == 0){
			somma += i; 
			cout << i << endl; 
		}
		i++; 
	}

	cout << "somma = " << somma << endl; 

	return 0; 
}