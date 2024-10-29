#include <iostream>
using namespace std; 

int main(){
	int n; 

	cout << "inserisci un numero intero positivo: "; 
	cin >> n; 

	int i;
	bool flag = true;  
	for(i = 2; i < n; i++){
		if(n % i == 0){
			flag = false; 
		}
	}

	if(flag){
		cout << "il numero e' primo" << endl; 
	}	
	else
		cout << "il numero non e' primo" << endl; 

	return 0; 
}