/*En este programa se suman el número de elementos en el apuntador. Creado por Guadalupe Florián el 3 de Octubre del 2018*/

/*Se incian las librerías incluídas en el programa*/
#include<stdio.h>
#include<stdlib.h>

	/*Función maestra del programa*/
	int main() {

		/*Se delcaran variables enteras*/
		int num,i,*ptr,sum=0;
		/*Se reserva el espacio en la mamoria usando malloc, que asigna un número de bytes indicados y devuelve un apuntador al primer byte del espacio asignado (un solo bloque), y se le indica que el total de bytes son el valor num por el tamaño de una variable entera*/
		ptr=(int*)malloc(num*sizeof(int));

		/*Se imprime a la pantalla la instrucción de introducir un numero de elementos*/
		printf("Introduce el numero de elementos: \n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%d",&num);

		/*Verifica si la condición de que el valor ptr es nulo, se imprima a la pantalla que no hay memoria reservada*/
		if(ptr==NULL)
		{	
		printf("Error! mamoria no reservada."),

		/*Indica la finalización exitosa del programa, en caso que la condicion if anterior se cumpla*/
		exit(0);
		}

		/*Se imprime a la pantalla la instrucción de colocar los valores del arreglo*/
		printf("Introduce los elementos del arreglo:\n");

		/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a num veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
		for(i=0;i<num;++i)
		{
			/*Lee el dato ingresado, ya formateado, del stdin*/
			scanf("%d",ptr + 1);

			/*El programa suma los valores del arreglo*/
			sum += *(ptr + 1);
		}

		/*Se imprime a la pantalla el resultado de sum*/
		printf("Sum = %d\n",sum);

		/*Se libera la memoria no usada por los apuntadores*/
		free(ptr);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
	
