#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char *c;
    char *code;
    char x[100000];
    int menu;
    int n,j,i,k,ligne=0;
    printf("                   -----------------------------------------------------\n\n");
    printf("               ******************MENU PRINCIPAL*********************\n");
    printf("         ____________________________________________________\n\n");
    printf("1.Coder un message dans un fichier\n");
    printf("2.Decrypter un  message code'\n\n");
    printf("Programme redige' par LIantsoa RANDRIA et \n en collaboration avec RANDRIA INDUSTRIES\n\n");
    printf("SAISIR VOTRE OPTION\n");
    scanf("%ld",&menu);
    system("clear");
    switch(menu)
    {
      case 1:
          printf(" ************************************CRYPTAGE**********************************\n\n\n");
       do{ printf("SI vous vouliez crypter votre message dans le fichiers \n TAPER 1 \n");
        scanf("%d",&k);
       } while(k!=1);
     fichier=fopen("Enregistrement.txt","r+");
     if ( fichier !=NULL){
      fgets(x, 100000, fichier);
     n=strlen(x);
     printf("%d caractere(s)\n",n);
      c=malloc(n*(sizeof(char)));
      c=x;
      printf("mess: %s  \n",c);
      code=malloc(n*(sizeof(char)));
   code= codage(c,n);
       printf("CODAGE REUSSI!!!\n\n");
       fclose(fichier);
       fichier=fopen("Enregistrement.txt","w+");
       fprintf(fichier,"         LE MESSAGE CODE :     %s",code);
       fclose(fichier);
      }
      else{
        printf("IMPOSSIBLE DE LIRE LA FICHIER!!!\n\n");
      }
      break;
      case 2:
        printf("************************************DECRYPTAGE**********************************\n\n\n");
        do{ printf("SI vous vouliez decrypter votre message dans le fichiers \n TAPER 1 \n");
        scanf("%d",&k);
       } while(k!=1);
       fichier=fopen("Enregistrement.txt","r+");
     if ( fichier !=NULL){
     fgets(x, 100000, fichier);
     n=strlen(x);
     printf("%d caractere(s)\n",n);
      c=malloc(n*(sizeof(char)));
      c=x;
      code=malloc(n*(sizeof(char)));
   code= decodage(c,n);
       printf("DECODAGE REUSSI!!!\n\n");
       fclose(fichier);
       fichier=fopen("Enregistrement.txt","w+");
       fprintf(fichier,"         LE MESSAGE CODE ETAIT :     %s",code);
       fclose(fichier);
      }
      else{
        printf("IMPOSSIBLE DE LIRE LA FICHIER!!!\n\n");
      }
      break;
     }
    return 0;
}
