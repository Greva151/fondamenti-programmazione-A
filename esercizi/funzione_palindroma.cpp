#include <iostream>
#define MAX 100
#define MAX_CLEAR 5000
using namespace std; 


bool palindrome(char str[]){
	int n = 0; 
	while(str[n++] != '\0'); 
	n--; 

	for(int i = 0; i < n; i++)
		if(str[i] != str[n - i - 1])
			return false; 
	return true; 
}


int main(){
	char str[MAX]; 

	cout << "Inserisci una stringa: "; 
	cin.getline(str, MAX); 

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 

		cout << "Errore: stringa non accettata!!" << endl; 
		cout << "Inserisci una stringa: "; 
		cin.getline(str, MAX);	 
	}

	if(palindrome(str))
		cout << "La stringa e' palindroma" << endl; 
	else
		cout << "La stirnga non e' palidroma" << endl; 


	return 0; 
}