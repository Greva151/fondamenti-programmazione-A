#include <iostream>
#define MAX 50
using namespace std; 

int main(){
	char stringa[MAX]; 

	cout << "Inserisci una stringa: "; 
	cin.getline(stringa, MAX); 

	int couter = 0; 

	for(int i = 0; stringa[i] != '\0'; i++)
		if(stringa[i] == ' ' && stringa[i - 1] != ' ' && (i - 1) > 0 && stringa[i + 1] != '\0')
			couter++; 

	cout << "Il numero di parole della stringa e': " << couter << endl; 

	return 0; 
}