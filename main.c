#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date_naissance,age;
    printf("Quelle votre annee de naissance ? :");
    scanf("%d",&date_naissance);
    age = 2022 - date_naissance;
    printf("vous aurez alors %d ans cette annee !");
    return 0;
}
