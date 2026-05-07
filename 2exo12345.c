/*
*Exercice 1 à 5:*
*Exo1*
	   Variable:
	Var T[MAX],TPOS[MAX],TNEG[MAX],NT[MAX]: tableau entier
	Var i,j,k,l,N,M,x,y,somme,max: entier
     DEBUT
	AFFICHER "Entrer le nombre du cage N du tableau"
	AFFICHER "N= "
	LIRE(N)
	AFFICHER "Entrer les valeurs du tableau:"
	POUR(i<-0;i<N;i<-i+1)
		LIRE(T[i])
	FIN POUR
	AFFICHER "Les valeurs dans le tableau sont:"
	POUR(i<-0;i<N;i<-i+1)
		AFFICHER("T[ ",i,"]= ",T[i])
	FIN POUR
	somme<-0
	POUR(i<-0;i<N;i<-i+1)
		somme=somme+T[i]
	FIN POUR
	AFFICHER("La somme des éléments du tableau est: ",somme)
*exo2*
	max=T[0]
	POUR(i<-1;i<N;i<-i+1)
		SI(max<=T[i])
			max=T[i]
		FIN SI
	FIN POUR
	AFFICHER("Le maximum est: ",max)
*Exo3*
	l<-0
	POUR(i<-0;i<N;i<-i+1)
		SI(T[i]==0)
			l++
		SI NON
			continue
		FIN SI
	FIN POUR
	AFFICHER("Dans le tableau T, l'effextif des valeurs nuls est de:",l)
	i<-0
	TANR QUE(i<N)
		SI(T[i]==0)
			POUR(j<-i;j<=N-2;j<-j+1)
				T[j]<-T[j+1]
			FIN POUR
			N<-N-1
		SI NON
			i<-i+1
		FIN SI
	FIN TANT QUE
	M<-N-l
	AFFICHER("Apres la suppression des valeurs nul du tableau T, le nombres de cages est maintenant de: ",M);
	AFFICHER("Et ses nouvelles valeures sont: \n");
	POUR(j<-0;j<N;j<-j+1)
		AFFICHER("T[,"j,"]=",T[j])
	FIN POUR
*Exo4*
	POUR(j<-0;j<N;j<-j+1)
		x<-0
		y<-0
		SI(T[j]>0)
			x<-x+1
		SI NON
			y<-y+1
		FIN SI
	FIN POUR
	AFFICHER("Dans le tableau, le nombre des entiers positifs est:",x)
	AFFICHER("Dans le tableau, le nombre des entiers negatifs est.",y)
	i=-1
	k=-;
	POUR(j<-0;j<N;j<-j+1)
		SI(T[j]>0)
			i<-i+1
			TPOS[i]<-T[j]
		SI NON
			k<-K+1
			TNEG[k]<-T[j]
		FIN SI
	FIN POUR
	AFFICHER("Le tableau des entiers positifs dans T est ce ci: ")
	POUR(i<-0;i<N-y;i<-i+1)
		AFFICHER("TPOS[",i,"]= ",TPOS[i])
	FIN POUR
	AFFICHER("Le tableau des entiers négatifs dans T est ce ci: ")
	POUR(i<-0;i<N-x;i<-i+1)
		AFFICHER("TNEG[",i,"]=",TNEG[i])
*Exo5*
	POUR(i<-0;i<N;i<-i+1)
		NT[i]<-T[N-i-1]
	AFFICHER("En rageant le tableau T inversement, le tableau T devient:")
	POUR(i<-0;i<N;i<-i+1)
		T[i]<-NT[i]
	FIN POUR
	POUR(i<-0;i<N;i<-i)
		AFFICHER("T[",i,"]=",T[i])
	FIN POUR
    FIN
*/
// Exercice 1:
// Programme qui lit la dimension N d'un tableau T du type int (dimension maximal:50 composantes)
#include<stdio.h>
#include<math.h>
#define MAX 50
int i,j,k,somme=0,max,l=0,x,y,TPOS[MAX],TNEG[MAX],NT[MAX];
// Exo1
 int recuperer(int N);
 void remplir_T(int N,int *T);
 void afficher_T(int N,int *T);
 void calcul_somme_T(int N,int *T);
// Exo2
 void max_T(int N,int *T);
