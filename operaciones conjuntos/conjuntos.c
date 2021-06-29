#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[]={1,2,3,5,6,7};  //arreglo A
    int B[]={1,2,8,3,9,10}; //arreglo B
    int i,i2; //variable para el for
    int op; //variable que almacena la opcion escogida

    printf("arreglo A: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d,",A[i]);
    }
    printf("\narreglo B: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d,",B[i]);
    }
    
    printf("\nMenu\n"
            "1.- Interseccion\n"
            "2.- Diferencia A-B\n"
            "Elige una opcion: ");
    scanf("%d",&op);

    if (op==1)
    {
        for (i=0; i < 6; i++)
        {
            for (i2=0; i2 < 6; i2++)
            {
                if (A[i]==B[i2])
                {
                    printf("%d\n",A[i]);
                }
            }  
        }
    }else if (op==2)
    {
        //ciclo para buscar los numeros de A-B
        for (i=0; i < 6; i++)
        {
            for (i2=0; i2 < 6; i2++)
            {
                if (A[i]==B[i2])
                {
                    A[i]=0;  //si son iguales pone un cero en la posicion en A
                    break;  //rompe el ciclo
                }
            }  
        }
        //ciclo para imprimir
        for (i=0; i < 6; i++)
        {
            if (A[i]!=0)
            {
                printf("%d\n",A[i]);
            }
        }
    }else
    printf("opcion no existente\n");

    system("pause");
    return EXIT_SUCCESS;
}