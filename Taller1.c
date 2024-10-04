#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    float mnotas [3][5];
    float vpromn [5];
    float sumn,suma;
    float promA[3];
    float vcont[3];
    int cont;
    float mayE,menorE;
    int i=0, j=0,z=0;

    char alumnos[5][50];  
    char materias[3][50]; 

    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del alumno %d: ", i+1);
        scanf("%s", alumnos[i]);  
    }
    for (j = 0; j < 3; j++) {
        printf("Ingrese el nombre de la materia %d: ", j+1);
        scanf("%s", materias[j]);  
    }

    // Calculo del promedio de notas para cada estudiante
    i = 0;
    do {
        printf("\nNotas para %s:\n", alumnos[i]); 
        j = 0;
        sumn = 0;
        do {
            printf("Ingrese la nota de la materia %s: ", materias[j]); 
            scanf("%f", &mnotas[j][i]);

            if (mnotas[j][i] >= 0 && mnotas[j][i] <= 10) {
                sumn = sumn + mnotas[j][i];
                j++;
            } else {
                printf("Error, nota fuera del rango (0-10)\n");
            }

        } while(j <= 2);

        vpromn[i] = sumn / 3;
        printf("El promedio de calificaciones para %s es: %.2f\n", alumnos[i], vpromn[i]);
        i++;

    } while(i <= 4);

    printf("\n");

    // Calculo del promedio por asignatura
    j = 0;
    do {
        i = 0;
        suma = 0;
        vcont[3] = 0;
        z = 0;

        do {
            if (mnotas[j][i] >= 6) {
                vcont[j] = vcont[j] + 1;
            }

            suma = suma + mnotas[j][i];
            i++;
        } while(i <= 4);

        promA[j] = suma / 5;
        printf("El promedio de calificaciones por la materia %s es: %.2f\n", materias[j], promA[j]);
        j++;

    } while(j <= 2);

    printf("\n");

    // Aprobado y reprobados
    z = 0;
    do {
        printf("Los estudiantes que aprobaron la materia %s son: %.0f\n", materias[z], vcont[z]);
        printf("Los estudiantes que reprobaron la materia %s son: %.0f\n", materias[z], 5 - vcont[z]);
        z++;
    } while (z < 3);

    printf("\n");

    // Calificacion más alta y baja por estudiante
    i = 0;
    do {
        j = 0;
        mayE = 0;
        menorE = 11;

        do {
            if (mnotas[j][i] > mayE) {
                mayE = mnotas[j][i];
            }
            if (mnotas[j][i] < menorE) {
                menorE = mnotas[j][i];
            }
            j++;
        } while (j <= 2);

        printf("Calificacion más alta de %s: %.2f\n", alumnos[i], mayE);
        printf("Calificacion más baja de %s: %.2f\n", alumnos[i], menorE);
        i++;

    } while (i <= 4);

    printf("\n");

    // Calificacion más alta y baja por asignatura
    j = 0;
    do {
        i = 0;
        mayE = 0;
        menorE = 11;

        do {
            if (mnotas[j][i] > mayE) {
                mayE = mnotas[j][i];
            }
            if (mnotas[j][i] < menorE) {
                menorE = mnotas[j][i];
            }
            i++;
        } while (i <= 4);

        printf("Calificacion más alta de la materia %s: %.2f\n", materias[j], mayE);
        printf("Calificacion más baja de la materia %s: %.2f\n", materias[j], menorE);
        j++;

    } while (j <= 2);

    return 0;
}
