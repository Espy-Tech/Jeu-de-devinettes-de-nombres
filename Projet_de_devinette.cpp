#include<iostream>
#include<cstdlib>	//for srand et rand
#include<ctime>		//time

using namespace std;
int main() {
	
	srand(time(0));		//current time
	int nombreDevine = rand() % 101;	//in 0 to 100
	int nbrUser;
	int vie, choix;


	cout << "Salut bienvenue dans le jeu de devinette des nombres generer par l'ordinateur\nVeuillez selectioner une des options: " << endl;
	cout << "\n1. Niveau facile (10 vies)\n2. Intermediaire (5 vies)\n3. Dur (3 vies)\n";

	cout << "Choix: " ;
	cin >> choix;
	cout << "Devine le nombre: ";
	cin >> nbrUser;


	//choix de n avec switch
	switch (choix) {
	case 1: vie = 10;
		break;
	case 2: vie = 5;
		break;
	case 3: vie = 3;
		break;
	default:
		cout << "Niveau facile :" << endl;
		vie = 10;
		break;

	}
	int vieRestant = vie;	//initialisation de la vie restante

	for (int i = 1; i <=vie; i++) {

		if (nbrUser == nombreDevine) {
			cout << "Vous avez gagner !!";
			break;
		}

		vieRestant = vie - i; //compteur de vie 

		if (vieRestant == 0) {
			cout << "Le nombre etait " << nombreDevine << endl;
			break;
		}

		if(nbrUser!=nombreDevine){
			
			if ( nombreDevine>nbrUser ) {
				cout << "Le nombre est plus grand " << endl;
			}
			else {
				cout << "Le nombre est plus petit " << endl;
			}
			cout << "Il vous reste : " << vieRestant << " vie" << endl;

		
			cout << "Reessayer: ";
			cin >> nbrUser;
		}
		cout << endl;

	}
	

	return 0;
}
