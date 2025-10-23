#include <stdio.h>


int soma(int c, int e);

int main(){
    int c, e;

    printf("Insira dois numeros: ");
    scanf("%d" "%d", &c, &e);

    printf("%d", soma(c, e));
    return 0;
}


int soma(int c, int e){
    return c + e;
    
}