#include <stdio.h>
#include <math.h>
int main(){
double PI = 3.14159265;
double raio, A, volume;
printf("Digite o raio:   " );
scanf("%lf", &raio);
printf("Raio ao quadrado e:  %f\n", pow(raio,2));
A = (4 * PI * pow (raio,2));
printf("me mostre a area da casa %.3f\n", A);
volume= (4.0/3.0) * PI * pow(raio,3);
printf("me mostre o volume %.3f\n", volume);
return 0;
} 
