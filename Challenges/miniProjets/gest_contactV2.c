#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact
{
    char nom[25][25];
    int num_de_tele[25];
    char email[25][25];
};

struct Contact contact = {
    .nom = {
        "Alice", "Bob", "Charlie", "David", "Eva",
        "Frank", "Grace", "Hannah", "Isaac", "Jack"
    },
    .num_de_tele = {
        601234567, 709876543, 523456789, 634567890, 712345678,
        608765432, 754321098, 654321987, 521987654, 734567891
    },
    .email = {
        "alice@example.com", "bob@example.com", "charlie@example.com", 
        "david@example.com", "eva@example.com",
        "frank@example.com", "grace@example.com", "hannah@example.com", 
        "isaac@example.com", "jack@example.com"
    }
};

int ajouterContactMultiple(int Nbr_contact);
int ajouterSimpleContact(int Nbr_contact);

void afficherSimple(int Nbr_contact);
void afficherASC(int Nbr_contact);
void afficherDESC(int Nbr_contact);

void RechercherContact(int Nbr_contact);
void modiferContact(int Nbr_contact);
int supprimerContact(int Nbr_contact);

int main()
{
    int Nombre_de_contact = 10;
    int option;
    char restart = 'y';

    while (restart == 'y' || restart == 'Y')
    {
        system("cls");

        printf("\n\n");
        printf("------|   Gestion de Contacts   |-----");
        printf("\n\n\t|1|-> Ajouter un contact");
        printf("\n\n\t|2|-> Afficher tout les contact");
        printf("\n\n\t|3|-> Rechercher un Contact");
        printf("\n\n\t|4|-> Modifier un contact");
        printf("\n\n\t|5|-> Supprimer un contact");
        printf("\n\n\t|6|-> Quitte");
        printf("\n\n\t=> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            {
                system("cls");

                printf("\n\n");
                printf("------|   Ajouter un Contacts   |-----");
                printf("\n\n");

                int simple_multiple;
                printf("\n\n\t|1|-> Ajouter Simple");
                printf("\n\n\t|2|-> Ajouter Multiple");

                printf("\n\n\t=> Choisissez comment ajouter : ");
                scanf("%d", &simple_multiple);

                if(simple_multiple == 1){

                    Nombre_de_contact = ajouterSimpleContact(Nombre_de_contact);
                }else if(simple_multiple == 2){

                    Nombre_de_contact = ajouterContactMultiple(Nombre_de_contact);
                }else{
                    printf("\n\n\t->Invalid operator");
                }

            }
            break;
        case 2:
            system("cls");

            printf("\n\n");
            printf("------|   Afficher tout Contacts   |-----");
            printf("\n\n");

            printf("\n\n\t|1|-> Affichage Simple");
            printf("\n\n\t|2|-> Affichage ASC");
            printf("\n\n\t|3|-> Affichage DESC");

            int type_affichage;
            printf("\n\n\t=> Choisissez comment d'afficher  : ");
            scanf("%d", &type_affichage);

            if(type_affichage == 1){

                afficherSimple(Nombre_de_contact);
            }else if(type_affichage == 2){

                afficherASC(Nombre_de_contact);
            }else if(type_affichage == 2){
                
                afficherDESC(Nombre_de_contact);
            }else{
                printf("\n\n\t->Invalid operator");
            }
            
            break;
        case 3:
            RechercherContact(Nombre_de_contact);
            break;
        case 4:
            modiferContact(Nombre_de_contact);
            break;
        case 5:
            Nombre_de_contact = supprimerContact(Nombre_de_contact);
            break;
        case 6:
            printf("\n\n");
            printf("Tu Quitte le Programme");
            exit(0);
            break;
        }

        // scanf("%c");
        printf("\n\n\n->Continuer ? (y) / (n) : ");
        scanf(" %c", &restart);
    }

    return 0;
}


int ajouterContactMultiple(int Nbr_contact){

    system("cls");

    printf("\n\n");
    printf("------|   Ajouter Multiple Contacts   |-----");
    printf("\n\n");

    int n;
    printf("\n\t->Donner Nombre d'elemnts ajouter : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        
        printf("\nDonner nom | %d | : ", Nbr_contact + 1);
        scanf("%s", &contact.nom[Nbr_contact]);

        printf("\nDonner Numero de tetephone | %d | : ", Nbr_contact + 1);
        scanf("%d", &contact.num_de_tele[Nbr_contact]);

        printf("\nDonner email address | %d | : ", Nbr_contact + 1);
        scanf("%s", &contact.email[Nbr_contact]);

        printf("\n\n---\n");

        Nbr_contact++;
    }

    printf("\n\n\t->Contact ajouter !");

    return Nbr_contact;

}

