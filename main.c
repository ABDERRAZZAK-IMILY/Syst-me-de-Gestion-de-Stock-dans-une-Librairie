#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int var;
    char Titre[50][50];
    char Auteur[50][50];
    float Prix[50];
    int Quantite[50];
    int numlivre = 0;
    int tot = 0;
    int sup = 0;
    char nom[50];
    char title[50];
    jump :
    printf("\n*******************************************************************\n entre le nemiro de l opiration : \n");
    printf("1.Ajouter un livre au stock\n2.Afficher tous les livres disponibles \n3.Rechercher un livre par son titre. \n4.Mettre à jour la quantité d'un livre. \n5.Supprimer un livre du stock.\n6.Afficher le nombre total de livres en stock.\n**************************************************************************\n");

    scanf("%d" , &var);
    switch (var){
   case 1 :
       printf("Titre du livre :");
       scanf("%s" , &Titre[numlivre]);
       printf("Auteur :");
       scanf("%s" , &Auteur[numlivre]);
       printf("Prix :");
       scanf("%f" , &Prix[numlivre]);
       printf("Quantite:");
       scanf("%d" , &Quantite[numlivre]);
       printf("le livre est ajouter!!\n");
       tot += Quantite[numlivre];
       numlivre++;
       goto jump;
       break;
   case 2 :
       for ( int i = 0 ; i < numlivre; i++){
       printf("le %d Titre du livre : %s\n" , i+1, Titre[i]);
       printf("Auteur :%s\n" ,Auteur[i]);
       printf("Prix :%f\n" ,Prix[i]);
       printf("Quantite: %d\n" , Quantite[i]);
       }
       goto jump;
       break;
       case 3:
    printf("Entrez le nom du livre : ");
    char nom[100];
    scanf("%s", nom);

    for (int i = 0; i < numlivre; i++) {
        if (strcmp(nom, Titre[i]) == 0) {
            printf("Le Titre du livre : %s\n", Titre[i]);
            printf("Auteur : %s\n", Auteur[i]);
            printf("Prix : %.2f\n", Prix[i]);
            printf("Quantité : %d\n**********************************************\n", Quantite[i]);
        }
    }
    break;

       case 4 :
       for (int i = 0; i< Titre[50][50];i++) {
        printf("le nom de livre :");
        scanf("%s" , &Titre[i]);
        printf("la nouvell Quqntite :");
        scanf("%d" , &Quantite);
       }
       goto jump;
        break;
       case 5:
     printf("Entrer le titre du livre: ");
    scanf("%s", &title);

    for (sup = 0; sup < numlivre; sup++) {
        if (strcmp(title, Titre[sup]) == 0) {
            for (int is = sup; sup < (numlivre - 1); is++){
                strcpy(Titre[is], Titre[is + 1]);
                strcpy(Auteur[is], Auteur[is + 1]);
                Prix[is] = Prix[is + 1];
                Quantite[is] = Quantite[is + 1];
            }
            numlivre--;
            printf("supprimé avec succès!\n");
            break;
        }
    }

        goto jump;
        break;
       case 6 :
       printf("le Nombre Total de Livres en Stock : %d\n" ,tot);
       goto jump;
       break;
     }

    return 0;
}
