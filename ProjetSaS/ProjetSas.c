#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxContent 30
#define maxCaractere 30

// declaration et initialisation de struct
struct Reservation
{
    int id[maxContent];
    char nom[maxContent][maxCaractere];
    char prenom[maxContent][maxCaractere];
    char tele[maxContent][maxCaractere];
    int age[maxContent];
    char status[maxContent][maxCaractere];
    char dateReservation[maxContent][maxCaractere];
};

struct Reservation reservation = {

    .id = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    .nom = {"Benali", "Elamrani", "Zahra", "Choukri", "Hassan", "Khalid", "Sofia", "Ayoub", "Sara", "Jamal"},
    .prenom = {"Ali", "Fatima", "Mohammed", "Rachid", "Nadia", "Youssef", "Salma", "Hicham", "Laila", "Omar"},
    .tele = {"0612345678", "0623456789", "0634567890", "0645678901", "0656789012", "0667890123", "0678901234", "0689012345", "0690123456", "0601234567"},
    .age = {18, 44, 22, 27, 31, 28, 24, 26, 43, 16},
    .status = {"valide", "reporte", "annule", "traite", "valide", "annule", "traite", "valide", "reporte", "traite"},
    .dateReservation = {"2024-10-01", "2024-10-02", "2024-10-03", "2024-10-04", "2024-10-05", "2024-10-06", "2024-10-07", "2024-10-08", "2024-10-09", "2024-10-10"}

};

// declaration de funcions utiliser

void afficher_tout_reservation(int Nbr_reservation);

int ajouter_simple_reservation(int Nbr_reservation);
int ajouter_multiple_reservation(int Nbr_reservation);

void Rechercher_Reservation_ParNom(int Nbr_reservation);
void Rechercher_Reservation_ParId(int Nbr_reservation);

void Modifier_Reservation(int Nbr_reservation);

int Supprimer_Reservation(int Nbr_reservation);

void tri_reservation_parNom_croissant(int Nbr_reservation);
void tri_reservation_parNom_descroissant(int Nbr_reservation);

void tri_reservation_parStatut(int Nbr_reservation);

void statistiques_moyenne_age_reserve(int Nbr_reservation);

void statistiques_nbr_patient_par_age(int Nbr_reservation);

void statistiques_nbr_reservation_par_statut(int Nbr_reservation);

