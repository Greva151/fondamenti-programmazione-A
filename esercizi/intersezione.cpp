#include <iostream>
using namespace std; 

struct Node{
    int value; 
    Node* next; 
};

int getLenOfList(){
    int n;
    cout << "Inserisci la dimensione della lista: "; 
    cin >> n; 

    while(cin.fail()){
        cin.clear(); 
        cin.ignore(); 
        cout << "Inserisci la dimensione della lista: "; 
        cin >> n; 
    }

    return n; 
}

int getNumber(){
    int n;
    cout << "Inserisci un numero: "; 
    cin >> n; 

    while(cin.fail()){
        cin.clear(); 
        cin.ignore(); 
        cout << "Inserisci un numero: ";
        cin >> n; 
    }

    return n; 
}

void addNode(Node* &list, int n){
    if(list == nullptr){
        list = new Node; 
        list->value = n; 
        list->next = nullptr; 
    } else {
        Node* copy = list; 
        while(copy->next != nullptr)
            copy = copy->next; 
        copy->next = new Node; 
        copy->next->value = n; 
        copy->next->next = nullptr; 
    }
}

void getList(Node* &list, int lenOfList){
    for(int i = 0; i < lenOfList; i++){
        int n = getNumber();
        addNode(list, n);  
    }
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

Node* intersezione(Node* firstlist){
    Node* endlist = nullptr; 
    if(firstlist != nullptr){
        addNode(endlist, firstlist->value); 
        while(firstlist->next->next != nullptr){
            addNode(endlist, firstlist->value + firstlist->next->next->value);
            firstlist = firstlist->next;  
        }
        addNode(endlist, firstlist->next->value); 
    }
    
    return endlist; 
}

int main(){
    Node* firstList = nullptr;
    int dimensione = getLenOfList(); 
    getList(firstList, dimensione); 
    printList(firstList);
    Node* inter =  intersezione(firstList); 
    printList(inter);  
    deleteList(firstList); 
    deleteList(inter); 
    return 0; 
}