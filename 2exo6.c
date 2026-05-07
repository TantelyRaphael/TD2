/*
    AFFICHER "Entrer le dimension du tableau A que vous allez remplir:"
    LIRE(n)
    AFFICHER "Entrer le dimension du tableau B que vous allez remplir:"
    LIRE(n)
    AFFICHER "Entrer les valeurs du tableau A"
    POUR i DE 0 À n
    {
        LIRE(A[i]);
    }
	
*/
#include<stdio.h>
#include<math.h>
int recuperer(char k,char t,int n);
void recup_valeur_A(int n,int *A);
void recup_valeur_B(int m,int *B);
void ajout_B_vers_A(int n,int m,int *A,int *B);

int recuperer(char k,char t,int n)
{
    printf("Entrer le dimension %c du tableau %c que vous allez remplir\n",k,t);
    printf("\t %c= ",k);
    scanf("%d",&n);
	return n;
}
void recup_valeur_A(int n,int *A)
{
    int i=0;
    printf("Entrer les valeurs du tableau A\n");
    for(i=0;i<n;i++)
    {
        printf("\t A[%d]= ",i);
        scanf("%d",&A[i]);
    }
}
void recup_valeur_B(int m,int *B)
{
    int i=0;
    printf("Entrer les valeurs du tableau B maintenant\n");
    for(i=0;i<m;i++)
    {
        printf("\t B[%d]= ",i);
        scanf("%d",&B[i]);
    }
}
void ajout_B_vers_A(int n,int m,int *A,int *B)
{
    int i=0;
    int j=-1;
    for(i=n;i<m+n;i++)
    {
        j++;
        A[i]=B[j];
    }
    printf("Les nouvelles valeurs du tableau A apres l'ajout des valeurs du tableau B est:\n");
    for(i=0;i<m+n;i++)
    {
        printf("\t A[%d]=%d \n",i,A[i]);
    }
}

int main()
{
    int n,m,A[100],B[50];
    n=recuperer('n','A',n);
    m=recuperer('m','B',m);
    recup_valeur_A(n,A);
    recup_valeur_B(m,B);
    ajout_B_vers_A(n,m,A,B);
    return (0);
}