int main()
{

    int option;
    char restart = 'y';

    int nombre_de_reservation = 10;

    while (restart == 'y' || restart == 'Y')
    {
        system("cls");

        printf("\n\n");
        printf("---------|   Gestion de reservation    |---------");
        printf("\n\n\t|1|-> Ajouter une reservation");
        printf("\n\n\t|2|-> Afficher les details d'une reservation ");
        printf("\n\n\t|3|-> Recherche des reservations");
        printf("\n\n\t|4|-> Modifier ou supprimer une reservation");
        printf("\n\n\t|5|-> Statistiques");
        printf("\n\n\t|6|-> Quitte");
        printf("\n\n\t=> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Ajouter une reservation   |-----");
            printf("\n\n");

            int simple_multiple;
            printf("\n\n\t|1|-> Ajouter Simple");
            printf("\n\n\t|2|-> Ajouter Multiple");

            printf("\n\n\t=> Choisissez comment ajouter : ");
            scanf("%d", &simple_multiple);

            if (simple_multiple == 1)
            {

               nombre_de_reservation = ajouter_simple_reservation(nombre_de_reservation);
            }
            else if (simple_multiple == 2)
            {

                nombre_de_reservation = ajouter_multiple_reservation(nombre_de_reservation);
            }
            else
            {
                printf("\n\n\t->Invalid operator");
            }            
        }
        break;
        case 2:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Afficher les details d'une reservation   |-----");
            printf("\n\n");

            printf("\n\n\t|1|-> Affichage Simple");
            printf("\n\n\t|2|-> Tri des reservations par Nom coissant");
            printf("\n\n\t|3|-> Tri des reservations par Nom decroissant");
            printf("\n\n\t|4|-> Tri des reservations par statut (valide, reporte, annule, traite) ");

            int type_affichage;
            printf("\n\n\t=> Choisissez comment Afficher  : ");
            scanf("%d", &type_affichage);

            if (type_affichage == 1)
            {
                afficher_tout_reservation(nombre_de_reservation);
            }
            else if (type_affichage == 2)
            {
                tri_reservation_parNom_croissant(nombre_de_reservation);
            }
            else if (type_affichage == 3)
            {
                tri_reservation_parNom_descroissant(nombre_de_reservation);
            }
            else if (type_affichage == 4)
            {
                tri_reservation_parStatut(nombre_de_reservation);
            }
            else
            {
                printf("\n\n\t-->Invalid choix");
            }
        }
        break;
        case 3:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Recherche des reservations   |-----");
            printf("\n\n");

            printf("\n\n\t|1|-> Recherche Par Nom");
            printf("\n\n\t|2|-> Recherche Par Id");

            int type_recherche;
            printf("\n\n\t=> Choisissez comment Rechercher  : ");
            scanf("%d", &type_recherche);

            if (type_recherche == 1)
            {
                Rechercher_Reservation_ParNom(nombre_de_reservation);
            }
            else if (type_recherche == 2)
            {
                Rechercher_Reservation_ParId(nombre_de_reservation);
            }
            else
            {
                printf("\n\n\t-->Invalid choix");
            }
        }
        break;
        case 4:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Modifier ou supprimer une reservation   |-----");
            printf("\n\n");

            printf("\n\n\t|1|-> Modifier une reservation");
            printf("\n\n\t|2|-> Supprimer une reservation");

            int type_traitement;
            printf("\n\n\t=> Choisissez comment traiter : ");
            scanf("%d", &type_traitement);

            if (type_traitement == 1)
            {
                Modifier_Reservation(nombre_de_reservation);
            }
            else if (type_traitement == 2)
            {
                nombre_de_reservation = Supprimer_Reservation(nombre_de_reservation);
            }
            else
            {
                printf("\n\n\t-->Invalid choix");
            }
        }
        break;
        case 5:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Statistiques   |-----");
            printf("\n\n");

            printf("\n\n\t|1|-> la moyenne d'age des patients ayant reserve");
            printf("\n\n\t|2|-> le nombre de patients par tranche d'age");
            printf("\n\n\t|3|-> Te nombre total de reservations par statut (valide, reporte, annule, traite) ");

            int type_statistiques;
            printf("\n\n\t=> Choisissez comment Afficher  : ");
            scanf("%d", &type_statistiques);

            if (type_statistiques == 1)
            {
                statistiques_moyenne_age_reserve(nombre_de_reservation);
            }
            else if (type_statistiques == 2)
            {
                statistiques_nbr_patient_par_age(nombre_de_reservation);
            }
            else if (type_statistiques == 3)
            {
                statistiques_nbr_reservation_par_statut(nombre_de_reservation);
            }
            else
            {
            }
        }
        break;
        case 6:
            printf("\n\n");
            printf("\n\n\t-->Tu Quitte le Programme");
            printf("\n\n");
            exit(0);
            break;

        default:
            printf("\n\n");
            printf("\n\n-->Choisissez une option valide");
            break;
        }

        printf("\n\n\n->Continuer ? (y) / (n) : ");
        scanf(" %c", &restart);
    }

    return 0;
}

// affichage d'une reservation

