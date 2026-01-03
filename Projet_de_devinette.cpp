#include <iostream>
#include <cstdlib>    // for srand et rand
#include <ctime>      // time

using namespace std;

int main() {
    srand(time(0));        // current time
    int nombreDevine = rand() % 101;    // in 0 to 100
    int nbrUser;
    int vie, choix;

    cout << "Salut bienvenue dans le jeu de devinette des nombres generer par l'ordinateur\nVeuillez selectioner une des options: " << endl;
    cout << "\n1. Niveau facile (10 vies)\n2. Intermediaire (5 vies)\n3. Dur (3 vies)\n";

    cout << "Choix: ";
    cin >> choix;

    // choix de n avec switch
    switch (choix) {
    case 1:
        vie = 10;
        break;
    case 2:
        vie = 5;
        break;
    case 3:
        vie = 3;
        break;
    default:
        cout << "Choix invalide. Niveau facile selectionne." << endl;
        vie = 10;
        break;
    }

    int vieRestant = vie;
    bool gagne = false;

    for (int i = 0; i < vie; i++) {
        cout << "\nDevine le nombre (vie " << i + 1 << "/" << vie << "): ";
        cin >> nbrUser;

        if (nbrUser == nombreDevine) {
            cout << "Vous avez gagne !!" << endl;
            gagne = true;
            break;
        }

        vieRestant = vie - (i + 1); // compteur de vie 

        if (nbrUser < nombreDevine) {
            cout << "Le nombre est plus grand" << endl;
        }
        else {
            cout << "Le nombre est plus petit" << endl;
        }

        if (vieRestant > 0) {
            cout << "Il vous reste : " << vieRestant << " vie(s)" << endl;
        }
    }

    if (!gagne) {
        cout << "\nVous avez perdu ! Le nombre etait " << nombreDevine << endl;
    }

    return 0;
}
