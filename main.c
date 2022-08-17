// programa da mega sena do paulinho
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define MIN 0
#define Max 60

int main()
{
    
    int seus_numeros[6],aleatorio[6];
    
    int x,y,z,acertos=0;
    
    printf("digite 6 numeros de 0 a 60: \n");
    
    for(x=0;x<6;x++)
    {
        printf("nuemeros %d:",x);
        scanf("%d",&seus_numeros[x]);
    }
    
    srand(time(NULL));
    printf("sorteios:\n");
    for(x=0;x<6;x++)
    {
        aleatorio[x]= MIN + (rand()%(Max - MIN + 1));
        printf("%d\n",aleatorio[x]);
    }
    
    for(x=0;x<6;x++)
    {   for(y=0;y<6;y++)
    {
            if(aleatorio[x] == seus_numeros[y]);
            acertos++;
    }
    }
    
    printf("e ai, quantos acerto voce teve? ");
    scanf("%d",&z);
    
    if(z<=3)
    printf("tente novamente mais tarde! porem, nao desista!!");
    
    else
    printf("muito bem!! a sorte esta em dias! agr va apostar de vdd kkkk");
    
    return 0;
    
}