// Exo3-4-5
 void finir_exo(int N,int *T);


// Exo1
 int recuperer(int N)
 {
    printf("entier la valeur de n\n");
	printf("\tN= ");
	scanf("\t%d",&N);
	return (N);
 }
 void remplir_T(int N,int *T)
 {
	printf("Entrer les valeurs du tableau:\n");
	for(i=0;i<N;i++)
	{
		printf("\tT[%d]= ",i);
		scanf("%d",&T[i]);
	}
 }
 void afficher_T(int N,int *T)
 {
	printf("Les valeurs dans le tableau sont: \n");
	for(i=0;i<N;i++)
	{
		printf("\tT[%d]= %d\n",i,T[i]);
	}
 }
 void calcul_somme_T(int N,int *T)
 {
	for(i=0;i<N;i++)
	{
		somme=somme+T[i];
	}
	printf("La somme des éléments du tableau est: %d\n",somme);
 }
// Exo2
 void max_T(int N,int *T)
 {
	int max=T[0];
	for(i=1;i<N;i++)
	{
		if(max<=T[i])
		{
			max=T[i];
		}
	}
	printf("Le maximum est: %d\n",max);
 }
// Exo3-4-5
 void finir_exo(int N,int *T)
 {
// Exo3
// comptans les nombres des valeurs nul dans le tableau
	for(i=0;i<N;i++)
	{
		if(T[i]==0)
		{
			l++;
		}
		else
		{
			continue;
		}
	}
	printf("Dans le tableau T, on y trouve %d valeur nul (ou 0)\n",l);
// Supression des valeurs 0 du tableau sans laisser de tableau vide.
	i=0;
	while(i<N)
	{
		if(T[i]==0)
		{
			for(j=i;j<=N-2;j++)
			{
				T[j]=T[j+1];
			}
			N--;
		}
		else
		{
			i++;
		}
	}
	printf("Apres la suppression des valeurs nul du tableau T il y on a maintenant %d cages\n",N);
	printf("Et ses nouvelles valeures sont: \n");
	for(j=0;j<N;j++)
	{
		printf("\tT[%d]=%d\n",j,T[j]);
	}
// Exo4
// creation de 2 noveaux tableau TPOS contenant les valeurs positif de T et TNEG contenant les valeurs negatifs de T
	// comptans d'abord les nombres des entiers positifs dans le tableau et ceux des negatifs.
	// cette demarche est necessaire pour connaitre la nombre des cades du TPOS et TNEG.
	for(j=0;j<N;j++)
	{
		if(T[j]>0)
		{
			x++;
		}
		else
		{
			y++;
		}
	}
	printf("Dans le tableau, on y trouve %d nombre positif et %d nombre negatif.\n",x,y);
	// construisons et remplissant maintenant TPOS et TNEG.
	i=-1;
	k=-1;
	for(j=0;j<N;j++)
	{
		if(T[j]>0)
		{
			i++;
			TPOS[i]=T[j];
		}
		else
		{
			k++;
			TNEG[k]=T[j];
		}
	}
	printf("Le tableau des entiers positifs dans T est ce ci:\n ");
	for(i=0;i<N-y;i++)
	{
		printf("\tTPOS[%d]= %d\n",i,TPOS[i]);
	}
	printf("Le tableau des entiers négatifs dans T est ce ci:\n");
	for(i=0;i<N-x;i++)
	{
		printf("\tTNEG[%d]= %d\n",i,TNEG[i]);
	}
// Exo5
// Ranger le T tableau dans l'ordre inverse.Afficher le tableau resultant.
	for(i=0;i<N;i++)
	{
		NT[i]=T[N-i-1];
	}
	printf("En rageant le tableau T inversement, le tableau T devient:\n");
	for(i=0;i<N;i++)
	{
		T[i]=NT[i];
	}
	for(i=0;i<N;i++)
	{
		printf("\tT[%d]= %d\n",i,T[i]);
	}
 }


int main()
 {
	int T[MAX],N;
	N=recuperer(N);
	remplir_T(N,T);
	afficher_T(N,T);
	calcul_somme_T(N,T);
 // Exo2
	max_T(N,T);
 // Exo3-4-5
	finir_exo(N,T);
	return (0);
 }