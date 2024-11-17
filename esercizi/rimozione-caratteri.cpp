#include <iostream>
#define MAX 100
using namespace std; 

int main(){
	char str[MAX] = {0}; 
	char c; 

	cout << "Inserisci una stringa (MAX 99): "; 
	cin.getline(str, 100); 

	cout << "Inserisci un carattere: "; 
	cin >> c; 

	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == c)
			for(int j = i; str[j] != '\0'; j++)
				str[j] = str[j + 1]; 

	cout << "stringa senza il carattere '" << c << "': " << str << endl; 

	return 0; 
}