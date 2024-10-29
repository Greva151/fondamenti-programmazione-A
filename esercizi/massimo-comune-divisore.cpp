#include <iostream>
using namespace std; 

int main(){
	int a, b;
	int mcd; 

	cout << "inserisci due numeri: " << endl; 
	cin >> a >> b; 

	if(b == 0)
		mcd = a; 
	else{
		int r = 1; 

		while(r != 0){
			r = a % b; 
			a = b; 
			b = r; 
		}
		mcd = a; 
	}

	cout << "MCD = " << mcd << endl; 


	return 0; 
}