void afficher_tout_reservation(int Nbr_reservation)
{

    for (int i = 0; i < Nbr_reservation; i++)
    {
        if (Nbr_reservation != 0)
        {
            printf("\n\n==============================\n");
            printf("       Reservation | %d       \n", reservation.id[i]);
            printf("==============================\n\n");

            printf("  ==> Id:          %d\n\n", reservation.id[i]);
            printf("  ==> Nom:         %s\n\n", reservation.nom[i]);
            printf("  ==> Prenom:      %s\n\n", reservation.prenom[i]);
            printf("  ==> Tele:        %s\n\n", reservation.tele[i]);
            printf("  ==> Age:         %d\n\n", reservation.age[i]);
            printf("  ==> Status:      %s\n\n", reservation.status[i]);
            printf("  ==> Date:        %s\n\n", reservation.dateReservation[i]);

            printf("==============================\n");
        }
    }

    if (Nbr_reservation == 0)
    {
        printf("\n\n-->Liste Vide : Aucune reservation disponible");
    }
}

// Ajouter une reservation

int ajouter_simple_reservation(int Nbr_reservation)
{
    printf("\n\nDonner Nom | %d | : ", Nbr_reservation + 1);
    scanf("%s", reservation.nom[Nbr_reservation]);

    printf("\n\nDonner Prenom | %d | : ", Nbr_reservation + 1);
    scanf("%s", reservation.prenom[Nbr_reservation]);

    printf("\n\nDonner Numero de telephone | %d | : ", Nbr_reservation + 1);
    scanf("%s", reservation.tele[Nbr_reservation]);

    printf("\n\nDonner Age | %d | : ", Nbr_reservation + 1);
    scanf("%d", &reservation.age[Nbr_reservation]);

    char temporaire_Status[maxCaractere];
    int valid_Status = 0;
    while (!valid_Status)
    {
        printf("\n\nDonner Statut (valide, reporte, annule, traite) | %d | : ", Nbr_reservation + 1);
        scanf("%s", temporaire_Status);
        strcpy(temporaire_Status, strlwr(temporaire_Status));

        if (strcmp(temporaire_Status, "valide") == 0 || strcmp(temporaire_Status, "reporte") == 0 ||
            strcmp(temporaire_Status, "annule") == 0 || strcmp(temporaire_Status, "traite") == 0)
        {
            strcpy(reservation.status[Nbr_reservation], temporaire_Status);
            valid_Status = 1;
        }
        else
        {
            printf("\n\n\t-->Statut invalide. Veuillez entrer l'un des suivants: valide, reporte, annule, traite.\n");
        }
    }

    printf("\n\nDonner Date de Reservation (YYYY-MM-DD) | %d | : ", Nbr_reservation + 1);
    scanf("%s", reservation.dateReservation[Nbr_reservation]);

    reservation.id[Nbr_reservation] = Nbr_reservation + 1;
    Nbr_reservation++;

    printf("\n\n\t->Reservation ajoutee !");

    return Nbr_reservation;
}

int ajouter_multiple_reservation(int Nbr_reservation){

    int n;

    printf("\n\t->Donner Nombre d'elemnts ajouter : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n\nDonner Nom | %d | : ", Nbr_reservation + 1);
        scanf("%s", reservation.nom[Nbr_reservation]);

        printf("\n\nDonner Prenom | %d | : ", Nbr_reservation + 1);
        scanf("%s", reservation.prenom[Nbr_reservation]);

        printf("\n\nDonner Numero de telephone | %d | : ", Nbr_reservation + 1);
        scanf("%s", reservation.tele[Nbr_reservation]);

        printf("\n\nDonner Age | %d | : ", Nbr_reservation + 1);
        scanf("%d", &reservation.age[Nbr_reservation]);

        char temporaire_Status[maxCaractere];
        int valid_Status = 0;
        while (!valid_Status)
        {
            printf("\n\nDonner Statut (valide, reporte, annule, traite) | %d | : ", Nbr_reservation + 1);
            scanf("%s", temporaire_Status);
            strcpy(temporaire_Status, strlwr(temporaire_Status));

            if (strcmp(temporaire_Status, "valide") == 0 || strcmp(temporaire_Status, "reporte") == 0 ||
                strcmp(temporaire_Status, "annule") == 0 || strcmp(temporaire_Status, "traite") == 0)
            {
                strcpy(reservation.status[Nbr_reservation], temporaire_Status);
                valid_Status = 1;
            }
            else
            {
                printf("\n\n\t-->Statut invalide. Veuillez entrer l'un des suivants: valide, reporte, annule, traite.\n");
            }
        }

        printf("\n\nDonner Date de Reservation (YYYY-MM-DD) | %d | : ", Nbr_reservation + 1);
        scanf("%s", reservation.dateReservation[Nbr_reservation]);

        reservation.id[Nbr_reservation] = Nbr_reservation + 1;

        printf("\n\n\n------\n\n");

        Nbr_reservation++;
    }

    printf("\n\n\t->Reservation ajoutee !");

    return Nbr_reservation;
}


