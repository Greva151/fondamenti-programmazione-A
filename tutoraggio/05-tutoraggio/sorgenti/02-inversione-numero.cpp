#include <iostream>
using namespace std; 

int main(){
	int n; 
	int numero = 0; 

	do{
		cout << "inserisci un numero intero positivo: "; 
		cin >> n; 
	}while(n < 0); 

	while(n > 0){
		numero += n % 10;
		numero *= 10;  
		n /= 10; 
	}

	numero /= 10; 

	cout << numero; 

	return 0; 
}