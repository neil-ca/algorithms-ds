# Arrays Multidemencionales

Son aquellos que tienen mas de una dimension y, en consecuencia, mas de un indice. Los mas
usuales son los de dos dimensiones, conocidos como tablas o matrices.
El de 2 d (m x n) tendra un numero de elementos que sera el resultado del producto (m+1)*(n+1). Para
localizar un elemento es por las coordenadas representadas por su numero de fila y su numero de columna
(a,b). La sintaxis para declarar un array de 2D es:

```java
char c[][];
int precios[][];
double [][]matriz;
```
Hasta ahora no se ha reservado memoria solo son referencias para instanciarlos y especificar el numero
de filas y columnas es:
```java
c = new char[80][24]; // matriz con 80 filas y 24 columnas
precios = new[10][5]; // 10 filas y 5 col
final int N = 4;
matriz = new double[N][N];
```
## Inicialización de arrays multidimensionales
Se hace encerrando entre llaves la lista de constantes, separadas por comas, que forman
cada fila, como en los ejemplos siguientes:
```java
int tabla1[][] = { {41,42,43},
	{44,45,46}};

int tabla2[][] = {
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15}
};
```
No es necesaio crearlas con el mismo numero de filas y columnas ya que son
arrays de arrays se puede hacer lo siguiente:
```java
int [] a = {1,2,3};
int [] b = {1,2,3,4,5};
int mt[][] = {a, b};
```
O con distinto numero de elementos por fila. Primero se crean las filas y, despues, las columnas de cada fila.
```java
double [][]gr = new double[3][];
gr[0] = new double[3];
gr[1] = new double[5];
gr[2] = new double[2];
```
En los arrays 2D el atributo `length` contiene el numero de filas y para sacar el numero de columnas
se saca el `length` de cada array fila.
```java
float ventas[][] = {{0.2,2.3,.1.2},{5.3,2.2,5.6},{-2.5}};

System.out.print(ventas.length); // escribe 3
System.out.print(ventas[0].length); // escribe 3
System.out.print(ventas[1].length); // escribe 2
System.out.print(ventas[2].length); // escribe 1
```
## Acceso a los elementos de arrays bidimensionales
El acceso a los elementos de arrays bidimensionales se debe especificar los indices 
de la fila y la columna.
El formato general para la asignacion directa de valores a los elementos es:
```java
insercion de elementos
<nombre array>[indice fila][i columna] = valor elemento;

extraccion de elementos
<variables> = <nombre array> [indice fila][indice columna];
```
Con dos bucles anidados se accede a todos los elementos de una matriz. Su sintaxis es:
```java
int fila, col;
for (fila =; fila < NumFilas; ++fila)
	for (col = 0; col < NumCol; ++col)
	Procesar elemento Matriz[fila][cola];
```
El numero de filas y de columnas se puede obtener con el atributo `length`. Con este atributo,
la sintaxis para acceder a los elementos es:
```java
<tipo> Matriz[][];
<especificacion de filas y columnas con operador new>
for (fila = 0; fila < Matriz.length; ++fila)
	for (col = 0; col < Matriz[fila].length; ++col)
	Procesar elemento Matriz[fila][col];
```

