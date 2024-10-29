#include <iostream>
using namespace std; 

int main(){
	char a, b, c; 

	cout << "inserisci tre caratteri: " << endl; 
	cin >> a >> b >> c; 

	if(a < 'a' || a > 'z')
		a = '?'; 
	else{
		if(a + 13 > 'z')
			a -= 13; 
		else 
			a += 13;  
	}

	if(b < 'a' || b > 'z')
		b = '?'; 
	else{
		if(b + 13 > 'z')
			b -= 13; 
		else 
			b += 13;  
	}

	if(c < 'a' || c > 'z')
		c = '?'; 
	else{
		if(c + 13 > 'z')
			c -= 13; 
		else 
			c += 13;  
	}

	cout << a << " " << b << " " << c << endl; 

	return 0; 
}