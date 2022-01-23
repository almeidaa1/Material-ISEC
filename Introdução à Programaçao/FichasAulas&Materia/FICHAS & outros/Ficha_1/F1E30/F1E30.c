#include <stdio.h>
#define TCA 0.052
#define TCB 0.018

main ()

{
        float PA = 500, PB = 1500;
        int n_ano = 0;
        while(PA<=PB)
            {
                PA = PA + (PA * TCA);
                PB = PB + (PB * TCB);
                n_ano =n_ano+1;
            }

        printf("%d",n_ano);

    return 0;

}
