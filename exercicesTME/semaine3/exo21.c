//question1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PIERRE 1
#define FEUILLE PIERRE+1
#define CISEAUX FEUILLE+1
#define NBESSAIS 3
#define POINTSGAGNANTS 3

  /* Il sera probablement n�cessaire de modifier les parametres et valeur de retour des fonctions
    choix_ordinateur, choix_joueur, score et jeu */

  /* Les declarations actuelles permettent de compiler et d'executer le programme */

void affichage_objet(int obj){
  /* hypoth�se : obj = PIERRE ou
     obj = FEUILLE ou obj = CISEAUX

   affiche le nom de l'objet correspondant � obj */

  if (obj == PIERRE){
    printf("PIERRE");
  } else {
    if (obj == FEUILLE){
      printf("FEUILLE");
    } else {
      printf("CISEAUX");
    }
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CHANCE 3
#define POINTSGAGNANTS 3

int choix_joueur(){
    int saisie;
    int chance=CHANCE;
    int i=chance;
    while(i>0){
        printf("veuillez saisir un nombre entre 1 et 3\n");
        scanf("%d",&saisie);
        printf("%d\n",saisie);
        if((saisie!=1)&&(saisie!=2)&&(saisie!=3)){
            i=i-1;
            printf("vous avez choisis un chiffre different,il vous reste %d chances\n",i);

        }else{
            return saisie;

        }
    }
    return -1;



}
int choix_ordinateur() {

    int res= rand()%(4-1)+1;
    return res;
}
void score(int choixo,int choixj,int *scorej,int *scoreo){
    choixo=choix_ordinateur();
    choixj=choix_joueur();
    printf("l'ordinateur a dit %d\n",choixo);
    printf("le joueur a dit %d\n",choixj);

    if (choixo>choixj){
        *scoreo+=1;
    }else if(choixo<choixj){
        *scorej+=1;

    }
    printf("Le score est de %d/5 pour joueur - %d/5 pour ordinateur \n",*scorej,*scoreo);


}
void jeu() {
    int scoj1;
    int scoo1;
    int choix1;
    int choix2;

   while ((scoj1 != POINTSGAGNANTS)||(scoo1!=POINTSGAGNANTS)){
    score(choix1,choix2,&scoj1,&scoo1);



   if(scoj1 == POINTSGAGNANTS){
    printf("le gagnant est joueur\n");
   }
   else if(scoo1 == POINTSGAGNANTS){
        printf("le gagnant est ordinateur \n");

   }

}
}

int main(){
    srand(time(NULL));
    int scoj;
    int scoo;
    int choix1;
    int choix2;

    jeu();

}