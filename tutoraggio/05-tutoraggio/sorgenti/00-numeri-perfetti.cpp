#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "Inserisci un intero positivo: "; 
		cin >> n; 
	} while(n < 0);

	int sommadivisori = 0; 

	for(int i = 1; i < n; i++){
		if(n % i == 0)
			sommadivisori += i; 
	} 

	if(n == sommadivisori)
		cout << "il numero e' un numero perfetto" << endl; 
	else
		cout << "il numero non e' un numero perfetto" << endl; 


	return 0; 
}