// rechercher  une reservation

void Rechercher_Reservation_ParNom(int Nbr_reservation)
{

    int trouve = 0;
    char temporaire_nom[25];

    printf("\n\nDonner le nom de contact a rechercher : ");
    scanf("%s", &temporaire_nom);

    for (int i = 0; i < Nbr_reservation; i++)
    {

        if (strcmp(temporaire_nom, reservation.nom[i]) == 0)
        {
            printf("\n\n====Reservation | %d |==========", i + 1);
            printf("\n\n==>Id -->  %d", reservation.id[i]);
            printf("\n\n==>Nom -->  %s", reservation.nom[i]);
            printf("\n\n==>Prenom -->  %s", reservation.prenom[i]);
            printf("\n\n==>Tele -->  %s", reservation.tele[i]);
            printf("\n\n==>Age -->  %d", reservation.age[i]);
            printf("\n\n==>Status -->  %s", reservation.status[i]);
            printf("\n\n==>Date -->  %s", reservation.dateReservation[i]);
            trouve = 1;
            break;
        }
    }

    if (trouve != 1)
    {
        printf("\n\n-->Aucune Reservation pour ce nom");
    }
}

void Rechercher_Reservation_ParId(int Nbr_reservation)
{

    int trouve = 0;
    int temporaire_id;

    printf("\n\nDonner le Id de reservation a rechercher : ");
    scanf("%d", &temporaire_id);

    for (int i = 0; i < Nbr_reservation; i++)
    {

        if (temporaire_id == reservation.id[i])
        {

            printf("\n\n====Reservation | %d |==========", i + 1);
            printf("\n\n==>Id -->  %d", reservation.id[i]);
            printf("\n\n==>Nom -->  %s", reservation.nom[i]);
            printf("\n\n==>Prenom -->  %s", reservation.prenom[i]);
            printf("\n\n==>Tele -->  %s", reservation.tele[i]);
            printf("\n\n==>Age -->  %d", reservation.age[i]);
            printf("\n\n==>Status -->  %s", reservation.status[i]);
            printf("\n\n==>Date -->  %s", reservation.dateReservation[i]);
            trouve = 1;
            break;
        }
    }

    if (trouve != 1)
    {
        printf("\n\n-->Aucune Reservation pour ce Id");
    }
}

// modifier une reservation & supprimer une reservation

