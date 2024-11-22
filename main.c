#include <stdio.h>
#define MAX_TACHES 100
#define MAX_LEN 100

// Structure représentant une tâche
typedef struct {
    char titre[MAX_LEN];      
    char description[MAX_LEN]; 
    char dateecheance[MAX_LEN]; 
} Tache;

Tache taches[MAX_TACHES];
int nombreDeTaches = 0;

void afficherMenu () {
    printf("\n=== Menu ===\n");
    printf("1. Ajouter une tache:\n");
    printf("2.afficher une tache:\n");
    printf("3. Quitter\n");
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

                printf("tache ajouter avec succes.");
                nombreDeTaches++;
    }else{
             printf("le nombre maximum de tache");
    }           

void afficherListeTaches() {
    if (nombreDeTaches == 0) {
        printf("Aucune tache à afficher.\n");
    }else{
        printf(" \n == liste des taches == \n");
        for (int i=0; i<nombreDeTaches ;i++ ){
            printf("tache %d:\n",i+1);
            printf("titre %s:\n",taches[i].titre);
            printf("description %s:\n",taches[i].description);
            printf("date d'echeance %s:\n",taches[i].dateecheance);
        }

    }
   
}
}
    int main(){
    
        int choix;

      do {
            afficherMenu();
            scanf("%d", &choix);
            getchar();


            switch(choix) {
                case 1:
                      ajouterTache();
                      break;
                case 2:
                      afficherListeTaches();
                      break;                    
                case 3:
                      printf("au revoir");
                       break;
                    default:            
                  printf("option invalide reesayer.\n");   
            }
    } while (choix != 2);
    
        return 0;
         }    