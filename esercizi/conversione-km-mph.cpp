#include <iostream>
using namespace std; 

int main(){
    float km; 
    float mph; 

    cout << "Distanza in km: "; 
    cin >> km; 

    mph = km * 0.621371; 

    cout << "Dinstaza in mhp: " << mph << endl;  

    return 0; 
}