void Modifier_Reservation(int Nbr_reservation)
{
    int trouve = 0;
    int temporaire_id;

    printf("\n\nDonner le Id de reservation a modifier : ");
    scanf("%d", &temporaire_id);

    for (int i = 0; i < Nbr_reservation; i++)
    {

        if (temporaire_id == reservation.id[i])
        {

            char temporaire_Status[maxCaractere];
            int valid_Status = 0;

            while (!valid_Status)
            {
                printf("\n\nDonner nouveau Statut (valide, reporte, annule, traite) : ");
                scanf("%s", temporaire_Status);
                strcpy(temporaire_Status, strlwr(temporaire_Status));

                if (strcmp(temporaire_Status, "valide") == 0 || strcmp(temporaire_Status, "reporte") == 0 ||
                    strcmp(temporaire_Status, "annule") == 0 || strcmp(temporaire_Status, "traite") == 0)
                {
                    strcpy(reservation.status[i], temporaire_Status);
                    valid_Status = 1;
                }
                else
                {
                    printf("\n\n\t-->Statut invalide. Veuillez entrer l'un des suivants: valide, reporte, annule, traite.\n");
                }
            }

            printf("\n\nDonner Date de Reservation (YYYY-MM-DD) : ");
            scanf("%s", reservation.dateReservation[i]);

            printf("\n\nDonner nouveau tele : ");
            scanf("%s", reservation.tele[i]);
            trouve = 1;

            printf("\n\n\t->Reservation modifiee !");
            break;
        }
    }

    if (trouve != 1)
    {
        printf("\n\n-->Aucune Reservation pour ce Id");
    }
}

int Supprimer_Reservation(int Nbr_reservation)
{

    int trouve = 0;
    int temporaire_id;

    printf("\n\nDonner le Id de reservation a supprimer : ");
    scanf("%d", &temporaire_id);

    for (int i = 0; i < Nbr_reservation; i++)
    {

        if (temporaire_id == reservation.id[i])
        {

            char supprimer;
            printf("\n\n\t-> etes-vous sur de vouloir supprimer ce contact ? (y) / (n) : ");
            scanf(" %c", &supprimer);

            if (supprimer == 'y' || supprimer == 'Y')
            {
                for (int j = i; j < Nbr_reservation - 1; j++)
                {
                    strcpy(reservation.nom[j], reservation.nom[j + 1]);
                    strcpy(reservation.prenom[j], reservation.prenom[j + 1]);
                    strcpy(reservation.tele[j], reservation.tele[j + 1]);
                    strcpy(reservation.status[j], reservation.status[j + 1]);
                    strcpy(reservation.dateReservation[j], reservation.dateReservation[j + 1]);
                    reservation.id[j] = reservation.id[j + 1];
                }
                Nbr_reservation--;
                trouve = 1;
                printf("\n\n\t->Reservation supprimee !");
                break;
            }
            else
            {
                trouve = 1;
                printf("\n\n\t->Reservation non supprimee !");
                break;
            }
        }
    }

    if (trouve != 1)
    {
        printf("\n\n-->Aucune Reservation pour ce Id");
    }

    return Nbr_reservation;
}

// tri d'affichage

void tri_reservation_parNom_croissant(int Nbr_reservation)
{

    char temporaraire_nom[maxContent];
    char temporaraire_prenom[maxContent];

    char temporaraire_tele[maxContent];
    char temporaraire_status[maxContent];

    char temporaraire_dateReservation[maxContent];

    int temporaraire_id;
    int temporaraire_age;

    for(int i = 0; i < Nbr_reservation; i++){

           for(int j = i + 1; j < Nbr_reservation; j++){

                if(strcasecmp(reservation.nom[i], reservation.nom[j]) > 0){

                    strcpy(temporaraire_nom, reservation.nom[i]);
                    strcpy(reservation.nom[i], reservation.nom[j]);
                    strcpy(reservation.nom[j], temporaraire_nom);

                    strcpy(temporaraire_prenom, reservation.prenom[i]);
                    strcpy(reservation.prenom[i], reservation.prenom[j]);
                    strcpy(reservation.prenom[j], temporaraire_prenom);

                    strcpy(temporaraire_tele, reservation.tele[i]);
                    strcpy(reservation.tele[i], reservation.tele[j]);
                    strcpy(reservation.tele[j], temporaraire_tele);

                    strcpy(temporaraire_dateReservation, reservation.dateReservation[i]);
                    strcpy(reservation.dateReservation[i], reservation.dateReservation[j]);
                    strcpy(reservation.dateReservation[j], temporaraire_dateReservation);

                    strcpy(temporaraire_status, reservation.status[i]);
                    strcpy(reservation.status[i], reservation.status[j]);
                    strcpy(reservation.status[j], temporaraire_status);

                    temporaraire_id = reservation.id[i];
                    reservation.id[i] = reservation.id[j];
                    reservation.id[j] = temporaraire_id;

                    temporaraire_age = reservation.age[i];
                    reservation.age[i] = reservation.age[j];
                    reservation.age[j] = temporaraire_age;



                }
           }
    }

    afficher_tout_reservation(Nbr_reservation);
}

