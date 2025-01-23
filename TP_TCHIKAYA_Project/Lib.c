#include "Lib.h" 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
	unsigned int result = 1; 
	
	while ( value > 1 ) { 
		result *= value; 
		value --; 
	} 
	
	return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 

	if ( pow == 0 ) return 1; 
	if ( pow == 1 ) return value; 
	int accumulator = 1; 
	
	while( pow > 0 ) { 
		accumulator *= value; 
		pow--; 
	} 
	
	return accumulator; 
} 

//EXERCICE1
void message(char* msg){
	printf("EXERCICE1\n%s\n\n", msg);
}

//EXERCICE2
int inverseNombre (int nombre){
	int inverse = 0 ;
	while( nombre != 0){
		int chiffre = nombre % 10 ;
		inverse = inverse*10 + chiffre ;
		nombre /= 10;
	}
	return inverse ;
		
}

//EXERCICE3
float produit(float a, float b){
	float p = a*b;
	return p;
}

//EXERCICE4
void parite(int a){
	printf("Le nombre %d est %s \n\n",a, a % 2 == 0 ? "Paire": "Impaire");
}

//EXERCICE5
void compareNombre (int a, int b){
	printf("%d %s %d \n\n", a, (a==b ? "=" : (a<b ? "<":">")), b);
}

//EXERCICE6
void rangeNombre(int a, int b, int c){
	int tab[3];
	if (a<b && b<c){
		tab[0]=a; tab[1] = b; tab[2] = c;
	}else if(a<c && c<b){
		tab[0]=a; tab[1] = c; tab[2] = b;
	}else if(b<a && a<c){
		tab[0]=b; tab[1] = a; tab[2] = c;
	}else if(b<c && c<a){
		tab[0]=b; tab[1] = c; tab[2] = a;
	}else if(c<a && a<b){
		tab[0]=c; tab[1] = a; tab[2] = b;
	}else if(c<b && b<a){
		tab[0]=c; tab[1] = b; tab[2] = a;
	}
	printf("Dans l'ordre croissant on a : %d < %d < %d \n\n", tab[0], tab[1], tab[2]);
}

//EXERCICE7
void magicNumber (int a, const int MN){
	printf("%s", a==MN ? "Reuissi !! Bravo !!\n\n": (a<MN ? "Vous etes en DESSOUS !" : "Vous etes au DESSUS !"));
}

//EXERCICE16
void permute(char* *a , char* *b){
	char* temp;
	temp = *a ;
	*a = *b;
	*b = temp ; 
}

//EXERCICE17
int Somme (int a, int b){
	return a+b;
}
