#include <iostream>
using namespace std; 

int main(){
	int n; 

	do{
		cout << "inserisci un numero intero: "; 
		cin >> n; 
	}while(n < 0);

	cout << "divisori: "; 

	for(int i = 2; i <= n; i++){
		if(n % i == 0){
			cout << i << " ";
			n /= i;
			i = 1; 
		}
	} 

	return 0; 
}