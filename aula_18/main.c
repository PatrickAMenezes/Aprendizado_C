#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, diff=10, c=0;

    printf("Insira um numero: ");
    scanf("%i", &x);

    if(x % diff == x)
        printf("\nEsse numero nao pode ser invertido.\n");
    else{
        printf("\nO numero %i ao contrario e ", x);

        if(x > 0){
            while(x != 0){

                y = x % diff;
                x /= diff;

                printf("%i", y);
            }
        } else{
            while(x != 0){

                y = x % diff;
                x /= diff;

                if(c == 0)
                    printf("%i", y);
                else
                    printf("%i", y * (-1));
                ++c;
            }
        }
    }

    return 0;
}
