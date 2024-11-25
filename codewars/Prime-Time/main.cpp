#include <vector>
using namespace std; 

std::vector<unsigned> prime(unsigned n){
  vector<unsigned> lista;

  for(unsigned i = 0; i < n; i++){
    bool is_prime = true; 
    for(unsigned q = 2; q < i; i++)
      if(i % q == 0)
        bool is_prime = false; 
    if(is_prime)
      lista.push_back(i); 
  }

   
  return lista; 
}
