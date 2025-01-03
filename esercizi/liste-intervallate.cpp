#include <iostream>
using namespace std; 

struct Node{
    int value; 
    Node* next; 
}; 

int getLenList(){
    int lenList; 
    cout << "Inserisci la dimensione della lista: "; 
    cin >> lenList; 

    while(cin.fail()){
        cin.clear(); 
        cin.ignore();
        cout << "Errore: numero non valido!!" << endl;  
        cout << "Inserisci il numero di elementi della prima lista: "; 
        cin >> lenList;
    }  

    return lenList; 
}

void addNode(Node* &list, int value){
    if(list == nullptr){
        list = new Node; 
        list->value = value; 
        list->next = nullptr;
    } else {
        Node* index = list; 
        while(index->next != nullptr)
            index = index->next;
        index->next = new Node; 
        index->next->value = value; 
        index->next->next = nullptr; 
    }
}

void deleteList(Node* list){
    while(list != nullptr){
        Node* copy = list; 
        list = list->next; 
        delete copy; 
    }
}

void getList(Node* &list, int len){
    for(int i = 0; i < len; i++){
        int n; 
        cout << "Inserisci un numero: "; 
        cin >> n; 
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

int lenList(Node* list){
    int counter = 0; 
    while(list != nullptr){
        list = list->next;
        counter++;  
    }
    return counter; 
}

Node* listeConcatenate(Node* firstList, Node* secondList){
    if(firstList == nullptr && secondList == nullptr)
        return nullptr; 
    else{
        Node* newList = nullptr; 

        while(firstList != nullptr || secondList != nullptr){
            if(firstList != nullptr){
                addNode(newList, firstList->value); 
                firstList = firstList->next; 
            }
            if(secondList != nullptr){
                addNode(newList, secondList->value); 
                secondList = secondList->next; 
            }
        }
        return newList; 
    }
}

int main(){
    Node* firstList = nullptr;
    Node* secondList = nullptr;  

    int lenFirstList = getLenList(); 
    getList(firstList, lenFirstList); 

    int lenSecondList = getLenList(); 
    getList(secondList, lenSecondList); 

    cout << "Prima lista: "; 
    printList(firstList); 
    cout << "Seconda lista: "; 
    printList(secondList); 

    Node* listaIntervallata = listeConcatenate(firstList, secondList); 
    cout << "Lista intervallata: "; 
    printList(listaIntervallata); 

    deleteList(firstList); 
    deleteList(secondList); 
    deleteList(listaIntervallata); 

    return 0; 
}