#include <iostream>
using namespace std; 

int main(){
	char carattere; 
	cin >> carattere;
	carattere &= 0xDF; 
	cout << carattere << endl; 
	return 0; 
}