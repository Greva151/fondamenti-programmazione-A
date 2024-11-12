#include <iostream>
#define MAX 50
using namespace std; 

int main(){
	char stringa[MAX]; 

	cout << "inserisci una stringa: "; 
	cin.getline(stringa, MAX); 

	for(int i = 0; stringa[i] != '\0'; i++)
		if(stringa[i] == ' '){
			for(int j = i; j < MAX; j++)
				stringa[j] = stringa[j + 1]; 
			i--;
		}

	cout << "stringa senza spazi: " << stringa << endl; 
	
	return 0; 	
}