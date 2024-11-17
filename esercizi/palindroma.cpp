#include <iostream>
#define MAX 100
using namespace std; 

int main(){
	char stringa[MAX] = {0};
	
	cout << "Inserisci una stringa (MAX 99): "; 
	cin.getline(stringa, 100); 
 
	int dim = 0; 
	while(stringa[dim++] != '\0'); 
	dim--; 

	bool flag = true; 
	for(int i = 0; i < dim; i++)
		if(stringa[i] != stringa[dim - i - 1])
			flag = false; 
		
	if(flag)
		cout << "La stringa e' palindroma" << endl;
	else
		cout << "La stringa non e' palindroma" << endl; 

	return 0; 
}