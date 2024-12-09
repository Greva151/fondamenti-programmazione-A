#include <experimental/bits/fs_path.h>
#include <iostream>
#include <memory>
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
  if(index < 0 || index > countElement(list) - 1)
    return; 
  if(index == 0){
    Node* copy = list;
    list = list->next;  
    delete copy; 
  } 

}

int main(){
    
  
  return 0;
}
