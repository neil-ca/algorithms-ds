# COMPLEJIDAD DE LAS SENTENCIAS BÁSICAS DE JAVA

Al analizar la complejidad de un método no recursivo, se han de aplicar las propiedades de la notacion O y
las siguientes consideraciones relativas al orden que tienen las sentencias, fundamentalmente a las estructuras
de control.

	- Las sentencias de asignación, son de orden constante O(1).
	- La complejidad de una sentencia de seleccion es el maximo de las complejidades del bloque `then` y del bloque
	`else`.
	- La complejidad de una sentencia de seleccion multiple (`switch`) es el maximo de las complejidades de cada uno de los bloques `case`.

