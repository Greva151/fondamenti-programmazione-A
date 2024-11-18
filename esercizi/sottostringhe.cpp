#include <iostream>
#define MAX 100
using namespace std; 

int main(){
	char str1[MAX]; 
	char str2[MAX]; 

	cout << "Inserisci la prima stringa: "; 
	cin.getline(str1, MAX); 

	cout << "Inserisci la seconda stringa: "; 
	cin.getline(str2, MAX); 

	int dim1 = 0; 
	while(str1[dim1++] != '\0'); 
	dim1--; 

	int dim2 = 0; 
	while(str2[dim2++] != '\0'); 
	dim2--; 

	int couter = 0; 

	for(int i = 0; i < dim1; i++)
		for(int j = 0; j < dim2; j++)
			if(str1[i] == str2[j]){ 
				couter = 1; 
				for(int q = i + 1, k = j + 1; q < dim1 + 1 && k < dim2 + 1;){
					if(str1[q++] == str2[k++])
						couter++; 
					else{
						if(couter == dim1 || couter == dim2){
							i = dim1; 
							j = dim2; 
						}
						break; 
					}
				}
			}

	if(dim1 > dim2){
		if(dim2 == couter)
			cout << "La seconda stringa e' la sottostringa della prima" << endl; 
	}
	else if(dim2 > dim1){
		if(dim1 == couter)
			cout << "La prima stringa e' contenuta della seconda" << endl; 
	}
	else if(dim2 == couter)
		cout << "Le due stringhe sono uguali" << endl; 

	return 0;
}