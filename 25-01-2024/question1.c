#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i--)
    {
        int ab,cd,ef,gh,ij,kl;
        scanf("%d%d%d%d",&ab,&cd,&ef,&gh);
        ij=2*gh-ab;
        kl=2*ef-cd;
        printf("%d %d\n",ij,kl);
    }
    return 0;
}
