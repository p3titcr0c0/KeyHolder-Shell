#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int caractereLu, ligne=1, i=0;

	system("clear");	
    printf("\033[01;33m");

  	FILE *fichier = fopen("slide.txt","r");
  	char mot[100];
  	if (fichier==NULL)
    	exit(0);
  	else{
    	while (caractereLu!=EOF){
    		caractereLu=fgetc(fichier);
        	fgets(mot,100,fichier);
        	if (i!=10){
				printf("%s",mot);
    		}
        	i++;
    	}
    }
  	printf("\n");
  	printf("\033[0m\n");
  	return 0;
}
