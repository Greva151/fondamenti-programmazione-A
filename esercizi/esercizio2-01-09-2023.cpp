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
    char str[] = "Hello"; 
    cout << revert(str) << endl; 
    return 0; 
}