# Complejidad de las sentencia básicas de java

Al analizar la complejidad de un método no recursivo, se han de aplicar las propiedades de la notacion O y
las siguientes consideraciones relativas al orden que tienen las sentencias, fundamentalmente a las estructuras
de control

- Las sentencias de asignación, son de orden constante O(1).
- La complejidad de una sentencia de seleccion es el maximo de las complejidades del bloque `then` y del bloque `else`.
- La complejidad de una sentencia de seleccion multiple (`switch`) es el maximo de las complejidades de cada uno 
de los bloques `case`.
- Para calcular la complejidad de un bucle, condicional o automático, se ha de estimar el número máximo de iteraciones para el peor caso; entonces,
la complejidad del bucle es el producto del número de iteraciones por la complejidad de las sentencias que forman el cuerpo del bucle.
- La complejidad de un bloque se calcula como la suma de las complejidades de cada sentencia del bloque.
- La complejidad de la llamada a un método es de orden 1, complejidad constante. Es necesario considerar la complejidad del método invocado.

# Tipos abstractos de los datos(TAD)
Caracteristica que permite ampliar el lenguaje añadiendo sus propios tipos de datos definidos por los usuarios.
Un TAD se compone de estructuras de datos y procedimientos o funciones que manipulan esas estructuras de datos, que son
invisibles a los usuarios o clientes es decir que los objetos tienen interfaces publicas sin embargo, las representaciones
e implementaciones de esas interfaces son privadas.

![alt text](https://i.ytimg.com/vi/2SYAdHaFthc/maxresdefault.jpg)

