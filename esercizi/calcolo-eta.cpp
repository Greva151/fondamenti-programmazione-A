#include <iostream>
using namespace std; 

int main(){
    float annoNascita; 
    float eta; 

    cout << "Inserisci il tuo anno di nascita: "; 
    cin >> annoNascita; 

    eta = 2024 - annoNascita; 

    cout << "Hai " << eta << " anni" << endl;  

    return 0; 
}