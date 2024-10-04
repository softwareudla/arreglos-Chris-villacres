#include <stdio.h>

int main (int argc, char *argv[]) {

float mnotas [3][5];
float vpromn [5];
float sumn,suma;
float promA[3];
float vcont[3];
int cont;
float mayE,menorE;
int i=0, j=0,z=0;

//Calculo del promedio de notas para cada estudiante
do {
    printf("Alumno %d\n",i+1);
    j=0; 
    sumn=0;
do {
    printf("Ingrese la nota de la materia %d\n",j+1);
    scanf("%f",&mnotas[j][i]);

 if (mnotas[j][i]>=0 && mnotas[j][i]<=10)
 {
    sumn=sumn+mnotas[j][i];
    j++;
 }else
 {
    printf("Error, nota fuera del rango (0-10)\n");
 }
 
} while(j<=2);

vpromn[i]= sumn/3;
printf("El promedio de calificaciones para el estudiante %d es :%.2f\n",i+1,vpromn[i]);
 i++;

} while(i<=4);

printf("\n");

//Calculo del promedio por asignatura

j=0;

do{

i=0;
suma=0;
vcont[3]=0;
z=0;

do {
if (mnotas[j][i]>=6)
{
    vcont[j]=vcont[j]+1;

}

 suma=  suma + mnotas[j][i];
 i++;
} while(i<=4);

promA[j]= suma/5;
printf("El promedio de calificaciones por asignatura %d es :%.2f\n",j+1,promA[j]);
j++;

}while(j<=2);

printf("\n");

//Aprobado y reprobados

z=0;
do
{
   printf("Los estudiantes que aprobaron la asignatura %d son : %.2f\n",z+1,vcont[z]);
   printf("Los estudiantes que reprobaron la asignatura %d son: %.2f\n",z+1,5-vcont[z]);
   z++;
} while (z<3);

printf("\n");

//Calificacion mas alta y baja por estudiante y asignatura

i=0;
 do
 {
 
j=0;
mayE=0;
menorE= 11;
 
 do 
 {
    if (mnotas[j][i]>mayE)
    {
        mayE=mnotas[j][i];
    }
    if (mnotas[j][i]<menorE)
    {
        menorE=mnotas[j][i];
    }
    j++;
 } while (j<=2);

 printf("Calificacion mas alta del alumno %d: %.2f\n",i+1,mayE);
 printf("Calificacion mas baja del alumno %d: %.2f\n",i+1,menorE);
 i++;

} while (i<=4);

printf("\n");

 //Asignatura

 j=0;
 do
 {
 
i=0;
mayE=0;
menorE= 11;
 
 do
 {
    if (mnotas[j][i]>mayE)
    {
        mayE=mnotas[j][i];
    }
    if (mnotas[j][i]<menorE)
    {
        menorE=mnotas[j][i];
    }
    i++;
 } while (i<=4);

 printf("Calificacion mas alta por asignatura %d: %.2f\n",j+1,mayE);
 printf("Calificacion mas baja por asignatura %d: %.2f\n",j+1,menorE);
 j++;

} while (j<=2);
 

    return 0;
}