#include <iostream>
#define MAX 10
using namespace std; 

struct Node{
  int value; 
  Node* next; 
};

Node* ordinaLista(Node* list){
  Node* copy = list; 
  Node* pre; 

  return list; 
} 

Node* newList(int array[], int n){
  Node* list = new Node;
  Node* copy = list;    
  
  for(int i = 0; i < n; i++){
    copy->value = array[i]; 
    copy->next = new Node;
    copy = copy->next;    
  }

  return list;
}

void deleteList(Node* list){  
  while(list->next != nullptr){
      Node* pre = list; 
      list = list->next; 
      delete pre; 
  }
}

int main(){
  int numeri[MAX]; 

  for(int i = 0; i < MAX; i++){
    cout << "Inserisci l'elemento numero " << i << " dell'array: "; 
    cin >> numeri[i]; 
  }

  Node* list = newList(numeri, MAX); 
  Node* copy = list; 
  while(copy->next != nullptr){
    cout << copy->value << " " << copy->next << endl;
    copy = copy->next; 
  }

  deleteList(list); 

  return 0; 
}
