#include <iostream>
using namespace std; 

struct Node{
  int value; 
  Node* next;
}; 

void addNode(Node* &list, int value){
  if(list == nullptr){
    list = new Node; 
    list->value = value; 
    list->next = nullptr; 
  } else {
    Node* copy = list; 
    while(copy->next != nullptr)
      copy = copy->next; 
    copy->next = new Node; 
    copy->next->value = value; 
    copy->next->next = nullptr; 
  }
  return; 
}

void deleteList(Node* list){
  while(list != nullptr){
    Node* copy = list; 
    list = list->next; 
    delete copy; 
  }
  return; 
}

Node* crescente(Node* list){
  Node* copy = list; 
  Node* minore = list; 

  if(list == nullptr)
    return nullptr; 
  
  while(copy->next != nullptr){
    if(copy->value > copy->next->value)
       minore = copy->next; 
     copy = copy->next; 
  }
  
  return minore; 
}

void print(Node* list){
  while(list != nullptr){
    cout << list->value << " "; 
    list = list->next;  
  }
}

int main(){
  Node* list = nullptr; 
  int n; 
  
  do{
    cout << "inserisci un numero: "; 
    cin >> n; 
    
    if(n == -1){
      cout << "Arrivederci!!" << endl;
      break; 
    }

    addNode(list, n); 
  }while(true); 

  Node* minore = crescente(list); 

  print(minore); 

  deleteList(list); 

  return 0; 
}
