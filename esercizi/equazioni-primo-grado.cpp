#include <iostream>
using namespace std; 

int main(){	
	int a, b; 

	cout << "inserisci il valore di a: "; 
	cin >>  a; 
	cout << "inserisci il valore di b: "; 
	cin >> b; 

	if(a != 0){
		int x = (-b) / a;
		cout << "valore di x = " << x << endl;   
	} 
	else if(b != 0)
		cout << "equazione impossibile" << endl; 
	else
		cout << "l'equazione e' indeterminata" << endl;  

	return 0; 
}