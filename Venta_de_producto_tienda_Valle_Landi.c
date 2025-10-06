#include <stdio.h>

int main() {
    int id, stock, opcion, cantidad;
    float precio, ganancias = 0;
    char nombre[50];

    printf(" REGISTRO DEL PRODUCTO \n");
    printf("Ingrese el ID del producto: ");
    scanf("%d", &id);
    getchar(); // limpia el buffer del teclado

    printf("Ingrese el nombre del producto: ");
    fgets(nombre, 50, stdin);

    printf("Ingrese la cantidad en stock: ");
    scanf("%d", &stock);

    printf("Ingrese el precio unitario: ");
    scanf("%f", &precio);

    do {
        printf("\n=== MENU ===\n");
        printf("1. Vender producto\n");
        printf("2. Reabastecer producto\n");
        printf("3. Consultar informacion\n");
        printf("4. Mostrar ganancias\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\nIngrese cantidad a vender: ");
            scanf("%d", &cantidad);

            if (cantidad <= stock) {
                stock = stock - cantidad;
                ganancias = ganancias + (cantidad * precio);
                printf("Venta realizada con exito.\n");
            } else {
                printf("No hay suficiente stock.\n");
            }

        } else if (opcion == 2) {
            printf("\nIngrese cantidad a agregar: ");
            scanf("%d", &cantidad);
            stock = stock + cantidad;
            printf("Stock actualizado.\n");

        } else if (opcion == 3) {
            printf("\n--- INFORMACION DEL PRODUCTO ---\n");
            printf("ID: %d\n", id);
            printf("Nombre: %s", nombre);
            printf("Stock: %d\n", stock);
            printf("Precio: %.2f\n", precio);

        } else if (opcion == 4) {
            printf("\nGanancias actuales: %.2f\n", ganancias);

        } else if (opcion == 5) {
            printf("\nSaliendo del programa...\n");

        } else {
            printf("Opcion no valida.\n");
        }

    } while (opcion != 5);

    return 0;
}
