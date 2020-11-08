#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef int bool;
#define false 0
#define true 1

/*------------------------------------------------------------*/
/*                      KeyHolder Shell                       */
/* Date :                                                     */
char DATE[] = "Novembre 2020";
/* Version :                                                  */
float VERSION = 1.5;
/* Utilité : Pense bête pour le shell                         */
/* Autheur : Petitcroco                                       */
/* Github :                                                   */
char GITHUB[] = "https://github.com/p3titcr0c0/KeyHolder-Shell";
/*------------------------------------------------------------*/

void slide(){
	int caractereLu, ligne=1, i=0;

  	FILE *fichier = fopen("slide.txt","r");
  	char mot[100];
  	if (fichier==NULL){
    	printf("\033[0;31mErreur: slide.txt manquant - slide() ligne 10 !\033[0m\n");
  	}
  	else{
  		printf("\033[01;33m");
    	while (caractereLu!=EOF){
    		caractereLu=fgetc(fichier);
        	fgets(mot,100,fichier);
        	if (i!=10){
				printf("%s",mot);
    		}
        	i++;
    	}
    	printf("\n");
  		printf("\033[0m\n");
  		i=0;
    }
}

void t(int x){for (int i=0; i!=x;i++){printf("─");}}

void infos(){
	printf("\033[0;31m┌");
	t(64);
	printf("┐\n│                        \033[0;34mKey-holder shell\033[0;31m                        │\n├");
	t(64);
	printf("┤\n│ \033[0;34m%s\033[0;31m                                                  │\n│ \033[0;34mVersion : %.1f\033[0;31m                                                  │\n│ \033[0;34mAuteur : petitcroco\033[0;31m                                            │\n├",DATE,VERSION);
	t(64);
	printf("┤\n│          \033[0;34m%s\033[0;31m         │\n└", GITHUB);
	t(64);
	printf("┘");
}

void tableDesMatieres(){
	printf("┌");t(65);printf("┐\n│                        \033[0;31mTable des Matières\033[0m                       │\n├");
	t(32);printf("┬");t(32);printf("┤\n");
	printf("│ 1. Le terminal de commandes    ¦ 15. Utilisation de Git         │\n");
	printf("│ 2. Répertoires de Linux        ¦ 16. Gestion des processus      │\n");
	printf("│ 3. Manipulation de fichiers    ¦ 17. Svn                        │\n");
	printf("│ 4. Droits d'accès aux fichiers ¦ 18. SSH et clefs               │\n");
	printf("│ 5. Raccourcis clavier          ¦                                │\n");
	printf("│ 6. Archivage                   ¦                                │\n");
	printf("│ 7. Redirections                ¦                                │\n");
	printf("│ 8. Script en shell (Bash)      ¦                                │\n");
	printf("│ 9. Compilation                 ¦                                │\n");
	printf("│ 10. Expressions régulières et  ¦                                │\n");
	printf("│     patterns                   ├────────────────────────────────┤\n");
	printf("│ 11. Le shell et les            │   Toutes aides / suggestions   │\n");
	printf("│     expressions régulières     │      sont les bienvenues!      │\n");
	printf("│ 12. Grep                       │       Discord : Mat#2728       │\n"); 
	printf("│ 13. Sed                        ├────────────────────────────────┤\n");
	printf("│ 14. Awk                        │ Page 1/1             0. Quitter│\n");
	printf("└");t(32);printf("┴");t(32);printf("┘\n\n");
}

int choix(bool err){
	if (err==false){
		printf("Entrer le chapitre qui vous intèresse ?\n");
	}
	else{
		printf("Il semblerait que vous ayez fait une erreur, que recherchez vous ?\n");
	}
    int n, res;
    res = scanf("%d", &n);
    if (res != 1){
    	printf("\033[0;31mErreur: problème d'input - choix() ligne 66 !\033[0m\n");
    	exit(1);
    }
    else{
    	return n;
    }
}

/*                       CHAPITRES                        */
/*1. Le terminal de commandes                       nom: chapter1()  */
/*2. Répertoires de Linux                           nom: chapter2()  */
/*3. Manipulation de fichiers                       nom: chapter3()  */
/*4. Droits d'accès aux fichiers                    nom: chapter4()  */
/*5. Raccourcis clavier                             nom: chapter5()  */
/*6. Archivage                                      nom: chapter6()  */
/*7. Redirections                                   nom: chapter7()  */
/*8. Script en shell (Bash)                         nom: chapter8()  */
/*9. Compilation                                    nom: chapter1()  */
/*10. Expressions régulières et  patterns           nom: chapter9()  */
/*11. Le shell et les expressions régulières        nom: chapter10()  */
/*12. Grep                                          nom: chapter11()  */
/*13. Sed                                           nom: chapter12()  */
/*14. Awk                                           nom: chapter13()  */
/*15. Utilisation de Git                            nom: chapter14()  */
/*16. Gestion des processus                         nom: chapter15()  */
/*17. Svn                                           nom: chapter16()  */
/*18. SSH et clefs                                  nom: chapter17()  */

void chapter1(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                   \033[38;5;82m1. Le terminal de commandes\033[0m                   │\n├");
	t(65);printf("┤\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n"); 
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n"); 
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("│                                                                 │\n"); 
	printf("│                                                                 │\n");
	printf("│                                                                 │\n");
	printf("└");t(65);printf("┘\n\n");
}

void decision(int x){
	switch(x){
        case 0 : system("clear"); break; //quitter
        case 1 : chapter1(); break;
        //case 2 : printf("2"); break;
        //case 3 : printf("2"); break;
        //case 4 : printf("2"); break;
        //case 5 : printf("2"); break;
        //case 6 : printf("2"); break;
        //case 7 : printf("2"); break;
        //case 8 : printf("2"); break;
        //case 9 : printf("2"); break;
        //case 10 : printf("2"); break;
        //case 11 : printf("2"); break;
        //case 12 : printf("2"); break;
        //case 13 : printf("2"); break;
        //case 14 : printf("2"); break;
        default: system("clear");tableDesMatieres();int n = choix(true);decision(n); break;
    }
}

int main(int argc, char *argv[]){
	system("clear");
	slide();
    infos();
    printf("\n\033[0m");
    sleep(3);system("clear");
    tableDesMatieres();
    int n = choix(false);
    
    decision(n);
  return 0;
}
