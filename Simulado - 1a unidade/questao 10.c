#include <stdio.h>

int main(void) {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas    = totalSegundos / 3600;          /* 1 hora = 3600 segundos */
    minutos  = (totalSegundos % 3600) / 60;   /* o que sobra das horas, em minutos */
    segundos = totalSegundos % 60;            /* o que sobra dos minutos */

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);

    return 0;
}