void tri_reservation_parNom_descroissant(int Nbr_reservation)
{
    char temporaraire_nom[maxContent];
    char temporaraire_prenom[maxContent];

    char temporaraire_tele[maxContent];
    char temporaraire_status[maxContent];

    char temporaraire_dateReservation[maxContent];

    int temporaraire_id;
    int temporaraire_age;

    for(int i = 0; i < Nbr_reservation; i++){

           for(int j = i + 1; j < Nbr_reservation; j++){

                if(strcasecmp(reservation.nom[i], reservation.nom[j]) < 0){

                    strcpy(temporaraire_nom, reservation.nom[i]);
                    strcpy(reservation.nom[i], reservation.nom[j]);
                    strcpy(reservation.nom[j], temporaraire_nom);

                    strcpy(temporaraire_prenom, reservation.prenom[i]);
                    strcpy(reservation.prenom[i], reservation.prenom[j]);
                    strcpy(reservation.prenom[j], temporaraire_prenom);

                    strcpy(temporaraire_tele, reservation.tele[i]);
                    strcpy(reservation.tele[i], reservation.tele[j]);
                    strcpy(reservation.tele[j], temporaraire_tele);

                    strcpy(temporaraire_dateReservation, reservation.dateReservation[i]);
                    strcpy(reservation.dateReservation[i], reservation.dateReservation[j]);
                    strcpy(reservation.dateReservation[j], temporaraire_dateReservation);

                    strcpy(temporaraire_status, reservation.status[i]);
                    strcpy(reservation.status[i], reservation.status[j]);
                    strcpy(reservation.status[j], temporaraire_status);

                    temporaraire_id = reservation.id[i];
                    reservation.id[i] = reservation.id[j];
                    reservation.id[j] = temporaraire_id;

                    temporaraire_age = reservation.age[i];
                    reservation.age[i] = reservation.age[j];
                    reservation.age[j] = temporaraire_age;

                }
           }
    }

    afficher_tout_reservation(Nbr_reservation);
}

