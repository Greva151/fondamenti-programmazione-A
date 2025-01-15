#include <iostream>
using namespace std;

int sottosequenze(int arr[], int dimensione, int k){
    int nsottosequenze = 0;

    for(int i = 0; i < dimensione - 1; i++){
        int somma = 0; 
        for(int j = i; j < dimensione; j++){
            somma += arr[j]; 
            if(somma == k)
                nsottosequenze++;
        } 
    }

    return nsottosequenze; 
}

int main() {
    int arr[] = {1, 2, -3, 7, -1, 4, 3};
    int dimensione = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int risultato = sottosequenze(arr, dimensione, k);
    cout << "Numero di sottosequenze con somma " << k << ": " << risultato << endl;

    return 0;
}
