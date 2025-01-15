#include <iostream>
#include <cstring>
using namespace std; 

char* revert(char str[]){
    int dimensione = strlen(str);
    char* revertStr = new char[dimensione + 1]; 
    for(int i = 0; i < dimensione; i++)
        revertStr[i] = str[dimensione - i - 1]; 
    revertStr[dimensione] = '\0'; 

    return revertStr; 
}


int main(){
    char str[50]; 

    cout << "Inserisci una stringa: "; 
    cin.getline(str, 50);

    if(cin.fail())
        return -1; 
    else
        cout << revert(str) << endl; 
    return 0; 
}