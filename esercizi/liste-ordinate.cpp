#include <iostream>
#define MAX 10
using namespace std; 

struct Node{
  int value; 
  Node* next; 
};

int lenOfList(Node* list){
  int counter = 0; 
  while(list->next != nullptr){
    list = list->next;
    counter++;  
  }
  return counter; 
}


Node* ordinaLista(Node* list){
  if(list == nullptr)
    return nullptr;
  else if(list->next == nullptr)
    return list;
  else{
    int n = lenOfList(list);  
    for(int i = 0; i < n; i++){ 
      Node* precedente = nullptr;   
      Node* cursor = list;  
      Node* next = list->next; 
 
      while(next->next != nullptr){
        if(cursor->value > next->value){
            if(precedente == nullptr)
              list = next;  
            cursor->next = next->next; 
            next->next = cursor;
            if(precedente != nullptr)
              precedente->next = next; 
            cursor = next; 
            next = cursor->next;  
        }  
        precedente = cursor; 
        cursor = cursor->next; 
        next = next->next; 
      }
    }
  }
    
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
  list = ordinaLista(list);  
  Node* copy = list; 
  while(copy->next != nullptr){
    cout << copy->value << " " << copy->next << endl;
    copy = copy->next; 
  }

  deleteList(list); 
  return 0; 
}
