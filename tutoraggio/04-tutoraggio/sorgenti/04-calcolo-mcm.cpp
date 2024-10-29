#include <iostream>
using namespace std; 

int main(){
	int a, b; 

	cout << "inserisci due numeri interi positivi: "; 
	cin >> a >> b;

	int i = 1; 

	while(true){
		if((a * i) % b == 0){
			cout << a * i << endl;
			break;  
		}
		i++; 
	}
	return 0; 
}