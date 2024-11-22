#include <iostream>
#define MAX 50
#define MAX_CLEAR 5000
using namespace std; 

struct DataNascita{
	int giorno; 
	int mese; 
	int anno; 
}; 

struct Persona{
	char nome[MAX];
	char cognome[MAX]; 
	DataNascita datanascita; 
	char codicefiscale[16]; 
};


int main(){
	char nome[MAX]; 
	char cognome[MAX]; 
	int anno; 
	int mese; 
	int giorno;  
	char codicefiscale[16];

	cout << "Inserisci il nome della persona: ";
	cin.getline(nome, MAX);

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 
		cout << "Errore: inserimento nome non valido" << endl; 
		cout << "Inserisci il nome della persona: "; 
		cin.getline(nome, MAX); 
	}

	cout << "Inserisci il cognome della persona: ";
	cin.getline(cognome, MAX);

	while(cin.fail()){
		cin.clear(); 
		cin.ignore(MAX_CLEAR, '\n'); 
		cout << "Errore: inserimento nome non valido" << endl; 
		cout << "Inserisci il cognome della persona: "; 
		cin.getline(cognome, MAX); 
	} 

	bool date_control = false; 
	do{
		cout << "Inserisci il giorno di nascita: "; 
		cin >> giorno; 
		cout << "Inserisci il mese di nascita: "; 
		cin >> mese; 
		cout << "Inserisci l'anno di nascita: "; 
		cin >> anno;

		if(anno > 2024 || anno < 1900)
			date_control = true;  
		else if(mese > 12 || mese < 1)
			date_control = true; 
		else if(giorno < 1 || giorno > 31)
			date_control = true; 
		else if(giorno > 30 && (mese == 4 || mese == 6 || mese || mese == 9 || mese == 11))
			date_control = true; 
		else if(giorno > 28 && mese == 2 && anno % 4 != 0 && anno % 100 != 0 && anno % 400 != 0)
			date_control = true; 

		if(date_control)
			cout << "Errore: data non valida!!" << endl; 
	}while(date_control);

	cin.ignore(MAX_CLEAR, '\n'); 

	bool code_fiscal = false; 
	do{
		cout << "Inserisci il codice fiscale: "; 
		cin.getline(codicefiscale, 17); 

		while(cin.fail()){
			cin.clear(); 
			cin.ignore(MAX_CLEAR, '\n'); 
			cout << "Errore: inserimento stringa errata"; 
			cout << "Inserisci il codice fiscale: "; 
			cin.getline(codicefiscale, 17);  
		}

		char copyCodeFiscal[16]; 
		int q = 0; 
		for(int i = 0; cognome[i] != '\0' && q < 3; i++)
			if(cognome[i] != 'A' && cognome[i] != 'E' && cognome[i] != 'I' && cognome[i] != 'O' && cognome[i] != 'U' && cognome[i] != 'a' && cognome[i] != 'e' && cognome[i] != 'i' && cognome[i] != 'o' && cognome[i] != 'u')
				copyCodeFiscal[q++] = cognome[i]; 
		if(q < 3)
			for(int i = 0; nome[i] != '\0' && q < 3; i++)
				if(cognome[i] == 'A' || cognome[i] == 'E' || cognome[i] == 'I' || cognome[i] == 'O' || cognome[i] == 'U' || cognome[i] == 'a' || cognome[i] == 'e' || cognome[i] == 'i' || cognome[i] == 'o' || cognome[i] == 'u')
					copyCodeFiscal[q++] = cognome[i]; 

		for(int i = 0; nome[i] != '\0' && q < 6; i++)
			if(nome[i] != 'A' && nome[i] != 'E' && nome[i] != 'I' && nome[i] != 'O' && nome[i] != 'U' && nome[i] != 'a' && nome[i] != 'e' && nome[i] != 'i' && nome[i] != 'o' && nome[i] != 'u')
				copyCodeFiscal[q++] = nome[i]; 
		if(q < 6)
			for(int i = 0; nome[i] != '\0' && q < 6; i++)
				if(nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U' || nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
					copyCodeFiscal[q++] = nome[i];

		cout << copyCodeFiscal << endl; 

	}while(code_fiscal); 

	return 0; 
}