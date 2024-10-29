#include <iostream>
using namespace std; 

int main(){
	int base, altezza; 

	cout << "inserisci la base e l'altezza: "; 
	cin >> base >> altezza; 

	int area = (base * altezza) / 2; 

	cout << "area = " << area; 

	return 0; 
}