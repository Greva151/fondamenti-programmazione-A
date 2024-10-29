#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "inserisci un numero intero positivo: "; 
		cin >> n; 
	}while(n < 0); 

	int somma = 0; 

	do{	
		somma = 0; 
		while(n > 0){
			somma += (n % 10); 
			n /= 10; 
		}
		n = somma; 
	}while(n >10 ); 

	cout << n << endl; 

	return 0; 
}