#include <iostream>
using namespace std; 

int main(){ 
	int lato, perimetro; 

	cout << "inserisci il lato del triangolo: "; 
	cin >> lato; 

	perimetro = lato * 4; 

	cout << "perimetro = " << perimetro << endl; 

	return 0; 
}