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
}

Node* maggioriZero(Node* list){
    Node* newNode = nullptr; 
    while(list != nullptr){
        if(list->value > 0)
            addNode(newNode, list->value); 
        list = list->next; 
    }
    return newNode;  
}

void printList(Node* list){
    while(list != nullptr){
        cout << list->value << " "; 
        list = list->next; 
    }
    cout << endl; 
}

void deleteList(Node* list){ 
    while(list != nullptr){
        Node* copy = list;
        list = list->next; 
        delete copy;  
    }
}

int main(){
    Node* listaNumeri = nullptr;
    addNode(listaNumeri, 1);
    addNode(listaNumeri, 7); 
    addNode(listaNumeri, -2);  
    addNode(listaNumeri, 1); 
    addNode(listaNumeri, -3); 
    addNode(listaNumeri, 5);
    printList(listaNumeri); 

    Node* lista_numeri_maggiori = maggioriZero(listaNumeri);
    printList(lista_numeri_maggiori); 

    deleteList(listaNumeri); 
    deleteList(lista_numeri_maggiori);  
    return 0; 
}