#include <stdio.h>
#include <stdlib.h>

// Funções fputc e putc (Ambas fazem a mesma coisa)

int main()
{
    // O objetivo dessas funções é escrever um caractére no output de string especificado
    char x[] = "teste";

    FILE *arquivo = fopen("arquivo.txt", "a");

    // stdin = Standard Input || stdout = Standard Output
    fputc('y', stdout); // O standard output é o terminal/console, geralmente
    putc('y', arquivo);
    for(int i = 1; i <= 2; ++i){
        fputc(x[i], stdout);
    }
    for(int i = 0; x[i] != '\0'; ++i){
        if(i > 1){
            if(x[i] == 's'){
                fputc(x[i] = 'r', stdout);
            }else if(x[i] == 'e'){
                fputc(x[i] = 'a', stdout);
                fputc('y', stdout);
            } else if(x[i] = 't'){
                fputc('d', stdout);
            }
        } else{fputc(x[i], stdout);}
    }
    fputc((x[0]), arquivo);
    printf("\nVerificando palavra:\n\n");
    int i = 0;
    while(x[i] != NULL){
        putc(x[i], stdout);
        i++;
    }
    return 0;
}
