#include <stdio.h> 
#include <stdlib.h> 
#include "Lib.h" 

int main( void ) { 
	//EXERCICE1
	message("Bonjour");
	
	
	//EXERCICE2
	int nombre = 0, taille , inverse;
	printf("\nEXERCICE2\n(Afficher dans l'ordre inverse)\n");
	printf("Entrer un nombre : ");
	scanf("%d", &nombre);
	inverse = inverseNombre (nombre);
	printf("L'inverse est : %d \n\n", inverse);
	
	
	//EXERCICE3
	float a, b ;
	printf("\nEXERCICE3\n(Produit de deux nombres reels)\n");
	printf("Entrer un nombre a=  ");
	scanf("%f", &a);
	printf("Entrer un autre nombre b= ");
	scanf("%f", &b);
	printf("Le produit de %.3f et de %.3f est P= %.3f\n\n", a, b, produit(a,b));
	
	
	//EXERCICE4
	int valeur;
	printf("\nEXERCICE4\n(Parite d'un nombre)\n");
	printf("Entrer un nombre : ");
	scanf("%d", &valeur);
	parite(valeur);
	
	
	//EXERCICE5
	int nbre1, nbre2 ;
	printf("\nEXERCICE5\n(Comparer deux valeurs entiere)\n");
	printf("Entrer un nombre : nombre 1 =  ");
	scanf("%d", &nbre1);
	printf("Entrer un autre nombre : nombre 2 = ");
	scanf("%d", &nbre2);
	compareNombre(nbre1, nbre2);
	
	
	//EXERCICE6
	printf("\nEXERCICE6\n(Ranger 3 nombres entiers dans l'ordre croissant')\n");
	printf("Entrer un nombre : nombre 1 =  ");
	scanf("%d", &nbre1);
	printf("Entrer un autre nombre : nombre 2 = ");
	scanf("%d", &nbre2);
	printf("Entrer un autre nombre : nombre 3 = ");
	scanf("%d", &valeur);	
	rangeNombre(nbre1, nbre2, valeur);
	
	//EXERCICE7
	int userVal; const int MN = 14;
	printf("\nEXERCICE7\n(Trouver le nombre magique)\n");
	do{
		printf("\nQuel est le nombre magique : ");
		scanf("%d", &userVal);
		magicNumber(userVal, MN);
	}while(userVal != MN);
	
	
	//EXERCICE16
	char* var1;
	char* var2;
	printf("\nEXERCICE16\n(Permutation de variables de type char a l'aide de pointeur')\n");
	printf("Entrer un caractere : char 1 =  ");
	scanf("%s", &var1);
	printf("Entrer un autre caractere : char 2 = ");
	scanf("%s", &var2);
	permute(&var1 , &var2);
	printf(" char 1 = %c et char 2 = %c \n", var1, var2);
	
	
	//EXERCICE17
	int n1,n2;
	printf("\nEXERCICE17\n(Somme de 2 entiers )\n");
	printf("Entrer le premier nombre : Valeur 1 =  ");
	scanf("%d", &n1);
	printf("Entrer le second : Valeur 2 = ");
	scanf("%d", &n2);
	printf("Leur somme donne S = %d", Somme(n1,n2));
	
	
	int result = power( 2, 3 ); 
	printf( "\n2³ == %d\n", result ); 
	result = fact( 6 ); 
	printf( "6! == %d\n", result ); 
	
	return EXIT_SUCCESS; 
}
