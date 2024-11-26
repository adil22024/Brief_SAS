#include <stdio.h>
#include <stdlib.h>

struct Tache{
   
   char titre[31];
   char description[101];
   char date[11];
   char priorite[22];
};

int nombre_taches = 0;
struct Tache taches[1000];

void    ajouter_tache()
{
    struct Tache tache;

    if (nombre_taches < 1000)
    {
        printf("Entrez le titre de la tache: ");
        scanf(" %[^\n]", tache.titre);
        printf("entrez la description de la tache: ");
        scanf(" %[^\n]",tache.description);
        printf("entrez la date de la tache: ");
        scanf(" %[^\n]",tache.date);
        printf("entrez la priorite de la tache: ");
        scanf(" %[^\n]",tache.priorite);
        taches[nombre_taches] = tache;
        nombre_taches++;
        printf("l'opération s'est terminée avec succes\n");
    }

}

void afficher_tache()
{
    for(int i = 0; i < nombre_taches; i++)
    {
        printf("Tache %d:\n", i + 1);
        printf("   Titre:       %s\n", taches[i].titre);
        printf("   Description: %s\n", taches[i].description);
        printf("   Date:        %s\n", taches[i].date);
        printf("   Priorite:    %s\n", taches[i].priorite);
    }
}
void modifier_tache()
{
    struct Tache tache;

    if (nombre_taches < 1000)
    {
        printf("Entrez le titre de la tache: ");
        scanf(" %[^\n]", tache.titre);
        printf("entrez la description de la tache: ");
        scanf(" %[^\n]",tache.description);
        printf("entrez la date de la tache: ");
        scanf(" %[^\n]",tache.date);
        printf("entrez la priorite de la tache: ");
        scanf(" %[^\n]",tache.priorite);
        taches[nombre_taches] = tache;
        nombre_taches++;
        printf("l'opération s'est terminée avec succes\n");
    }
}
void supprimer_tache() {
        
    int indice,i;
    printf("Enter indice qui veux supprimer :");
    scanf("%d",&indice);
	if(indice<0 || indice>nombre_taches){
			printf("indice invalide !\n");
			return ;
		}else{
    for(i=indice;i<nombre_taches;i--){
	taches[i]=taches[i+1];
}
    nombre_taches--;
}
	printf("suppresion avec succes !");

    }

int main()
{
    int choix;

    while (1)
    {
        printf("#.menu\n");
        printf("1.ajouter une tache\n");
        printf("2.afficher la liste des taches\n");
        printf("3.modifier une tache\n");
        printf("4.supprimer une tache\n");
        printf("5.quitter\n");
         printf("\nentrer votre choix ");
        scanf("%d", &choix);
        switch (choix)
        {
            case 1:
                ajouter_tache();
                break ;
            case 2:
                afficher_tache();
                break ;
            case 3:
                modifier_tache();
                break ;
            case 4:
                break ;
            case 5:
                exit(0);
                break;
            default:
                printf("\ninvalide option\n\n");
                break ;
        }
    }
}