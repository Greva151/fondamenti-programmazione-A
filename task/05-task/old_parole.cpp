#include <iostream>
#define MAX 100
using namespace std; 

int main(){
	char a[MAX] = {0};

	do{ 
		char b[MAX] = {0}; 

		cout << "Inserisci la prima parola: ";
		cin >> a;

		if(a[0] != '$'){
			cout << "Inserisci la seconda parola: "; 
			cin >> b;

			int coutA = 0; 
			int coutB = 0; 

			while(a[coutA++] != '\0');
			coutA--; 

			while(b[coutB++] != '\0'); 
			coutB--; 

			for(int i = 0; i < coutA; i++)
				for(int j = 0; j < coutB; j++)
					if(a[i] == b[j]){
						b[j] = 0; 
						break; 
					}

			int size_ofzero = 0; 
			for(int i = 0; i < coutB; i++)
				if(b[i] == 0)
					size_ofzero++; 

			if(size_ofzero == coutB && size_ofzero == coutA)
				cout << "Le due parole sono anagrammi" << endl; 
			else if(size_ofzero == 0)
				cout << "Le due parole non hanno lettere in comune" << endl; 	

			cout << endl;  
		}
		else
			cout << "Addio!" << endl;
	}while(a[0] != '$'); 

	return 0; 
}