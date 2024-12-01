#include <iostream> 
#define MAX 1000
using namespace std;

int main(){
  int n;
  int* array[MAX]; 
  int* malloc[MAX]; 
  int counter_malloc = 0; 
  int counter_array = 0; 
   
  do{
    cout << "Inserisci un numero: "; 
    cin >> n; 

    while(cin.fail()){
      cin.clear(); 
      cin.ignore(5000, '\0');
      cout << "Error: input numer" << endl; 
      cout << "Inserici un numero: "; 
      cin >> n; 
    }  
  
    if(n >= 0 && counter_malloc < MAX){
      bool is_found = false; 
      
      for(int i = 0; i < counter_malloc; i++)
        if(*(malloc[i]) == n){
          array[counter_array++] = malloc[i];   
          is_found = true;
          break; 
        }

      if(!is_found){
        malloc[counter_malloc] = new int; 
        *(malloc[counter_malloc]) = n;
        array[counter_array++] = malloc[counter_malloc++];  
      }     
    }
  }while(n >= 0 && counter_malloc < MAX); 

  cout << "Allocate " << counter_malloc << " variabili" << endl; 

  for(int i = 0; i < counter_array; i++)
    cout << *(array[i]) << " "; 
  cout << endl; 

  for(int i = 0; i < counter_malloc; i++)
    delete malloc[i]; 
  
  return 0;
}
