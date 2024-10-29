#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "inserisci un numero intero positivo: "; 
		cin >> n; 
	}while(n < 0); 

	for(int i = 0; i < n; i++){
		for(int j = n - 1 - i; j > 0; j--)
			cout << " "; 

		for(int j = 0; j < i * 2 + 1; j++)
			cout << "*"; 

		cout << endl; 
	}

	for(int i = 0; i < n - 1; i++)
		cout << " "; 

	cout << "*"; 

	return 0; 
}