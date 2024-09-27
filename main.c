#include <stdio.h>
#include <stdlib.h>
int main()
{
    int var;
    char Titre[50][50];
    char Auteur[50][50];
    float Prix[50];
    int Quantite[50];
    int numlivre = 0;
    while (2) {
    printf("entre le nemiro de l opiration : \n");
    printf("1.Ajouter un livre au stock\n2.Afficher tous les livres disponibles \n3.Rechercher un livre par son titre. \n4.Mettre à jour la quantité d'un livre. \n5.Supprimer un livre du stock.\n6.Afficher le nombre total de livres en stock.\n");

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
       numlivre++;
       break;
   case 2 :
       for (int i = 0 ; i < numlivre; i++){
       printf("Titre du livre : %s\n" , Titre[i]);
       printf("Auteur :%s\n" ,Auteur[i]);
       printf("Prix :%f\n" ,Prix[i]);
       printf("Quantite: %d\n\n\n" , Quantite[i]);
       }
       break;
   case 3 :
       printf("le Nombre Total de Livres en Stock : %d\n" , numlivre);

    }
    }
    return 0;
}

