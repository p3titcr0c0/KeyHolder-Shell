#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int i = 0;
char *com;

typedef int bool;
#define false 0
#define true 1

#define DELAI 3

bool noslide;
bool lang;

/*------------------------------------------------------------*/
/*                      KeyHolder Shell                       */
/* Version :                                                  */
const float VERSION = 2.0;
/* Utilité : Pense bête pour le shell                         */
/* Autheur : Petitcroco                                       */
/* Date : Décembre 2020                                       */
/* Github :                                                   */
const char GITHUB[] = "https://github.com/p3titcr0c0/KeyHolder-Shell";
/*------------------------------------------------------------*/

void t(int x){for (int i=0; i!=x;i++){printf("─");}}

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
    printf("\033[0;31m┌");
	t(64);
	printf("┐\n│                        \033[0;34mKey-holder shell\033[0;31m                        │\n├");
	t(64);
	printf("┤\n│ \033[0;34mDécembre 2020\033[0;31m                                                  │\n│ \033[0;34mVersion : %.1f\033[0;31m                                                  │\n│ \033[0;34mAuteur : petitcroco\033[0;31m                                            │\n│ \033[0;34mGNU GENERAL PUBLIC LICENSE\033[0;31m                                     │\n├",VERSION);
	t(64);
	printf("┤\n│          \033[0;34m%s\033[0;31m         │\n└", GITHUB);
	t(64);
	printf("┘\n\033[0m");
	sleep(DELAI);system("clear");
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

void interogation(){
	printf("├");t(65);printf("┤\n");
	printf("│ \033[0;31m1. Revenir au menu                                   0. Quitter\033[0m │\n");
	printf("└");t(65);printf("┘\n\n");
	printf("Que souhaite tu faire ?\n");
    int n, res;
    res = scanf("%d", &n);
    if (res != 1){
    	printf("\033[0;31mErreur: problème d'input - interogation() ligne 86 !\033[0m\n");
    	exit(1);
    }
    if (n==0){
    	system("clear");
    	exit(1);
    }
    if (n==1){
    	system("clear");
    	if (lang==true){
			system(strcat(strcat(com, " -en")," -noslide"));
    	}
    	else{
    		system(strcat(com, " -noslide"));
    	}
    }
}

