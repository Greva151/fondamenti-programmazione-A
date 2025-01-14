#include <iostream>
using namespace std; 

int main(){
    int* a = new int[1000];
    int counter = 0; 
    int q;

    do{
        cout << "Inserisci un numero: "; 
        cin >> q; 
        
        while(cin.fail()){
            cin.ignore(); 
            cin.clear(); 
            cout << "Errore: numero non valido" << endl; 
            cout << "Inserisci un numero: "; 
            cin >> q; 
        }

        if(q >= 0){
            a[counter] = q; 
            counter++; 
        }
    }while(q >= 0); 

    for(int i = 0; i < counter; i++)
        cout << a[i] << " "; 
    cout << endl; 

    int* b = new int[1000]; 
    int counterB = 0; 

    for(int i = 0; i < counter; i++){
        int c = 0; 
        for(int y = 0; y < counter; y++)
            if(a[i] == a[y])
                c++; 
        if(c == 1){
            b[counterB] = a[i]; 
            counterB++; 
        }
    }
    
    for(int i = 0; i < counterB; i++)
        cout << b[i] << " "; 
    cout << endl; 

    delete [] a; 
    delete [] b; 

    return 0;
}