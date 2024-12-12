#include <iostream>
#include <cstring>
#define MAX 100
using namespace std; 

char* longestWord(char str[]){
  const int dim = strlen(str); 
  char* newstring = new char[dim];
  int max = 0; 
  int counter = 0;
  int q = -1;  

  for(int i = 0; i < dim + 1; i++){
    if(str[i] != ' ' && str[i] != '\0')
      counter++; 
    else{ 
      if(counter > max){
        max = counter; 
        q = i;  
      } 
      counter = 0; 
    }
  }

  if(q != -1){
    int k = 0; 
    for(int i = q - max; i < q; i++)
      newstring[k++] = str[i];
    newstring[k] = '\0';
  }
  else
    return nullptr; 
  
  return newstring; 
}


int main(){
  char str[MAX]; 

  cout << "Inserisci la stringa: "; 
  cin.getline(str, MAX); 

  while(cin.fail()){
      cin.clear(); 
      cin.ignore(MAX, '\n');  
      cout << "Errore: inserimento stringa" << endl; 
      cout << "Inserisci la stringa: ";
      cin.getline(str, MAX);  
  }
 
  cout << "La parola piu' lunga e': " << longestWord(str) << endl;
  
  return 0; 
}
