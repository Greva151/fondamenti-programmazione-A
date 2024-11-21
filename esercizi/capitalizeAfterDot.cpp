#include <iostream>
#define MAX 100
#define MAX_CLEAR 5000
using namespace std; 

void capitalizeAfterDot(char str[]){
	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == '.' && str[i + 2] >= 'a' && str[i + 2] <= 'z')
			str[i + 2] = str[i + 2] - 32; 
}


int main(){

	char str[MAX] = {0}; 
	cout << "Inserisci una stringa: "; 
	cin.getline(str, MAX); 

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 

		cout << "Errore: inserimento stringa" << endl; 
		cout << "Inserisci una stringa: "; 
		cin.getline(str, MAX); 
	}

	capitalizeAfterDot(str); 

	cout << "New string: " << str << endl; 

	return 0; 
}