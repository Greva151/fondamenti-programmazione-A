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

void crescente(Node* list){
  while(list != nullptr){
    
  }

}

int main(){
  

  return 0; 
}
