#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 100;
int *ponteiroN1 = &n1;
printf("n1:%d\nValor do n1 pelo ponteiro: %d\nPonteiro de n1: %d", n1, *ponteiroN1, ponteiroN1);
    return 0;
}