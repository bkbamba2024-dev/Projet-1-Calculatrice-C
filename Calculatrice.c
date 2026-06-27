#include <stdio.h>
void afficherMenu(){
    printf("===== CALCULATRICE =====\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quitter\n");}
float addition(float a, float b){
    return a + b;}
float soustraction(float a, float b){
    return a - b;}
float multiplication(float a, float b){
    return a * b;}
float division(float a, float b){
    return a / b;}
int main()
{
    int i;
    float  premier_nbre,deuxieme_nbre,resultat;
    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf("%d",&i);
         if (i == 5)
        {
            printf("\nMerci d'avoir utilise la calculatrice !\n");
        }
        else if (i >= 1 && i <= 4)
        {
            printf("\n--- Donner les deux nombres ---\n");
            printf("Premier nombre : ");
            scanf("%f", &premier_nbre);
            printf("Deuxieme nombre : ");
            scanf("%f", &deuxieme_nbre);

            switch (i)
            {
                case 1:
                    resultat = addition(premier_nbre, deuxieme_nbre);
                    printf("Resultat = %.2f\n", resultat);
                    break;
                case 2:
                    resultat = soustraction(premier_nbre, deuxieme_nbre);
                    printf("Resultat = %.2f\n", resultat);
                    break;
                case 3:
                    resultat = multiplication(premier_nbre, deuxieme_nbre);
                    printf("Resultat = %.2f\n", resultat);
                    break;
                case 4:
                    if (deuxieme_nbre == 0)
                    {
                        printf("Erreur : division par zero !\n");
                    }
                    else
                    {
                        resultat = division(premier_nbre, deuxieme_nbre);
                        printf("Resultat = %.2f\n", resultat);
                    }
                    break;
            }
        }
        else
        {
            printf("Choix invalide !\n\n");
        }
}
    while(i != 5);
    return 0;
}
