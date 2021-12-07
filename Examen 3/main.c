#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;
void LeerArchivo(Deportista);
void imprimirMedallas(Deportista deportistas);
int main()
{
    Deportista deportistas;
    LeerArchivo(deportistas);
    imprimirMedallas(deportistas);
    return 0;
}

void LeerArchivo(Deportista deportistas)
{
   FILE *archivo;
   archivo=fopen("deportistas.txt", "r");
    fscanf(archivo, "%s", deportistas.datos.nombre);
    fscanf(archivo, "%s", deportistas.datos.pais);
    fscanf(archivo, "%s", deportistas.deporte);
    fscanf(archivo, "%d", &deportistas.numMedallas);
}

void imprimirMedallas(Deportista deportistas)
{
    char deporte[6][30] = {"Natacion", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
    for(int i=0; i<16; i++)
    {
        LeerArchivo(deportistas);
        for(int j=0; j<6; j++)
        {
        switch(strcmp(deportistas.deporte, deporte[j])==0)
    case 1:
        int cont1=0;
        cont1=cont1+deportistas.numMedallas;
        printf("%s %d\n",deporte, cont1);
        break;
    case 2:
        int cont2=0;
        cont2=cont2+deportistas.numMedallas;
        printf("%s %d\n",deporte, cont2);
        break;
    case 3:
        int cont3=0;
        cont3=cont3+deportistas.numMedallas;
        printf("%s %d\n",deporte, cont3);
        break;
        case 4:
        int cont4=0;
        cont4=cont4+deportistas.numMedallas;
        printf("%s %d\n",deporte, cont4);
        break;
        case 5:
        int cont5=0;
        cont5=cont5+deportistas.numMedallas;
        printf("%s %d\n",deporte, cont5);
        break;
        case 6:
            int cont6=0;
            cont6=cont6+deportistas.numMedallas;
            printf("%s %d\n",deporte, cont6);
            break;
        default:
            printf("No hay deportistas");
            break;
    }
}
}
