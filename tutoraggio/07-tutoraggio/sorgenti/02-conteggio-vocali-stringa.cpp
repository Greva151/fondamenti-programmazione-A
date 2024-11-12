#include <iostream>
using namespace std; 
#define MAX 50

int main(){

	char stringa[MAX] = {0};

	cout << "Inserisci una stringa: "; 
	cin.getline(stringa, MAX); 

	int couter = 0; 

	for(int i = 0; i < MAX; i++)
		if(stringa[i] == 'A' || stringa[i] == 'E' || stringa[i] == 'I' || stringa[i] == 'O' || stringa[i] == 'U' || stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u')
			couter++; 

	cout << "il numero delle vocali presenti e': " << couter << endl; 
 
	return 0; 	
}