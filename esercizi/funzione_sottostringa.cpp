#include <iostream>
#define MAX 50
#define MAX_CLEAR 5000
using namespace std; 

int countWords(char str[], char word[]){
	int counter = 0; 

	int word_len = 0; 
	while(word[word_len++]); 
	word_len--; 

	for(int i = 0; str[i] != '\0'; i++)
		for(int j = 0; word[j] != '\0'; j++)
			if(str[i] == word[j]){
				int equalsletters = 0; 
				for(int q = i, k = j; str[q] == word[k] && str[q] && word[k]; q++, k++)
					equalsletters++; 
					
				if(equalsletters == word_len)
					counter++; 
				break; 
			}
		
	return counter; 
}

int main(){
	char stringa1[MAX]; 
	char stringa2[MAX];

	cout << "Inserisci la prima stringa: "; 
	cin.getline(stringa1, MAX); 

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 
		cout << "Errore: inserimeno stringa" << endl; 

		cout << "Inserisci la prima stringa: "; 
		cin.getline(stringa1, MAX); 
	}

	cout << "Inserisci la seconda stringa: "; 
	cin.getline(stringa2, MAX); 

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 
		cout << "Errore: inserimeno stringa" << endl; 

		cout << "Inserisci la seconda stringa: "; 
		cin.getline(stringa2, MAX); 
	}

	cout << "la seconda stringa e' contenuta " << countWords(stringa1, stringa2) << " volte nella prima stringa" << endl; 


	return 0; 
}