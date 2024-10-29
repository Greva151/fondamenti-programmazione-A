#include <iostream>
using namespace std; 

int main(){
	int n;
	int couter = 0; 

	cout << "inserisci un numero intero positivo: "; 
	cin >> n; 

	int i; 
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cout << i << endl; 
			couter++; 
		}
	}

	cout << "numero di divisori = " << couter << endl; 


	return 0; 
}