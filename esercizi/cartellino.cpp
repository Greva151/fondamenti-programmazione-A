#include <iostream> 
using namespace std; 

int main(){
	float prezzo; 
	int sconto; 
	float finale; 

	cout << "Inserisci i dati: \n" << endl; 
	cout << "Prezzo: "; 
	cin >> prezzo;
	cout << "Sconto: "; 
	cin >> sconto; 

	cout << "Cartellino: " << endl; 
	cout << "Prezzo: " << prezzo << endl; 
	cout << "Sconto applicato " << sconto << "%" << endl; 

	finale = prezzo - ( prezzo * sconto ) / 100;  
	cout << "Prezzo finale: " << finale << endl; 

	return 0;
}
