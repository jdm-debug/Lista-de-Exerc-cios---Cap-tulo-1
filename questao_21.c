/*Versão 1*/
#include <stdio.h>

int main() {
    printf("Treinamento em programacao.\nLinguagem C.\n");

    return 0;
}

/*Versão 2*/
#include <stdio.h>

int main() {
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");

    return 0;
}

/*Versão 3*/
#include <stdio.h>

int main() {
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBATreinamento em programacao.\xBA\n");
    printf("\xBALinguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    return 0;
}