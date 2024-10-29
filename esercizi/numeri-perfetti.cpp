#include <iostream>
using namespace std; 

int main(){

	int a, b; 

	cout << "inserisci due numeri: "; 
	cin >> a >> b; 

	for(int i = a; i <= b; i++){
		int somma = 0; 

		for(int q = 1; q < i; q++){ 
			if(i % q == 0)
				somma += q; 
		}

		if(somma == i)
			cout << i << " "; 
	}


	return 0; 
}