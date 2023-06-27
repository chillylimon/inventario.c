#include <stdio.h>
#include <stdlib.h> //Prototipos de funciones de C para la gestión de memoria dinamica, control de procesos//
#include <string.h> //Definicion de macros, contantes, funciones, tipos y algunas operaciones de manipulación de memoria//

#define MAX_NOMBRE 50

void mostrarProducto(char *nombre, int cantidad, float precio)
{
    printf("\n--- DETALLES DEL PRODUCTO ---\n");
    printf("Nombre: %s\n", nombre);
    printf("Cantidad: %d\n", cantidad);
    printf("Precio: %.2f\n", precio);
}

void ingresarProducto(char *nombre, int *cantidad, float *precio)
{
    printf("\n--- Ingreso de Producto ---\n");
    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombre);
    printf("Ingrese la cantidad del producto: ");
    scanf("%d", cantidad);
    printf("Ingrese el precio del producto: ");
    scanf("%f", precio);

    printf("Producto ingresado exitosamente.\n");
}

void modificarProducto(char *nombre, int *cantidad, float *precio)
{
    printf("\n--- Modificacion de Producto ---\n");
    printf("Nombre actual: %s\n", nombre);
    printf("Cantidad actual: %d\n", *cantidad);
    printf("Precio actual: %.2f\n", *precio);

    printf("Ingrese el nuevo nombre del producto: ");
    scanf("%s", nombre);
    printf("Ingrese la nueva cantidad del producto: ");
    scanf("%d", cantidad);
    printf("Ingrese el nuevo precio del producto: ");
    scanf("%f", precio);

    printf("Producto modificado exitosamente.\n");
}

void eliminarProducto(char *nombre, int *cantidad, float *precio)
{
    nombre[0] = '\0';
    *cantidad = 0;
    *precio = 0.0;

    printf("Producto eliminado exitosamente.\n");
}

int main()
{
    char nombre[MAX_NOMBRE] = "";
    int cantidad = 0;
    float precio = 0.0;

    int opcion;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Ver producto\n");
        printf("2. Ingresar producto\n");
        printf("3. Modificar producto\n");
        printf("4. Eliminar producto\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            mostrarProducto(nombre, cantidad, precio);
            break;
        case 2:
            ingresarProducto(nombre, &cantidad, &precio);
            break;
        case 3:
            modificarProducto(nombre, &cantidad, &precio);
            break;
        case 4:
            eliminarProducto(nombre, &cantidad, &precio);
            break;
        case 0:
            printf("Saliendo del programa.\n");
            break;
        default:
            printf("Opcion invalida.\n");
            break;
        }
    } while (opcion != 0);

    return 0;
}