int ajouterSimpleContact(int Nbr_contact){
    system("cls");

    printf("\n\n");
    printf("------|   Ajouter Simple Contact   |-----");
    printf("\n\n");

        
    printf("\nDonner nom | %d | : ", Nbr_contact + 1);
    scanf("%s", &contact.nom[Nbr_contact]);

    printf("\nDonner Numero de tetephone | %d | : ", Nbr_contact + 1);
    scanf("%d", &contact.num_de_tele[Nbr_contact]);

    printf("\nDonner email address | %d | : ", Nbr_contact + 1);
    scanf("%s", &contact.email[Nbr_contact]);

    Nbr_contact++;

    printf("\n\n\t->Contact ajouter !");

    return Nbr_contact;  
}

void afficherSimple(int Nbr_contact){

    system("cls");

    printf("\n\n");
    printf("------|   Affichage Simple   |-----");
    printf("\n\n");

    for (int i = 0; i < Nbr_contact; i++)
    {
        printf("\n\n====Contact | %d |==========", i + 1);
        printf("\n\n==>Nom -->  %s", contact.nom[i]);
        printf("\n\n==>Tele -->  %d", contact.num_de_tele[i]);
        printf("\n\n==>Email -->  %s", contact.email[i]);
        printf("\n\n===========================\n");
    }

};

void afficherASC(int Nbr_contact){

}

void afficherDESC(int Nbr_contact){

}

void RechercherContact(int Nbr_contact){
    
    system("cls");

    printf("\n\n");
    printf("------|   Rechercher un Contact   |-----");
    printf("\n\n");

    int found = 0;
    char temporaire_nom[25];

    printf("\n\nDonner le nom de contact a rechercher : ");
    scanf("%s", &temporaire_nom);

    for (int i = 0; i < Nbr_contact; i++)
    {
        if (strcmp(temporaire_nom, contact.nom[i]) == 0)
        {
            printf("\n\n====Contact | %d |==========", i + 1);
            printf("\n\n==>Nom -->  %s", contact.nom[i]);
            printf("\n\n==>Tele -->  %d", contact.num_de_tele[i]);
            printf("\n\n==>Email -->  %s", contact.email[i]);
            printf("\n\n===========================\n");
            found = 1;
            break;
        }
    }

    if (found != 1)
    {
        printf("\n\n->Le Contact est indesponible");
    }
}

void modiferContact(int Nbr_contact){
    system("cls");

    printf("\n\n");
    printf("------|   Modifier un Contact   |-----");
    printf("\n\n");

    int found = 0;
    char temporaire_nom[25];

    int new_tele_num;
    char new_address[25];

    printf("\n\nDonner le nom de contact a rechercher : ");
    scanf("%s", &temporaire_nom);

    for (int i = 0; i < Nbr_contact; i++)
    {
        if (strcmp(temporaire_nom, contact.nom[i]) == 0)
        {
            printf("\n\nDonner nouveau telephone number : ");
            scanf("%d", &new_tele_num);

            printf("\n\nDonner nouveau Address : ");
            scanf("%s", &new_address);

            strcpy(contact.email[i], new_address);
            contact.num_de_tele[i] = new_tele_num;

            found = 1;
            printf("\n\n\t->Contact Modifier !");
            break;
        }
    }

    if (found != 1)
    {
        printf("\n\n->Le Contact est indesponible");
    }
}

int supprimerContact(int Nbr_contact){

    system("cls");
    
    printf("\n\n");
    printf("------|   Supprimer un Contact   |-----");
    printf("\n\n");

    int found = 0;
    char temporaire_nom[25];

    printf("\n\nDonner le nom de contact a rechercher : ");
    scanf("%s", &temporaire_nom);

    for (int i = 0; i < Nbr_contact; i++)
    {
        if (strcmp(temporaire_nom, contact.nom[i]) == 0)
        {
            for (int j = i; j < Nbr_contact - 1; j++)
            {
                strcpy(contact.nom[j], contact.nom[j + 1]);
                strcpy(contact.email[j], contact.email[j + 1]);
                contact.num_de_tele[j] = contact.num_de_tele[j + 1];
            }

            found = 1;
            Nbr_contact--;

            printf("\n\n\t->Contact Supprimer !");
            break;
        }
    }

    if (found != 1)
    {
        printf("\n\n->Le Contact est indesponible");
    }

    return Nbr_contact;
}
