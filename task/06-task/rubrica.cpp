#include <iostream>
#include <cstring>
#define MAX_CONTATTI 100
#define MAX 50
#define MAX_CLEAR 5000
using namespace std; 

struct Contatto {
	char nome[MAX]; 
	char cognome[MAX]; 
	char telefono[11]; 
}; 

int main(){
	int numero_contatti = 0; 
	Contatto contatti[MAX_CONTATTI]; 

	cout << "*** Rubrica ***" << endl;

	do{
		int scelta; 

		do{ 
			cout << "\t1 - Visualizza rubrica" << endl;
			cout << "\t2 - Inserisci contatto" << endl; 
			cout << "\t3 - Cancella contatto" << endl; 
			cout << "\t4 - Esci" << endl; 
			cin >> scelta; 

			if(scelta < 1 || scelta > 4)
				cout << "Errore: scelta non disponibile" << endl; 
		}while(scelta < 1 || scelta > 4); 

		if(scelta == 1){
			if(numero_contatti == 0)
				cout << "Rubrica vuota!" << endl; 
			else
				for(int i = 0; i < numero_contatti; i++)
					cout << contatti[i].nome << " " << contatti[i].cognome << " " << contatti[i].telefono << endl; 

		} else if(scelta == 2){
			if(numero_contatti < MAX_CONTATTI){
				char nome[MAX]; 
				char cognome[MAX];
				char telefono[11]; 

				cin.ignore(MAX_CLEAR, '\n'); 
				cout << "Inserisci il nome del contatto da aggiungere: "; 
				cin.getline(nome, MAX); 

				while(cin.fail()){
					cin.clear(); 
					cin.ignore(MAX_CLEAR, '\n'); 
					cout << "Errore: inserimento nome" << endl; 
					cout << "Inserisci il nome del contatto da aggiungere: "; 
					cin.getline(nome, MAX); 
				}

				cout << "Inserisci il cognome del contatto da aggiungere: "; 
				cin.getline(cognome, MAX); 

				while(cin.fail()){
					cin.clear(); 
					cin.ignore(MAX_CLEAR, '\n'); 
					cout << "Errore: inserimento cognome" << endl; 
					cout << "Inserisci il cognome del contatto da aggiungere: "; 
					cin.getline(cognome, MAX); 
				}

				cout << "Inserisci il numero del contatto da aggiungere: "; 
				cin.getline(telefono, 11); 

				bool is_valid = false;
				for(int i = 0; telefono[i] != '\0'; i++)
					if(telefono[i] < '0' || telefono[i] > '9'){
						is_valid = true; 
						break; 							
					} 

				while(cin.fail() || is_valid){
					is_valid = false; 
					if(cin.fail()){
						cin.clear();
						cin.ignore(MAX_CLEAR, '\n'); 
					}
					cout << "Errore: inserimento numero" << endl; 
					cout << "Inserisci il numero del contatto da aggiungere: "; 
					cin.getline(telefono, 11); 

					for(int i = 0; telefono[i] != '\0'; i++)
						if(telefono[i] < '0' || telefono[i] > '9'){
							is_valid = true; 
							break; 							
						} 
				}

				strncpy(contatti[numero_contatti].nome, nome, MAX); 
				strncpy(contatti[numero_contatti].cognome, cognome, MAX); 
				strncpy(contatti[numero_contatti].telefono, telefono, 11); 
				numero_contatti++; 
				cout << endl << "Contatto aggiunto!" << endl; 
			} else
				cout << "Errore: numero massimo di contatti raggiunto!" << endl; 

		} else if(scelta == 3){
			char nome[MAX]; 
			char cognome[MAX]; 

			cin.ignore(MAX_CLEAR, '\n'); 
			cout << "Inserisci il nome del contatto da cancellare: "; 
			cin.getline(nome, MAX); 

			while(cin.fail()){
				cin.clear(); 
				cin.ignore(MAX_CLEAR, '\n'); 
				cout << "Errore: inserimento nome" << endl; 
				cout << "Inserisci il nome del contatto da cancellare: "; 
				cin.getline(nome, MAX); 
			}

			cout << "Inserisci il cognome del contatto da cancellare: "; 
			cin.getline(cognome, MAX); 

			while(cin.fail()){
				cin.clear(); 
				cin.ignore(MAX_CLEAR, '\n'); 
				cout << "Errore: inserimento cognome" << endl; 
				cout << "Inserisci il cognome del contatto da cancellare: "; 
				cin.getline(cognome, MAX); 
			}

			bool is_found = true; 
			for(int i = 0; i < numero_contatti; i++)
				if(strncmp(contatti[i].nome, nome, MAX) == 0 && strncmp(contatti[i].cognome, cognome, MAX) == 0){
					for(int q = i; q < numero_contatti - 1; q++){
						strncpy(contatti[q].nome, contatti[q + 1].nome, MAX);
						strncpy(contatti[q].cognome, contatti[q + 1].cognome, MAX);
						strncpy(contatti[q].telefono, contatti[q + 1].telefono, 11); 
					}
					i--; 
					numero_contatti--;
					is_found = false; 
					cout << "Contatto cancellato!" << endl;
				}
			if(is_found)
				cout << "Warning: nessuna persona trovata!" << endl;  
		} else{
			cout << "Addio!" << endl; 
			break; 
		}
	}while(true); 

	return 0; 
}