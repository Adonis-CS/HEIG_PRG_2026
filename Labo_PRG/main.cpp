/* ---------------------------
Laboratoire : 02
Auteur(s) : Adonis Chasi Sanchez
Date : 23.09.2026
But : Calcul du temps de trajet
Remarque(s) : the robots asks for the distance from A to B
--------------------------- */

#include <iostream> // permet d'afficher du texte à l'écran et de lire des données saisies au clavier
#include <cstdlib> // La librairie <cstdlib> propose deux constantes EXIT_SUCCESS et EXIT_FAILURE
#include <cmath> // pour math pow and sqrt

using namespace std; //Indique au compilateur d’utiliser un espace de noms std

/////////////////////////Déclaration des variables//////////////////////////////
double dx;
double dy;
double l1;
double s1;
double s2;

//////////////////////////fonctions////////////////////////////////////
bool verificationNombres(double x) {              // pour creer une fonction => type nomFonction(paramètres){
    if (x < 0){                                   // code;
        cout << "Valeur inferieur a 0" << endl;
        return EXIT_FAILURE ;                     // return valeur;
    }else {                                       // }
        cout << "Valeur de dx correcte." << endl;
        return EXIT_SUCCESS;
    }
}

/////////////////////////Code//////////////////////////////
int main() {  // fonction principale
    cout << "Bienvenue" << endl; //cout affiche à l’écran du texte et endl passe à la ligne

    cout << "Veuillez saisir les valeurs connus" << endl;
    cout << "Saisissez la valeur de dx en km:" << endl;
    cin >> dx; //lire une donnée saisie par l'utilisateur et de la stocker dans une variable.
    if (!verificationNombres(dx)) { //appelle ta fonction et si la vérification est fausse le programme s'arrete

        return EXIT_FAILURE ;
    }



    cout << "Saisissez la valeur de dy en km:" << endl;
    cin >> dy;
    if (!verificationNombres(dy)) { //appelle ta fonction et si la vérification est fausse

        return EXIT_FAILURE;
    }
    cout << "Saisissez la valeur de L1 en km:" << endl;
    cin >> l1;
    if (!verificationNombres(l1)) {
        return EXIT_FAILURE;
    }
    cout << "Saisissez la valeur de s1 en km/h:" << endl;
    cin >> s1;
    if (!verificationNombres(s1)) {
        return EXIT_FAILURE;
    }
    cout << "Saisissez la valeur de s2 en km/h:" << endl;
    cin >> s2;
    if (!verificationNombres(s2)) {

        return EXIT_FAILURE;
    }

    cout << "Valeur de la distance verticale = " << dy - l1 << " km" << endl;
    double distance_verticale = dy - l1; // calcul la distancer verticale pour trouver L2

    //Pythagore pour trouver L2
    double distance_ver_carree = pow(distance_verticale, 2);
    double dx_carree = pow(dx, 2);
    double l2 = sqrt(distance_ver_carree + dx_carree);

    cout << "Valeur du segment L2 = " << l2 << " km" << endl;


    double temps1 = l1/s1; // calcule pour trouver la temps pris pour parcourir le segment 1
    double temps2 = l2/s2; // calcule pour trouver la temps pris pour parcourir le segment 1

    double temps_total = temps1 + temps2; // calcule le temps total pour parcourir les 2 segments

    cout << "Temps total = " << temps_total << " heures" <<endl;

    return EXIT_SUCCESS;
}








