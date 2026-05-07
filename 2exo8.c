/* 		
	ALGORITHME:
		Variable
		N,i,k,t,max: entier
		AFFICHER("Entrer la valeur de N, le nombre maximal du cage du tableau A")
		LIRE(N)
		int A[N];
		POUR i DE 0 À N FAIRE
			LIRE(A[i])
		FIN POUR
		max PREND LA VALEUR DE T[N-1]
		POUR i DE 1 À N
			SI(max<=T[N-i])
				max PREND LA VALEUR DE T[N-i]
				k PREND LA VALEUR DE N-i
			FIN SI
		FIN POUR
		min PREND LA VALEUR DE A[N-1]
		POUR i DE 1 À N
			SI(min>=A[N-i])
				min PREND LA VALEUR DE T[N-i]
				t PREND LA VALEUR DE N-i
			FIN SI
		FIN POUR
		AFFICHER("Le maximum est:",max)  
		AFFICHER("Dans l'adresse T[",k)
		AFFICHER("Le minimum est:",min) 
		AFFICHER("Dans l'adresse T[",t)
	FIN
*/
#include<stdio.h>
#include<math.h>
#define MAX 50
int recuperer(int k);
void trouver_min_max_adresse(int N,int i,int k,int t,int min,int max,int *A);

int recuperer(int N)
{
    printf("Entrer la valeur de N, le nombre maximal du cage du tableau A\n");
	printf("\tN= ");
	scanf("%d",&N);
    return (N);
}
void trouver_min_max_adresse(int N,int i,int k,int t,int min,int max,int *A)
{
	for(i=0;i<N;i++)
	{	
		printf("\tA[%d]= ",i);
		scanf("%d",&A[i]);
	}
	max=A[N-1];
	for(i=1;i<=N;i++)
	{
		if(max<=A[N-i])
		{
			max=A[N-i];
			k=N-i;
		}
	}
	min=A[N-1];
	for(i=1;i<=N;i++)
	{
		if(min>=A[N-i])
		{
			min=A[N-i];
			t=N-i;
		}
	}
	printf("Le maximum est %d dans l'adresse A[%d]\n",max,k);
	printf("Le minimum est %d dans l'adresse A[%d]\n",min,t);
}
int main()
{
	int N,i,k=0,t=0,min,max,A[MAX];
	N=recuperer(N);
	trouver_min_max_adresse(N,i,k,t,min,max,A);
	return(0);
}
