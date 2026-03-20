MARTIN ENRIQUEZ 

C++ 2684

EJERCICIO 1
COMPLEJIDAD: O(1)
JUSTIFICACION:
El programa siempre realiza una cantidad fija de operaciones matemáticas y de lectura (exactamente 3 números), sin importar qué tan grandes sean esos números. Al no depender de una variable n que crezca, el tiempo de ejecución es constante.


EJERCICIO 2
COMPLEJIDAD: O(n)
JUSTIFICACION:
El programa utiliza un único bucle para leer los números ingresados por el usuario. El número de comparaciones para encontrar el mayor y el menor aumenta de forma lineal y proporcional a la cantidad de datos (n) introducidos.


EJERCICIO 3
COMPLEJIDAD: O(N^2)
JUSTIFICACION:
Para generar todas las parejas posibles (excluyendo el número consigo mismo), el programa requiere de bucles anidados. Por cada número en el conjunto de tamaño n, el sistema debe recorrer nuevamente los n elementos, resultando en un crecimiento cuadrático del número de operaciones.


EJERCICIO 4
COMPLEJIDAD: O LOG(N)
JUSTIFUCACION:
En cada paso del proceso, el valor del número de entrada se reduce a la mitad. El número de operaciones necesarias para llegar a 1 no crece linealmente con n, sino que sigue una escala logarítmica, ya que estamos dividiendo el espacio del problema de manera sucesiva.
