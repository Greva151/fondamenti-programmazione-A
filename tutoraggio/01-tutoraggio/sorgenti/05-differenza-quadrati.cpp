#include <iostream>
using namespace std; 

int main(){
	int a, b; 

	cout << "inserisci a e b: "; 
	cin >> a >> b; 

	int differenza = a*a - b*b;

	cout << "differenza tra i due quadrati e' = " << differenza << endl; 

	return 0; 
}