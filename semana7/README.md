Creado el 14 de Septiembre del 2018 por Guadalupe Florian.

Aqui se especifican los comandos que use para cada uno de los programas.

En cada programa uso #incluse <stdio.h> para indicar las librerias que usare el en programa e int main () para la funcion maestra.Asi como declaracion de variable int para variables enteras y float para variables de punto flotante. Y return 0 que me indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara un signo de error.

Ejemplo_1.c Usa ciclos for(i=0;i<N;i++) para usar en la variable N que es igual a 10 y se permitio entrar el valor que entrara el usuario para ejecutar las instrucciones del programa. Se uso scanf("%f",&numeros[i]); para ingresar el valor y crear un array. Se multiplicara por dos numeros [i]*=2; y se imprimira el resultado con printf a la pantalla. 

Ejemplo_3.c Aqui se declaran variables enteras int y luego se usa printf para imprimir a la pantalla instrucciones para el usuario y scanf para permitir al usuario ingresar valores. Declaramos varialbes float como numeros [n] para crear un array con dichos valores, es decir, almacenarlos y usarlos de forma concecutiva para ciertas instruccioens, que en este caso sera para un ciclo for, que servira para ihdicar que empieza en cero i=0, que debe reperitse menos de n veces j<n y debe sumar una unidad por cada vez que se repita la instruccioni j++. Ingresara otro numero para multiplicarlo por dos con numeros[n]*2 y lo imprimira a la pantalla con printf.

Ejemplo_file En este ejemplo se declaro la varialbe de un archivo con FILE *archivo, luego se declararon variables con float, despues se abrio un archvo con archivo=fopen("text.txt","w"). Se imprimio al archivo de texto con fputs y fprintf, se dieron valor a variables con v=1 y se imprimieron al archivo de texto, finalmente se cerro el archivo con fclose(archivo).

Ejemplo_file2.c Aqui se declaro la variable de un archivo con FILE*archivo, se abrio un archivo para leerlo con  archivo=fopen("text.txt","w"), luego se leyo una cadena de caracteres del archivo con fscanf, despues se imprimio el caracter leido en el archivo con printf, desues con fscanf se tomo la informacion de dos variables del archivo que luego se imprimieron a la pantalla en la consola con printf. Finalmente se cerro el archivo con fclose.

Ejemplo_infoest.c Aqui se declaro la variable de un archivo con FILE*, luego se abrio un archvo con archivo=fopen("Informacion_estudiantes.txt","w" y finalmente se cerro el archivo con fclose(archivo).



