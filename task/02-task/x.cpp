#include <iostream>
using namespace std; 

int main(){
    int n; 

    do{
        cout << "Inserire un valore (> 0): "; 
        cin >> n; 
        
        if(n < 0 || n % 2 != 1)
            cout << "Input errato" << endl; 

    } while(n < 0 || n % 2 != 1);    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i || j + i == n - 1)
                cout << "*"; 
            else 
                cout << " "; 
        }
        cout << endl; 
    }

    return 0; 
}
