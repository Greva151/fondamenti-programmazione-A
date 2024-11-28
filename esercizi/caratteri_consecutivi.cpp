#include <iostream>
#define MAX 50
using namespace std; 


char* reduceConsecutives(char str[]){
  char* new_str = new char[MAX]; 
  int q = 0; 

  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] != str[i + 1])
      new_str[q++] = str[i];       
  }

  new_str[q] = '\0'; 

  return new_str; 
}


int main(){
  char str[MAX]; 
  cout << "Inserisci una stringa: "; 
  cin.getline(str, MAX); 

  while(cin.fail()){
    cin.clear(); 
    cin.ignore(); 
    cout << "Errore: inserimento stringa" << endl; 
    cout << "Inserisci una stringa: "; 
    cin.getline(str, MAX); 
  }

  char* new_str = reduceConsecutives(str); 
  cout << "New string: " << new_str << endl; 

  delete [] new_str;  
  
  return 0; 
}