void tri_reservation_parStatut(int Nbr_reservation)
{


    char status_donnerPar_utilisateur[maxContent];
    int valid_Status = 0;

    while (!valid_Status)
    {
        printf("\n\nDonner un Statut (valide, reporte, annule, traite) : ");
        scanf("%s", status_donnerPar_utilisateur);
        strcpy(status_donnerPar_utilisateur, strlwr(status_donnerPar_utilisateur));

        if (strcmp(status_donnerPar_utilisateur, "valide") == 0 || strcmp(status_donnerPar_utilisateur, "reporte") == 0 ||
            strcmp(status_donnerPar_utilisateur, "annule") == 0 || strcmp(status_donnerPar_utilisateur, "traite") == 0)
        {
            valid_Status = 1;
        }
        else
        {
            printf("\n\n\t-->Statut invalide. Veuillez entrer l'un des suivants: valide, reporte, annule, traite.\n");
        }
    }
     

    int status_correspondantes[Nbr_reservation];
    int corres_status = 0;


    for(int i = 0; i < Nbr_reservation; i++){

        if (strcmp(reservation.status[i], status_donnerPar_utilisateur) == 0) {

            status_correspondantes[corres_status] = i;
            corres_status++; 

        }
    }

    for (int i = 0; i < corres_status; i++) {
        
        int index = status_correspondantes[i];
        
        printf("\n\n==============================\n");
        printf("       Reservation | %d       \n", reservation.id[index]);
        printf("==============================\n\n");
        
        printf("  ==> Id:          %d\n\n", reservation.id[index]);
        printf("  ==> Nom:         %s\n\n", reservation.nom[index]);
        printf("  ==> Prenom:      %s\n\n", reservation.prenom[index]);
        printf("  ==> Tele:        %s\n\n", reservation.tele[index]);
        printf("  ==> Age:         %d\n\n", reservation.age[index]);
        printf("  ==> Status:      %s\n\n", reservation.status[index]);
        printf("  ==> Date:        %s\n\n", reservation.dateReservation[index]);
        
        printf("==============================\n");
    }

    printf("\n\n---------------------------------------------> les autres \n\n");

    for (int i = 0; i < Nbr_reservation; i++) {

        if (strcmp(reservation.status[i], status_donnerPar_utilisateur) != 0) {

            printf("\n\n==============================\n");
            printf("       Reservation | %d       \n", reservation.id[i]);
            printf("==============================\n\n");

            printf("  ==> Id:          %d\n\n", reservation.id[i]);
            printf("  ==> Nom:         %s\n\n", reservation.nom[i]);
            printf("  ==> Prenom:      %s\n\n", reservation.prenom[i]);
            printf("  ==> Tele:        %s\n\n", reservation.tele[i]);
            printf("  ==> Age:         %d\n\n", reservation.age[i]);
            printf("  ==> Status:      %s\n\n", reservation.status[i]);
            printf("  ==> Date:        %s\n\n", reservation.dateReservation[i]);

            printf("==============================\n");
        }
    }

}

// statiqtique

void statistiques_moyenne_age_reserve(int Nbr_reservation)
{
    int cpt = 0, somme_age = 0;

    for(int i = 0; i < Nbr_reservation;i++){

        if(strcmp(reservation.status[i], "valide") == 0){

            somme_age += reservation.age[i];
            cpt++;
        }
    }

    printf("\n\n\t=> | %d | des patients reserve et moyenne d'age : %d\n",cpt,somme_age / cpt);
}

