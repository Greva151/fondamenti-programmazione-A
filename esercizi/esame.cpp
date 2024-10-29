#include <iostream>
using namespace std; 

int main(){
	int voto;

	cout << "inserisci il voto: "; 
	cin >> voto; 

	if(voto <= 10)
		cout << "gravemente insufficente" << endl; 
	else if(voto <= 17)
		cout << "insufficente" << endl; 
	else if(voto <= 24)
		cout << "sufficente" << endl; 
	else if(voto <= 27)
		cout << "buono" << endl; 
	else
		cout << "ottimo" << endl; 
	
	return 0; 
}