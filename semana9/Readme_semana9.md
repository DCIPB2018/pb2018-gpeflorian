En cada programa uso #include para indicar las librerias que usarán en los programas, int main () para indicar la funcion maestra del programa, int para declarar variables enteras y float para declarar variables de punto flotante. También return 0 para verificar si la secuencia de instrucciones sucedió correctamente.

ejemplo1.c -  Se usó void cuadrado () para declarar una función cuyo nombre debe ser único para dicha función; dicha función no tiene argumentos de entrada pero si tiene argumentos de salida. Usamos cuadrado () para usar la función, void cuadrado (){} para definir la acción que se hará con la función, printf nos ayudará a imprimir caracteres a la pantalla, con scanf se leerá un dato ingresado al programa por el usuario, ya formateado del stdn, x2=x * x nos sirve para indicar que la variable x2 tendrá el valor de x multiplicado por x y con print f (%f,x2) se imprimirá el resulado de x2.

ejemplo2.c - Se usó float cuadrado(float h) para declarar una función cuyo nombfe debe ser único, dicha función tiene argumentos de entrada y de salida, se usa printf para imprimir a la pantalla caracteres, scanf leerá un dato ingresado al programa por el usuario ya formateado por el stdn, x2=cuarado(x) indica que el resultado generado por la funciòn cuadrado() a la variable  será gardado en la variable x2, printf(%f,x2) imprimirá a la pantalla dicho resultado.

ejemplo3.c - Se usó void cuadrado (float h) para declarar una función cuyo nombre debe ser único ara dicha función, ésta tiene agrumentos de entrada pero no tiene argumentos de salida, también usamos printf y scanf descritas anteriormente, usamos cuadrado (x) para indicar que se le aplicará la acción de la función a la variable x, void cuadrado (float h){} no ayudará a definir las acciones que realizará la función, x=h indica que el valor de la variable x se guardará en el valor de la variable h, x2=h* h indica qque el valor de h multiplicado por si mismo será guardado en la variable x2 y print(%f,x2) imprimirá el valor de x2 a la pantalla

ejemplo4.c - float cuadrado () declara una función cuyo nombre debe ser único para dicha función, y ésta no tiene argumentos de entrada pero tiene argumentos de salida, x1=cuadrado() indica que el valor que tome la función será guardado en la variable x1 y printf (%f,x1) imprimirá dicho valor a la pantalla, float cuadrado (){} definirá la acción que ralizará la función, printf y scanf ya lo hemos mencionado anteriormente, al igual que la acción de x2=x * x, return x2 regresa el valor de x2 a la función float cuadrado().

funciones.c - En este programa usamos las funciones descritas en ejemplo1, ejemplo2, ejemplo3 y ejemplo4, cos(xi), sen(xi), log(xi) y exp(xi) regresan el valor del coseno, seno, logaritmo y exponencial del valor guardado en x1 respectivamente. 

num_maximo.c - FILE* archivo ayuda delcarar una variable de tipo archivo, archivo=fopen abren un archivo indicado, if (archivo == NULL)  me ayuda a ver si el archivo abierto está vacío de ser así return 0 termina la ejecución de la función main, for (c = getc(archivo); c != EOF; c = getc(archivo))  hace un ciclo para leer los caracteres del archivo con getc, y la condicón    if (c == '\n') con  count = count + 1; me cuenta el número de líneas cada ve zque empieza una nueva línea identificada por los caracteres, fclose cierra el archivo, ptr=(float*)calloc(count,sizeof(float)); usa un arreglo el cuál reserva el bloque de memoria, todos del mismo tamaño y los inicaliza a cero, dicha función sabe que el total de bytes son el valor count por el amaño de la variable flotante; if (ptr==NULL) verifica si la condición ptr es nulo, de ser así exit 0 me saca del programa. Se usa un ciclo for (i=0;i<num;i++) que indiciamo un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a num veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones, if (* ptr < * (ptr+i)) pone una condición que si el primer valor del arreglo es menor que el segundo, entonces num_max=* (ptr); el valor del primer valor se guardará en la variable del número máximo, entonces * (ptr)=* (ptr+i); el siguiente valor guardado en el arreglo se guardará como el primer valor en arreglo y * (ptr+i)=num_max; asignará el valor del número máximo al siguiene número en el arreglo; de esta forma se hará un re-arreglo de los números hasta que se cumpla la condición, free (ptr) libera la memoria y fclose(archivo) cierra el archivo. 

promedio.c - usamos las variables FILE * archivo, int, float, archivo=fopen, ptr=(float*)calloc(count,sizeof(float)), 	 if (archivo == NULL), for (c = getc(archivo); c != EOF; c = getc(archivo)), if (c == '\n'){count = count + 1, y for (i=0;i<count;i++){	usadas en el programa o programas anterior(es). Los únicos diferentes son sum += * (ptr+i) que suma los valores guardados en el arreglo ptr+i y almacena el total en la variable sum y con sum/=count dicha variable se divide / entre el valor almacenado en count.

