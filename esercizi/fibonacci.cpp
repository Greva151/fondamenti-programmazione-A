#include <iostream>
using namespace std; 

int fib(){
	int n; 

	cout << "Inserisci un numero: "; 
	cin >> n;

	if(n > 0){
		if(n == 1)
			return 0;
		else{
			int valore = 1; 
			int old = 1; 
			int old_old = 0; 

			for(int i = 2; i < n; i++){
				valore = old + old_old; 
				old_old = old; 
				old = valore;  
			}

			return valore; 
		}
	} 

	return -1; 
}



int main(){
	int n = fib(); 

	if(n == -1)
		cout << "Errore: valore errato!" << endl; 
	else
		cout << "Fibbonacci: " << n << endl; 

	return 0; 
}