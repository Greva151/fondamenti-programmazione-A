#include <iostream>
#include <cstring>
#define MAX 100
using namespace std; 

int main(){
	char a[MAX] = {0}; 
	char b[MAX] = {0}; 

	cout << "Inserisci la prima stringa: "; 
	cin.getline(a, MAX); 

	cout << "Inserisci la seconda stringa: "; 
	cin.getline(b, MAX); 

	int dimA = strlen(a); 
	int dimB = strlen(b); 

	for(int i = 0; i < dimA; i++)
		for(int j = 0; j < dimB; j++)
			if(a[i] == b[j] && a[i + 1] == b[j + 1]){
				int q, c; 
				for(q = i, c = j; i < dimA && c < dimB && a[q] == b[c]; q++, c++)
					cout << a[q]; 

				i = q - 1; 
				j = c - 1; 

				cout << endl; 
			} 
	

	return 0; 
}