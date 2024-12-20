#include <iostream>
#include <ostream>
#define MAX 51
#define MAX_PRODOTTI 100
using namespace std; 


struct Prodotto{
  int id; 
  char nome_prodotto[MAX];
  float prezzo_unitario; 
  int quantita; 
}; 


void inserisciProdotto(Prodotto prodotti[], int &indice){
  if(indice < MAX_PRODOTTI){
    prodotti[indice].id = indice; 
    
    cin.ignore(); 
    cout << "Inserisci il nome del prodotto: "; 
    cin.getline(prodotti[indice].nome_prodotto, MAX); 

    while(cin.fail()){
      cin.clear(); 
      cin.ignore();
      cout << "Errore: stringa non valida" << endl; 
      cout << "Inserisci il nome del prodotto: " << endl; 
      cin.getline(prodotti[indice].nome_prodotto, MAX); 
    }

    cout << "Inserisci il prezzo unitario del prodotto: "; 
    cin >> prodotti[indice].prezzo_unitario; 
    cin.ignore(); 

    cout << "Inserisci la quantita': "; 
    cin >> prodotti[indice].quantita;
    cin.ignore();
    indice++;
    cout << "Nuovo prodotto aggiunto!" << endl;
  }
  else 
    cout << "Errore: numero massimo di prodotti inserito!!" << endl;  
}


void stampaInventario(Prodotto singolo_prodotto){
  cout << "Indice: " << singolo_prodotto.id << endl;
  cout << "Nome: " << singolo_prodotto.nome_prodotto << endl;
  cout << "Prezzo: " << singolo_prodotto.prezzo_unitario << endl; 
  cout << "Quantita': " << singolo_prodotto.quantita << endl; 
  cout << endl; 
}


float calcolaValoreTotale(Prodotto prodotti[], int indice){
  float somma = 0; 

  for(int i = 0; i < indice; i++)
    somma += prodotti[i].prezzo_unitario * prodotti[i].quantita; 
  
  return somma;
}


Prodotto* cercaProdotto(Prodotto prodotti[], int max, int indice){
  if(indice < max && indice >= 0)
    return &prodotti[indice]; 
  return nullptr;  
}


void modificaProdotto(Prodotto* prodotto_modifica){
  cout << "Inserisci il nuovo nome:"; 
  cin.getline((*prodotto_modifica).nome_prodotto, MAX);

  while(cin.fail()){
    cin.clear(); 
    cin.ignore(); 
    cout << "Errore: inserimento stringa" << endl;
    cout << "Inserisci il nuovo nome: "; 
    cin.getline((*prodotto_modifica).nome_prodotto, MAX); 
  }

  cout << "Inserisci il nuovo prezzo: "; 
  cin >> (*prodotto_modifica).prezzo_unitario;
  cin.ignore();  
  
  cout << "Inserisci il numero di prodotti: "; 
  cin >> (*prodotto_modifica).quantita;
  cin.ignore();  
}


int main(){
  Prodotto prodotti[MAX_PRODOTTI];   
  int couter_prodotti = 0;
  int scelta; 
  
  do{
    do{
      cout << "*** Inventario ***" << endl; 
      cout << "\t 1 - Inserisci prodotto" << endl; 
      cout << "\t 2 - Stampa prodotto" << endl;
      cout << "\t 3 - Calcola il valore totale" << endl;
      cout << "\t 4 - Cerca prodotto" << endl;
      cout << "\t 5 - Aggiorna prodotto" << endl;   
      cout << "\t -1 - Exit" << endl;      
      cin >> scelta; 

      if(scelta > 5 || scelta < -1 || scelta == 0)
        cout << "Errore: scelta non consentita!!!" << endl; 
    }while(scelta > 5 || scelta < -1 || scelta == 0); 
    
    if(scelta == 1)
      inserisciProdotto(prodotti, couter_prodotti);
    else if(scelta == 2)
      for(int i = 0; i < couter_prodotti; i++)
        stampaInventario(prodotti[i]); 
    else if(scelta == 3)
      cout << "Il valore totale dell'inventario e': " <<  calcolaValoreTotale(prodotti, couter_prodotti) << endl; 
    else if(scelta == 4){
      int id; 
      cout << "Inserisci l'ID da cercare: " << endl; 
      cin >> id; 
      cin.ignore();
      Prodotto* p = cercaProdotto(prodotti, couter_prodotti, id);

      if(p == nullptr)
        cout << "Non e' stato trovare l'elemento" << endl; 
      else
        stampaInventario(*p);  
    }
    else if(scelta == 5){
      int id; 
      
      do{
        cout << "Inserisci l'id da modificare: "; 
        cin >> id; 
      }while(id < 0 || id >= couter_prodotti);

      modificaProdotto(&prodotti[id]);
                 
    }
        
  }while(scelta != -1); 

  return 0; 
}
