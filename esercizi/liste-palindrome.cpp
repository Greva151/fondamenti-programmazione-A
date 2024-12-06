#include <clocale>
#include <iostream>
using namespace std; 

struct Node {
  int value; 
  Node* next;
};

int lenList(Node* list){
  int counter = 0; 
  while(list != nullptr){
    list = list->next; 
    counter++; 
  }
  return counter; 
}


bool palindrome(Node* list){
  int n = lenList(list);  
  int* array = new int[n]; 
  int q = 0; 

  while(list != nullptr){
    array[q] = list->value; 
    list = list->next; 
    q++; 
  }

  for(int i = 0; i < n; i++)
    if(array[i] != array[n - i - 1])
      return false; 

  return true;
}

void addNode(Node* &list, int value){
  if(list == nullptr){
    list = new Node; 
    list->value = value; 
    list->next = nullptr;
  }
  else{
    Node* copy = list; 
    while(copy->next != nullptr)
      copy = copy->next;
    copy->next = new Node; 
    copy->next->value = value; 
    copy->next->next = nullptr;
  }
}

void deleteList(Node* list){
  Node* copy = nullptr; 
  while(list != nullptr){
    copy = list->next;
    delete list; 
    list = copy;  
  }
}

int main(){
  Node* list = nullptr; 
    
  addNode(list, 1);
  addNode(list, 2);
  addNode(list, 3);
  addNode(list, 4); 
  addNode(list, 3); 
  addNode(list, 2); 
  addNode(list, 1); 

  cout << "list1: " << palindrome(list) << endl; 
  deleteList(list); 

  Node* newList = nullptr;
  
  addNode(newList, 1); 
  addNode(newList, 2); 
  addNode(newList, 3); 
  addNode(newList, 4); 
  addNode(newList, 5); 

  cout << "list2: " << palindrome(newList) << endl; 
  deleteList(newList);
  
  return 0; 
}