void statistiques_nbr_patient_par_age(int Nbr_reservation)
{
    int  valide_par_age_plus_trente_six[] = {0, 0, 0, 0}; // valide, traite, annule, reporte
    int  valide_par_age_entre_dix_neuf_trente_cinq[] = {0, 0, 0, 0};
    int  valide_par_age_moin_dix_huit[] = {0, 0, 0, 0};

    int Nbr_age = 0;


    for(int i = 0; i < Nbr_reservation; i++){

        if(strcmp(reservation.status[i], "valide") == 0){

            if(reservation.age[i] >= 36){
                
                valide_par_age_plus_trente_six[0] += 1;
            }else if(reservation.age[i] >= 19 && reservation.age[i] <= 35){

                valide_par_age_entre_dix_neuf_trente_cinq[0] += 1;
            }else if(reservation.age[i] > 0 && reservation.age[i] <= 18){

                valide_par_age_moin_dix_huit[0] += 1;
            }else{
                printf("\n\n\t-->L'age doit etre supereriour a 0");
            }
            
        }else if(strcmp(reservation.status[i], "traite") == 0){

            if(reservation.age[i] >= 36){
                
                valide_par_age_plus_trente_six[1] += 1;
            }else if(reservation.age[i] >= 19 && reservation.age[i] <= 35){

                valide_par_age_entre_dix_neuf_trente_cinq[1] += 1;
            }else if(reservation.age[i] > 0 && reservation.age[i] <= 18){

                valide_par_age_moin_dix_huit[1] += 1;
            }else{
                printf("\n\n\t-->L'age doit etre supereriour a 0");
            }
        }else if(strcmp(reservation.status[i], "annule") == 0){

            if(reservation.age[i] >= 36){
                
                valide_par_age_plus_trente_six[2] += 1;
            }else if(reservation.age[i] >= 19 && reservation.age[i] <= 35){

                valide_par_age_entre_dix_neuf_trente_cinq[2] += 1;
            }else if(reservation.age[i] > 0 && reservation.age[i] <= 18){

                valide_par_age_moin_dix_huit[2] += 1;
            }else{
                printf("\n\n\t-->L'age doit etre supereriour a 0");
            }
        }else if(strcmp(reservation.status[i], "reporte") == 0){

            if(reservation.age[i] >= 36){
                
                valide_par_age_plus_trente_six[3] += 1;
            }else if(reservation.age[i] >= 19 && reservation.age[i] <= 35){

                valide_par_age_entre_dix_neuf_trente_cinq[3] += 1;
            }else if(reservation.age[i] > 0 && reservation.age[i] <= 18){

                valide_par_age_moin_dix_huit[3] += 1;
            }else{
                printf("\n\n\t-->L'age doit etre supereriour a 0");
            }
        }
    }
    printf("\n\n\t--->VALIDE\n");
    printf("\n\t-> %d des persones entre 0 et 18 ans", valide_par_age_moin_dix_huit[0]);
    printf("\n\t-> %d des persones entre 19 et 35 ans", valide_par_age_entre_dix_neuf_trente_cinq[0]);
    printf("\n\t-> %d des persones plus 35 ans", valide_par_age_plus_trente_six[0]);
    printf("\n\n\t--->TRAITE\n");
    printf("\n\t-> %d des persones entre 0 et 18 ans", valide_par_age_moin_dix_huit[1]);
    printf("\n\t-> %d des persones entre 19 et 35 ans", valide_par_age_entre_dix_neuf_trente_cinq[1]);
    printf("\n\t-> %d des persones plus 35 ans", valide_par_age_plus_trente_six[1]);
    printf("\n\n\t--->ANNULE\n");
    printf("\n\t-> %d des persones entre 0 et 18 ans", valide_par_age_moin_dix_huit[2]);
    printf("\n\t-> %d des persones entre 19 et 35 ans", valide_par_age_entre_dix_neuf_trente_cinq[2]);
    printf("\n\t-> %d des persones plus 35 ans", valide_par_age_plus_trente_six[2]);
    printf("\n\n\t--->REPORTE\n");
    printf("\n\t-> %d des persones entre 0 et 18 ans", valide_par_age_moin_dix_huit[3]);
    printf("\n\t-> %d des persones entre 19 et 35 ans", valide_par_age_entre_dix_neuf_trente_cinq[3]);
    printf("\n\t-> %d des persones plus 35 ans", valide_par_age_plus_trente_six[3]);

}

void statistiques_nbr_reservation_par_statut(int Nbr_reservation)
{
    int valide_Nbr_total_reservation = 0;
    int traite_Nbr_total_reservation = 0;
    int annule_Nbr_total_reservation = 0;
    int reporte_Nbr_total_reservation = 0;


    for(int i = 0; i < Nbr_reservation; i++){

        if(strcmp(reservation.status[i], "valide") == 0){

            valide_Nbr_total_reservation++;

        }else if(strcmp(reservation.status[i], "traite") == 0){

            traite_Nbr_total_reservation++;

        }else if(strcmp(reservation.status[i], "annule") == 0){

            annule_Nbr_total_reservation++;
           
        }else if(strcmp(reservation.status[i], "reporte") == 0){

            reporte_Nbr_total_reservation++;
            
        }
    }
    printf("\n\n\tVALIDE ->  ");
    printf("le nombre total de reservations :  %d", valide_Nbr_total_reservation);

    printf("\n\n\tTRAITE -> ");
    printf("le nombre total de reservations :  %d", traite_Nbr_total_reservation);

    printf("\n\n\tANNULE -> ");
    printf("le nombre total de reservations :  %d", annule_Nbr_total_reservation);

    printf("\n\n\tREPORTE -> ");
    printf("le nombre total de reservations :  %d", reporte_Nbr_total_reservation);
}