
## 🎮 Description
Un jeu de devinette en C++ où l'ordinateur génère un nombre aléatoire entre 0 et 100, et le joueur doit le trouver en un nombre limité de tentatives. Le jeu propose trois niveaux de difficulté avec différents nombres de vies.

## ✨ Fonctionnalités
- **🎯 Génération aléatoire** : Nombre mystère généré aléatoirement entre 0 et 100
- **📊 Trois niveaux de difficulté** :
  - Facile : 10 tentatives
  - Moyen : 5 tentatives
  - Difficile : 3 tentatives
- **💡 Indices intelligents** : \"Plus grand\" ou \"Plus petit\" après chaque tentative
- **❤️ Gestion des vies** : Affichage du nombre de tentatives restantes
- **🏆 Fin de partie** : Message de victoire/défaite avec révélation du nombre

## 🛠️ Technologies
- **Langage** : C++
- **Bibliothèques** : `<iostream>`, `<cstdlib>`, `<ctime>`
- **Compilation** : Compatible avec tous les compilateurs C++ (g++, clang++, MSVC)

## 🚀 Installation et Exécution

\`\`\`bash
## 📍 URL du Projet
**Lien GitHub** : https://github.com/Espy-Tech
https://roadmap.sh/projects/number-guessing-game
# 2. Compiler le programme
g++ -o devine-le-nombre Projet_de_devinette.cpp

# 3. Exécuter
./devine-le-nombre
\`\`\`

## 🎯 Comment Jouer
1. Lancez le programme
2. Choisissez un niveau de difficulté (1, 2 ou 3)
3. Devinez le nombre en entrant votre proposition
4. Utilisez les indices \"Plus grand\" ou \"Plus petit\"
5. Trouvez le nombre avant d'épuiser toutes vos vies !

## 📝 Structure du Code
\`\`\`
Projet_de_devinette.cpp
├── Génération du nombre aléatoire (rand() % 101)
├── Interface utilisateur (menus et prompts)
├── Boucle de jeu avec gestion des tentatives
├── Système d'indices (plus grand/plus petit)
└── Gestion de la victoire/défaite
\`\`\`

## 💻 Exemple d'Exécution
\`\`\`
=== JEU DE DEVINETTE ===
Choisis ta difficulté :
[1] Facile (10 vies)
[2] Moyen (5 vies)
[3] Difficile (3 vies)

Ton choix : 2
✨ Devine mon nombre (0-100) : 50
➤ PLUS PETIT 📉
❤️ Vies restantes : 4
Nouvel essai : 25
➤ PLUS GRAND 📈
❤️ Vies restantes : 3
Nouvel essai : 37
🎉🎉🎉 BRAVO ! Tu as gagné ! 🎉🎉🎉
Trouvé en 3 tentative(s) !
\`\`\`

## 📊 Améliorations Futures
- [ ] Interface graphique (SFML/Raylib)
- [ ] Système de scores et classement
- [ ] Mode multijoueur
- [ ] Statistiques de jeu
- [ ] Thèmes visuels personnalisables

## 👥 Contribution
Les contributions sont les bienvenues ! N'hésitez pas à :
1. Fork le projet
2. Créer une branche pour votre fonctionnalité
3. Commit vos changements
4. Push vers la branche
5. Ouvrir une Pull Request

## 📄 Licence
Ce projet est sous licence MIT. Voir le fichier \`LICENCE\` pour plus de détails.

## ✍️ Auteur
- **Espy-Tech** - Développeur initial

---
⭐ Si vous aimez ce projet, n'hésitez pas à lui donner une étoile sur GitHub !

**Développé avec ❤️ en C++**"
