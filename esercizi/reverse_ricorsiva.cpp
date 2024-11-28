#include <iostream>
#include <cmath>
using namespace std; 

int reverse(int n){
  if(n < 10)
    return n; 
  else{
    int q = 0, c = n;
      
    while(c != 0){
      c /= 10; 
      q++; 
    }
    
    return (n % 10) * pow(10, q - 1) + reverse(n / 10);
  }
}


int main(){
  int n; 
  cout << "Inserisci un numero: "; 
  cin >> n; 

  cout << reverse(n) << endl; 

  return 0; 
}
