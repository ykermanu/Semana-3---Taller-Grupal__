#include <stdio.h>
int main(){
float subtotal= 0, descuento, total=0;
int opcion, cantidad, continuar;
char Nombre[15];
char C_I[10];
char Direccion[40];
char Celular[10];
do{
printf(".....Menu.....\n");
printf("1. Facturar Producto\n");
printf("2. Imprimir Factura\n");
printf("3. Salir...\n");
printf("elija una opcion:");
scanf("%d",&opcion);
switch(opcion){
case 1:
printf("a) Llantas P.U= $150\n");
printf("b) Kit Pastilla de Freno P.U= $55\n");
printf("c) Kit de Embrague P.U= $180\n ");
printf("d) Faro P.U= $70\n");
printf("e) Radiador P.U= $120\n");
printf("Elija la opcion de la a-e:");
char producto;
scanf("%s",&producto);
printf("Escriba la cantidad:");
scanf("%d",&cantidad);
switch(producto){
case 'a':
    subtotal += cantidad * 150;
    break;
case 'b':
    subtotal += cantidad * 55;
    break;
case 'c':
    subtotal += cantidad * 180;
    break;
case 'd':
    subtotal += cantidad * 70;
    break;
case 'e':
    subtotal += cantidad * 120;
    break;
    default:
        printf("producto no valido.\n");
        break;
}
break;

    case 2:
if(subtotal==0){
    printf("No se ah ingresado productos");
}else {
printf("---------------------Factura----------------\n");
printf("Nombre :");
scanf("%s",&Nombre);
printf("C.I: ");
scanf("%s",&C_I);
printf("Numero telefonico: ");
scanf("%s",&Celular);
printf("Direccion: ");
scanf("%s",&Direccion);

if (subtotal <= 100) {
          descuento = 0;
        } else if (subtotal <= 500) {
          descuento = subtotal * 0.05;
        } else if (subtotal <= 1000) {
          descuento = subtotal * 0.07;
        } else {
          descuento = subtotal * 0.1;
        }

        total = subtotal - descuento;

printf("Subtotal: $%.2f\n", subtotal);
printf("Descuento: $%.2f\n", descuento);
printf("Total: $%.2f\n", total);
subtotal = 0;
descuento = 0;
total = 0;
return 0;
break;
}
        break;
}

}while (opcion != 3);

printf("saliendo.....");
}
