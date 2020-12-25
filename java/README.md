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

## Diseño de clases derivadas
En el diseño de una aplicacion orientada a objetos no siempre resulta facil establecer la relacion de herencia
más optima entre clases. Consideremos, por ejemplo, a los empleados de una empresa. Existen diferentes tipos de clasificadores segun el criterio 
de seleccion(discriminador), que pueden ser: modo de pago(sueldo fijo, por horas, a comision), didicacion a la empresa(plena o parcial)
o estado de su relacion laboral con la empresa(fijo o temporal).
Una clasificacion de los empleados basada en el modo de pago puede dividirlos en empleados con salario mensual
fijo, empleados con pago por horas de trabajo y empleados con pago a comsion por las ventas realizadas.

Una dificultad añadida a la que se enfrenta el diseñador es que un mismo objeto, en el supuesto anterior, un 
mismo empleado, puede pertenecer a diferentes grupos. Un empleado con dedicacion plena puede ser remunerado con un salario mensual, etc.
Una pregunta usual es: ¿Cual es la relacion que describe la mayor cantidad de variacion en los atributos de las
clases y operaciones? ¿esta relacion ha de ser cuando se tenga presente la aplicaion real a desarrollar.



