#include <iostream>
using namespace std; 

int main(){
	float x;
	cout << "inserisci un numero reale" << endl;  
	cin >> x;
 
	float quadrato = x * x; 
	cout << "area del quadrato " << quadrato << endl;
 
	float perimetro = x * 4; 
	cout << "perimetro del quadrato " << perimetro << endl;
 
	float circonferenza = 2 * x * 3.14; 
	cout << "circonferenza del cerchio " << circonferenza << endl;
 
	float areacerchio = 3.14 * x * x; 
	cout << "area del cerchio " << areacerchio << endl;

	return 0;
}
