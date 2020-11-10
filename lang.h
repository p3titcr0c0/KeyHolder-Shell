/*------------------------------------------------------------*/
/*                      KeyHolder Shell                       */
/* Date :                                                     */
const char *DATE[] = {"Novembre 2020","November 2020"};
/* Utilité : Pense bête pour le shell                         */
/* Autheur : Petitcroco                                       */
const char *AUT[] = {"Auteur","Author"};
const char *LANG[] = {"Langage : Francais ","Language : English "};
/*------------------------------------------------------------*/



/* Gestion d'erreurs */
const char *ERR1[] = {"Erreur: slide.txt manquant - slide() ligne 10 !","Error: missing slide.txt - slide () line 10 !"};
const char *ERR2[] = {"Erreur: problème d'input - choix() ligne 66 !","Error: input problem - choice () line 66 !"};
const char *ERR3[] = {"Erreur: problème d'input - interogation() ligne 86 !","Error: input problem - interogation () line 86 !"};

/* Table des Matières */
const char *TABLEM_titre[] = {"Table des Matières","Table of Contents "};
const char *TABLEM_ligne1[] = {"│ 1. Le terminal de commandes    ¦ 15. Utilisation de Git         │","│ 1. Command terminal            ¦ 15. Using git                  │"};
const char *TABLEM_ligne2[] = {"│ 2. Répertoires de Linux        ¦ 16. Gestion des processus      │","│ 2. Linux Directories           ¦ 16. Process management         │"};
const char *TABLEM_ligne3[] = {"│ 3. Manipulation de fichiers    ¦ 17. Svn                        │","│ 3. File manipulation           ¦ 17. Svn                        │"};
const char *TABLEM_ligne4[] = {"│ 4. Droits d'accès aux fichiers ¦ 18. SSH et clefs               │","│ 4. File access rights          ¦ 18. SSH et keys                │"};
const char *TABLEM_ligne5[] = {"│ 5. Raccourcis clavier          ¦                                │","│ 5. Keyboard shortcuts          ¦                                │"};
const char *TABLEM_ligne6[] = {"│ 6. Archivage                   ¦                                │","│ 6. Atchiving                   ¦                                │"};
const char *TABLEM_ligne7[] = {"│ 7. Redirections                ¦                                │","│ 7. Redirects                   ¦                                │"};
const char *TABLEM_ligne8[] = {"│ 8. Script en shell (Bash)      ¦                                │","│ 8. Shell script (Bash)         ¦                                │"};
const char *TABLEM_ligne9[] = {"│ 9. Compilation                 ¦                                │","│ 9. Compilation                 ¦                                │"};
const char *TABLEM_ligne10[] = {"│ 10. Expressions régulières et  ¦                                │","│ 10. Regular expressions and    ¦                                │"};
const char *TABLEM_ligne11[] = {"│     patterns                   ├────────────────────────────────┤","│     patterns                   ├────────────────────────────────┤"};
const char *TABLEM_ligne12[] = {"│ 11. Le shell et les            │   Toutes aides / suggestions   │","│ 11. The shell and regular      │     Any help / suggestions     │"};
const char *TABLEM_ligne13[] = {"│     expressions régulières     │      sont les bienvenues!      │","│     expressions                │          are welcome!          │"};
const char *TABLEM_ligne14[] = {"│ 12. Grep                       │       Discord : Mat#2728       │","│ 12. Grep                       │       Discord : Mat#2728       │"};
const char *TABLEM_ligne15[] = {"│ 13. Sed                        ├────────────────────────────────┤","│ 13. Sed                        ├────────────────────────────────┤"};
const char *TABLEM_ligne16[] = {"│ 14. Awk                        │Page 1/1             0. Quitter │","│ 14. Awk                        │Page 1/1               0. Leave │"};

/* Interogation */
const char *INT1[] = {"Entrer le chapitre qui vous intèresse ?","Enter the chapter that interests you ?"};
//const char *INT2[] = {"Il semblerait que vous ayez fait une erreur, que recherchez vous ?","Looks like you made a mistake, what are you looking for ?"};
const char *INT3[] = {"Que souhaite tu faire ?","What do you want to choose ?"};

/* InteroChap */
const char *CHO1[] = {"1. Revenir au menu         ","1. Back to the main page   "};
const char *CHO2[] = {"0. Quitter","0. Leave  "};
/* Chapitres */
const char *CHAPTER1_titre[] = {"Le terminal de commandes","    Command terminal    "};
const char *CHAPTER1_ligne1[] = {"│ Syntaxe d'une commande :                                        │","│ │"};
const char *CHAPTER1_ligne2[] = {"│ commande [option...] [argument]                                 │","│ │"};
const char *CHAPTER1_ligne3[] = {"│ D'une manière générale :                                        │","│ │"};
const char *CHAPTER1_ligne4[] = {"│ -i : interactif, demande des confirmations quand nécessaire     │","│ │"};
const char *CHAPTER1_ligne5[] = {"│ -f, --force : force l'exécution                                 │","│ │"};
const char *CHAPTER1_ligne6[] = {"│ -h, --help : affiche l'aide de la commande                      │","│ │"};
const char *CHAPTER1_ligne7[] = {"│ -v, --verbose : mode bavard (verbieux)                          │","│ │"};
const char *CHAPTER1_ligne8[] = {"│                                                                 │","│ │"};
const char *CHAPTER1_ligne9[] = {"│ On peut afficher l'aide sur le terminal avec :                  │","│ │"};
const char *CHAPTER1_ligne10[] = {"│ help [+ commande si désirée]                                    │","│ │"};
const char *CHAPTER1_ligne11[] = {"│ Avoir accès au manuel : man commande                            │","│ │"};
const char *CHAPTER1_ligne12[] = {"│                                                                 │","│ │"};
const char *CHAPTER1_ligne13[] = {"│ -- est utilisé pour les paramètres de plusieurs lettres         │","│ │"};
const char *CHAPTER1_ligne14[] = {"│ Caractères spéciaux utiles :                                    │","│ │"};
const char *CHAPTER1_ligne15[] = {"│ \\c : pas de saut de ligne    -   #commentaire : commentaire     │","│ │"};
const char *CHAPTER1_ligne16[] = {"│ \\t : tabulation              -   \[special] : pour l'afficher    │","│ │"};
const char *CHAPTER1_ligne17[] = {"│ \\n : saut de ligne           -   . ou ~ : avec alt gr + 126     │","│ │"};