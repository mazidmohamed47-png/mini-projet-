#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,T,m,Nh,Nb;
    printf("veuillez entrer les 5 nots : ");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
    T=n1+n2+n3+n4+n5;
    printf("le Total des notes est : %.2f \n",T);
    m=T/5;
    printf("la moyenne des notes est : %.2f \n",m);
    Nh=n1;
    if (n2>Nh)
        Nh=n2;
    if (n3>Nh)
        Nh=n3;
    if (n4>Nh)
        Nh=n4;
    if (n5>Nh)
        Nh=n5;
    printf("la note la plus haute est : %.2f\n",Nh);
    Nb=n1;
    if(n2<Nb)
       Nb=n2;
    if(n3<Nb)
       Nb=n3;
    if(n4<Nb)
       Nb=n4;
    if(n5<Nb)
       Nb=n5;
       printf("la note la plus basse est : %.2f\n",Nb);

    if (m>=90)
        printf(" mention globale est : Excellent \n");
    else if (m>80 && m<89)
        printf(" mention globale est : Tres bien\n");
    else if (m>70 && m<79)
        printf(" mention globale est : Bien\n");

    else if(m>60 && m<69)

        printf(" mention globale est : Passable\n");

     else
        printf(" mention globale est : Echec\n");

if (m>=50)
    printf("letudiant a reussi");
else
printf("letudiant a echoue");



    return 0;
}