void chapter1(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                   \033[38;5;82m1. Le terminal de commandes\033[0m                   │\n├");
	t(65);printf("┤\n");
	printf("│ Syntaxe d'une commande :                                        │\n");
	printf("│ commande [option...] [argument]                                 │\n");
	printf("│ D'une manière générale :                                        │\n");
	printf("│ -i : interactif, demande des confirmations quand nécessaire     │\n");
	printf("│ -f, --force : force l'exécution                                 │\n");
	printf("│ -h, --help : affiche l'aide de la commande                      │\n");
	printf("│ -v, --verbose : mode bavard (verbieux)                          │\n");
	printf("│                                                                 │\n");
	printf("│ On peut afficher l'aide sur le terminal avec :                  │\n");
	printf("│ help [+ commande si désirée]                                    │\n");
	printf("│ Avoir accès au manuel : man commande                            │\n");
	printf("│                                                                 │\n");
	printf("│ -- est utilisé pour les paramètres de plusieurs lettres         │\n");
	printf("│ Caractères spéciaux utiles :                                    │\n");
	printf("│ \\c : pas de saut de ligne    -   #commentaire : commentaire     │\n");
	printf("│ \\t : tabulation              -   \[special] : pour l'afficher    │\n");
	printf("│ \\n : saut de ligne           -   tilde ~ : avec alt gr + é      │\n");
	interogation();
}

void chapter2(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                     \033[38;5;82m2. Répertoires de Linux\033[0m                     │\n├");
	t(65);printf("┤\n");
	printf("│ Essentiel :            se déplacer via : cd                     │\n");
	printf("│     revenir -> cd ..              aller dans bjr -> cd bjr      │\n");
	printf("│ aller a la racine -> cd /     aller dans le rep courant -> cd ~ │\n");
	printf("│ Afficher les elements : ls , en detail : ls -l                  │\n");
	printf("│ Savoir ou on se situe : pwd, localiser executable : which prog  │\n");
	printf("│ Afficher le path : echo $PATH, afficher l'arborescence : tree   │\n");
	printf("│ / -> racine (root) du système                                   │\n");
	printf("│ /bin -> fichiers exécutables des principales commandes linux    │\n");
	printf("│ /boot -> fichiers nécessaires au démarrage                      │\n");
	printf("│ /dev -> fichiers spéciaux pour la gestion des périphériques     │\n");
	printf("│ /proc -> Répertoire virtuel pour les informations système       │\n");
	printf("│ /etc -> fichiers de configuration du système (/etc/passwd)      │\n");
	printf("│ /lib -> bibliothèques partagées par les commandes de /bin       │\n");
	printf("│ /sbin -> fichiers binaires pour l’administartion du système     │\n");
	printf("│ /tmp -> répertoire de fichiers temporaires détruits             │\n");
	printf("│ /usr -> sous-arbre (éventuellement partagé avec NFS) découpé en │\n");
	printf("│         sous-répertoires comme la racine                        │\n");
	printf("│ /home -> contient les répertoires utilisateurs (appelé /users)  │\n");
	interogation();
}

void chapter3(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                   \033[38;5;82m3. Manipulation de fichiers\033[0m                   │\n├");
	t(65);printf("┤\n");
	printf("│ pwd : afficher ou on se trouve                                  │\n");
	printf("│ ls [adresse] : affiche les fichiers contenus à l’adresse, ls -l │\n");
	printf("│ mkdir new : crée un repertoire new                              │\n");
	printf("│ rmdir new : supprimer le repertoire new si il est vide          │\n");
	printf("│ mv [source] [cible] : déplace la source vers la cible           │\n");
	printf("│ cp [source] [cible] : copie la source vers la cible             │\n");
	printf("│                                                                 │\n");
	printf("│ rm truc.xy : supprime le fichier truc.xy                        │\n");
	printf("│ touch truc : crée un fichier ou met sa date a jour si existant  │\n");
	printf("│ ln -s [source] [cible] : crée un lien symbolique                │\n");
	printf("│                                                                 │\n");
	printf("│ locate [pattern] : recherche un fichier dont le nom absolu      │\n");
	printf("│         contient pattern en accédant à une base de données      │\n");
	printf("│ find [adresse_depart] -name [x] : parcourt d’arborescence à     │\n");
	printf("│   partir de adresse_depart à la recherche d’un fichier de nom x │\n");
	interogation();
}

void chapter4(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                 \033[38;5;82m4. Droits d'accès aux fichiers\033[0m                  │\n├");
	t(65);printf("┤\n");
	printf("│ savoir qui je suis : whoami                                     │\n");
	printf("│ savoir son numéro de groupe : id                                │\n");
	printf("│ Relation : user login/id/grp/rep de démarrage/prog de commande  │\n");
	printf("│ le fichier ---> /etc/passwd                                     │\n");
	printf("│                                                                 │\n");
	printf("│ Chaque fichier/répertoire exige certains droits d’accès pour    │\n");
	printf("│                être lu (r), écrit (w) et exécuté (x)            │\n");
	printf("│ A la créaton c'est défini grace a : umask masque                │\n");
	printf("│ Dans les systèmes Unix-like : l'utilisateur root à tous les     │\n");
	printf("│             privilèges et a l’exclusivité sur certains fichiers │\n");
	printf("│ devenir root : sudo su, incarner l'utilisateur x : su -s x      │\n");
	printf("│ infos : sudo -> substitute user do;      su -> switch user      │\n");
	printf("│ Modifier les droits d'un fichier :     chmod ... fichier        │\n");
	printf("│ aucun droit         : --- 000 > 0                               │\n");
	printf("│ execution seulement : --x 001 > 1     donné à l'utilisateur tt  │\n");
	printf("│ ecriture seulement  : -w- 010 > 2           les droits          │\n");
	printf("│ ecriture+execution  : -wx 011 > 3      chmod u+rwx monfichier   │\n");
	printf("│ lecture seulement   : r-- 100 > 4                               │\n");
	printf("│ lecture+execution   : r-x 101 > 5   donné tout les droits a tous|\n");
	printf("│ lecture+ecriture    : rw- 110 > 6       chmod 777 monfichier    │\n");
	printf("│ tous les droits     : rwx 110 > 7                               │\n");
	printf("│ si digits with chmod: ?..=user / .?.=membres du grp/ ..?= autres│\n");
	interogation();
}

void chapter5(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                     \033[38;5;82m4. Raccourcis clavier\033[0m                       │\n├");
	t(65);printf("┤\n");
	printf("│ Ctrl+D : termine le shell (equivaut a exit)                     │\n");
	printf("│ Ctrl+C : termine la commande en cours                           │\n");
	printf("│ tab : complétion de la commande en cours d'édition              │\n");
	printf("│ Ctrl+L : efface le terminal (equivaut a clear)                  │\n");
	printf("│ flèches du haut/bas : commande precedente / suivante            │\n");
	printf("│ Ctrl+R : rechercher dans les commandes tapees precedemment      │\n");
	printf("│ Ctrl+S : gele l'affichage                                       │\n");
	printf("│ Ctrl+Q : degele l'affichage                                     │\n");
	printf("│ Ctrl+Z : stoppe la commande courante                            │\n");
	printf("│ bg envoie cette tâche en arrière plan, fg -> premier plan       │\n");
	interogation();
}

void chapter6(){
	system("clear");
	printf("┌");t(65);printf("┐\n│                          \033[38;5;82m4. Archivage\033[0m                           │\n├");
	t(65);printf("┤\n");
	printf("│ Archiver des portions de l’arborescence dans un seul fichier    │\n");
	printf("│ -pratique, securisé, gain de place, (+possibilité de cryptage)  │\n");
	printf("│                                                                 │\n");
	printf("│ Compresser un repertoire en .tar.gz                             │\n");
	printf("│ tar czvf ARCHIVE.tar.gz REPERTOIRE                              │\n");
	printf("│ Décompresser un tar.gz                                          │\n");
	printf("│ tar xzvf ARCHIVE_a_DECOMP.tar.gz                                │\n");
	printf("│                                                                 │\n");
	printf("│ Compresser un fichier en .gz | Decompresser un fichier en .gz   │\n");
	printf("│         gzip FICHIER         |        gunzip ARCHIVE.gz         │\n");
	printf("│                                                                 │\n");
	printf("│ Compresser un fichier en .zip | Decompresser un fichier en .zip │\n");
	printf("│ zip -r nomArchive.zip dossier | unzip nomArchive.zip -d dossier │\n");
	printf("│                                                                 │\n");
	printf("│     Cree une archive .7z    | Decompresser un fichier en .7z    │\n");
	printf("│   7z a <archive> <fichiers> |         7z x <archive>            │\n");
	interogation();
}

void tableDesMatieres(){
	printf("┌");t(65);printf("┐\n│                        \033[0;31mTable des Matières\033[0m                       │\n├");
	t(32);printf("┬");t(32);printf("┤\n");
	printf("│ 1. Le terminal de commandes    ¦ 15. Utilisation de Git X       │\n");
	printf("│ 2. Répertoires de Linux        ¦ 16. Gestion des processus X    │\n");
	printf("│ 3. Manipulation de fichiers    ¦ 17. Svn X                      │\n");
	printf("│ 4. Droits d'accès aux fichiers ¦ 18. SSH et clefs X             │\n");
	printf("│ 5. Raccourcis clavier          ¦                                │\n");
	printf("│ 6. Archivage                   ¦                                │\n");
	printf("│ 7. Redirections X              ¦                                │\n");
	printf("│ 8. Script en shell (Bash) X    ¦                                │\n");
	printf("│ 9. Compilation X               ¦                                │\n");
	printf("│ 10. Expressions régulières et  ¦                                │\n");
	printf("│     patterns X                 ├────────────────────────────────┤\n");
	printf("│ 11. Le shell et les            │                                │\n");
	printf("│     expressions régulières X   │                                │\n");
	printf("│ 12. Grep  X                    │                                │\n");
	printf("│ 13. Sed X                      ├────────────────────────────────┤\n");
	printf("│ 14. Awk X                      │Page 1/1             0. Quitter │\n");
	printf("└");t(32);printf("┴");t(32);printf("┘\n\n");

	printf("Entrer le chapitre qui vous intèresse ?\n");
    int n, res;
    res = scanf("%d", &n);
    if (res != 1){
    	printf("\033[0;31mErreur: problème d'input - choix() ligne 66 !\033[0m\n");
    	exit(1);
    }
    switch(n){
        case 0 : system("clear"); break; //quitter
        case 1 : chapter1(); break;
        case 2 : chapter2(); break;
        case 3 : chapter3(); break;
        case 4 : chapter4(); break;
        case 5 : chapter5(); break;
        case 6 : chapter6(); break;
        //case 7 : printf("2"); break;
        //case 8 : printf("2"); break;
        //case 9 : printf("2"); break;
        //case 10 : printf("2"); break;
        //case 11 : printf("2"); break;
        //case 12 : printf("2"); break;
        //case 13 : printf("2"); break;
        //case 14 : printf("2"); break;
        default: system("clear"); tableDesMatieres(); break;
    }
}

int main(int argc, char *argv[]){
	com = argv[0];
	for (int tmp=0;tmp!=argc;tmp++){
		if( strcmp(argv[tmp],"-en") == 0 || strcmp(argv[tmp],"-EN") == 0 ){
			i = 1;
			lang = true;
		}
		if( strcmp(argv[tmp],"-noslide") == 0 || strcmp(argv[tmp],"-NOSLIDE") == 0 ){
			noslide = true;
		}
	}
	system("clear");
	if (noslide!=true){
		slide();
	}

    tableDesMatieres();
  	return 0;
}
