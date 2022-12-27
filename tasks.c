#include <stdio.h>
#include <math.h>

void soma(int* p, int a, int b){
    (*p) += (a + b);
}

int main() {
    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i <= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);

            FILE* f;
    f = fopen("palavras.txt", "r");

    char palavrasecreta[20] = "abobrinha";

    fclose(f);
    }
}


