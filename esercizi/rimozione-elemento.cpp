#include <iostream>
#include <ostream>
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
}

void deleteList(Node* list){
  while(list != nullptr){
    Node* copy = list->next; 
    delete list; 
    list = copy; 
  }
}

int countElement(Node* list){
  int counter = 0; 
  while(list->next != nullptr){
    counter++; 
    list = list->next;   
  }
  return counter; 
}

void deleteIndex(Node* &list, int index){ 
  if(index < 0 || index > countElement(list))
    return; 
  if(index == 0){
    Node* copy = list;
    list = list->next;  
    delete copy; 
  } else {
    int counter = 0; 
    Node* copy = list;
    Node* pre = list;  
    while(counter != index){
      counter++; 
      pre = copy; 
      copy = copy->next; 
    }
    pre->next = copy->next; 
    delete copy; 
  }
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
   cout << "inserisci un elemento: "; 
   cin >> n;
   if(n != -1)
     addNode(list, n); 
  }while(n != -1);  

  cout << "indice dell'elemento che vuoi elimanare: "; 
  cin >> n; 
  deleteIndex(list, n); 

  print(list); 
  
  deleteList(list); 
  
  return 0;
}
