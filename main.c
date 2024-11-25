#include <stdio.h>
#define MAX_TACHES 100
#define MAX_LEN 100
 
typedef struct {
    char titre[MAX_LEN];      
    char description[MAX_LEN]; 
    char dateecheance[MAX_LEN];
    char priorite [MAX_LEN];
} Tache;

Tache taches[MAX_TACHES];
int nombreDeTaches = 0;

void afficherMenu () {
    printf("\n=== Menu ===\n");
    printf("1. Ajouter une tache:\n");
    printf("2.afficher une tache:\n");
    printf("3.modifier une tache:\n");
    printf("4. Quitter\n");
    printf("Choisissez une option: ");
}

void  ajouterTache() {
    if (nombreDeTaches < MAX_TACHES) {
                printf("Entrer le titre de la tache : ");
                getchar();
                scanf("%[^\n]",taches[nombreDeTaches].titre);
                printf("entrer la description de la tache :");
                getchar();
                scanf("%[^\n]",taches[nombreDeTaches].description);
                printf("entrer la dateecheance:");
                getchar();
                scanf("%[^\n]",taches[nombreDeTaches].dateecheance);
                printf("entre la priorite(high/low):");
                getchar();
              scanf("%[^\n]",taches[nombreDeTaches].priorite);

                printf("tache ajouter avec succes.");
                nombreDeTaches++;
    }else{
             printf("le nombre maximum de tache");
    }           
}
void afficherListesTaches() {
    if (nombreDeTaches == 0) {
        printf("Aucune tache a afficher.\n");
    }else{
        printf(" \n == liste des taches == \n");
        for (int i=0; i<nombreDeTaches ;i++ ){
            printf("tache %d:\n",i+1);
            printf("titre %s:\n",taches[i].titre);
            printf("description %s:\n",taches[i].description);
            printf("date d'echeance %s:\n",taches[i].dateecheance);
            printf("priorite %s:\n",taches[i].priorite);
        }

    }
}
void modifierTache() {
    int numeroTache;
    if (numeroTache==0){
    printf("aucune tache a modifier");
    return;
    }
printf("entrer le numero de la tache a modifier (1-%d):\n",numeroTache);
    scanf("%d",&numeroTache);
    if (numeroTache<0||numeroTache>MAX_TACHES){
        printf("numero de tache incorect\n");
        return;
    }

    int index=numeroTache-1;
                printf("modifier la tache:%d\n");
                printf("nouveau titre de la tache : ");
                getchar();
                scanf("%[^\n]",taches[index].titre);
                printf("nouveau description de la tache :");
                getchar();
                scanf("%[^\n]",taches[index].description);
                printf("nouveau dateecheance de la tache:");
                getchar();
                scanf("%[^\n]",taches[index].dateecheance);
                printf("nouveau priorite(high/low) de la tache:");
                getchar();
                scanf("%[^\n]",taches[index].priorite);

                printf("tache modifie avec succes.\n");
    }

   int main() {
    int choix;

    do {
        afficherMenu();
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1:
                ajouterTache();
                break;
            case 2:
                afficherListesTaches();
                break;
            case 3: 
                modifierTache();
                break;    
            
            case 4:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide, veuillez réessayer.\n");
        }
    } while (choix != 3);

    return 0;
}