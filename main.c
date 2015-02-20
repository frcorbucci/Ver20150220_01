#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {

    int i, array[N];
    int p=0;
    
    printf("\nInserisci l'eta' di %d persone.", N);
    
    for(i=0;i<N;i++)
    {
        printf("\nInserisci l'eta' della %d persona: ", i);
        scanf("%d", &array[i]);
       
    }
        for(i=0;i<N;i++)
        {  
            if(array[i]>=18)
            {
                p++;
            }   
        }
    
    printf("\nI maggiorenni sono: %d.", p);
    return (EXIT_SUCCESS);
}

