#include<stdio.h>
#include<math.h>
int recuperer(int k);
void produit_scalaire(int k,int u1,int u2,int u3,int v1,int v2,int v3,int u,int v,int w,int resultat);
int recuperer(int k)
{
    printf("Pour calculer le produit scalaire du vecteur dans votre tête, je doit savoir d'abord s'il est presenté en 2 dimension ou en 3 dimension.\n");
    printf("\t si c'est en 2 dimensions, veuillez entrer 2\n");
    printf("\t si c'est en 3 dimensions, veuillez entrer 3\n");
    printf("\t et si c'est autre chose, allez voir ailleur 😅😅\n ");
    printf("\t\t ⟹ ");
    scanf("%d",&k);
	return (k);
}
void produit_scalaire(int k,int u1,int u2,int u3,int v1,int v2,int v3,int u,int v,int w,int resultat)
{
    if(k==2)
    {
        printf("Entrer le coordonnée du premier vecteur:\n");
        printf("\t u1= ");
        scanf("%d",&u1);
        printf("\t u2= ");
        scanf("%d",&u2);
        printf("Entrer le coordonnée du deuxieme vecteur:\n");
        printf("\t v1= ");
        scanf("%d",&v1);
        printf("\t v2= ");
        scanf("%d",&v2);
        resultat=u1*v1+u2*v2;
        printf("Produit scalaire:\n");
        printf("\t u(%d,%d).v(%d,%d) = (%d x %d) + (%d x %d) = %d \n",u1,u2,v1,v2,u1,v1,u2,v2,resultat);
    }
    else if(k==3)
    {
        printf("Entrer le coordonnée du premier vecteur:\n");
        printf("\t u1= ");
        scanf("%d",&u1);
        printf("\t u2= ");
        scanf("%d",&u2);
        printf("\t u3= ");
        scanf("%d",&u3);
        printf("Entrer le coordonnée du deuxieme vecteur:\n");
        printf("\t v1= ");
        scanf("%d",&v1);
        printf("\t v2= ");
        scanf("%d",&v2);
        printf("\t v3= ");
        scanf("%d",&v3);
        u=u1*v1;
        v=u2*v2;
        w=u3*v3;
        printf("Produit scalaie:\n");
        printf("\tu(%d,%d,%d).v(%d,%d,%d) = u.v(%d,%d,%d)\n",u1,u2,u3,v1,v2,v3,u,v,w);
    }
    else
    {
        printf("Vous vous moquer de moi ou quoi🤨🤔\n");
        printf("Je vous avez dit d'allez voir ailleur🤬🤬\n");
        printf("Ce las depasse de ma competance😵‍💫😵‍💫\n");
    }
}
int main()
{
    int k,u1,u2,u3,v1,v2,v3,u,v,w,resultat;
    k=recuperer(k);
    produit_scalaire(k,u1,u2,u3,v1,v2,v3,u,v,w,resultat);
    return (0);
}