#include <iostream>
#define MAX 1000
using namespace std; 

struct Element {
  int value; 
  int* pointer; 
}; 

int* addElement(Element elementi[], int& counter_elementi, int n){
  elementi[counter_elementi].value = n;
  elementi[counter_elementi].pointer = new int;
  *(elementi[counter_elementi].pointer) = n;  
  return elementi[counter_elementi++].pointer;  
}

int main(){
  Element elementi[MAX]; 
  int* A[MAX];
  int n; 
  int counter_elementi = 0;
  int counter_a = 0;  
  
  do{
    cout << "Inserire un numero: "; 
    cin >> n; 

    if(n != -1){
      bool is_found = true; 
    
      for(int i = 0; i < counter_elementi; i++)
        if(elementi[i].value == n){
          A[counter_a++] = elementi[i].pointer;
          is_found = false; 
        } 

      if(is_found)
        A[counter_a++] = addElement(elementi, counter_elementi, n);    
    }   
  }while(n != -1 && counter_a < MAX && counter_elementi < MAX);

  cout << "Allocate " << counter_elementi << " variabili" << endl;

  for(int i = 0; i < counter_a; i++)
    cout << *A[i] << " ";  
  cout << endl; 

  for(int i = 0; i < counter_elementi; i++) 
    delete elementi[i].pointer;    

  return 0; 
}
