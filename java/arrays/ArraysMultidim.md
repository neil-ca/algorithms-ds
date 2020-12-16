# Arrays Multidemencionales

Son aquellos que tienen mas de una dimension y, en consecuencia, más de un índice. Los más
usuales son los de dos dimensiones, conocidos como tablas o matrices.
El de 2 d (m x n) tendría un número de elementos que será el resultado del producto (m+1)*(n+1). Para
localizar un elemento es por las coordenadas representadas por su número de fila y su número de columna
(a, b). La sintaxis para declarar un array de 2D es:

```java
char c[][];
int precios[][];
double [][]matriz;
```
Hasta ahora no se ha reservado memoria solo son referencias para instanciarlos y especificar el número
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
No es necesario crearlas con el mismo número de filas y columnas, ya que son
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
## Arrays de más de dos dimensiones
Raramente se requiera mas de dos o tres dimensiones. Un array tridimensional se puede considerar
como un conjunto de arrays bidimensionales combinados para formar, en profundidad, una tercera dimension.
El cubo se construye con filas (dimension vertical), columnas (dimension horizontal) y planos (dimension en profundiad).
Por consiguiente, un elemento dado se localiza especificando su plano, fila y columna. Para declararlo:
```java
int equipos[][][] = new int[3][15][10];
``` 
Un ejemplo seria crear un array 3D para representar los caracteres de un libro y diseñar los bucles de acceso.

En él definiríamos las 3 dimensiones, [PAGINAS] [LINEAS] [COLUMNAS], que definen el tamaño del
array.
El method para acceder a los caracteres es mediante bucles anidados. Dado que el libro se compone
de un conjunto de páginas, el bucle más externo es el bucle de página, y el bucle de columnas es 
el bucle más interno. El bucle de filas se insertará entre los dos bucles:
```java
int pagina, linea, columna;
final int PAGINAS = 500;
final int LINEAS = 45;
final int COLUMNAS = 80;
char libro[][][] = new char[PAGINAS][LINEAS][COLUMNAS];
    for (pagina = 0; pagina < PAGINAS; ++pagina)
     for (linea = 0; linea < LINEAS; ++linea)
      for (columna = 0; columna < COLUMNAS; ++columna)
        <procesar libro[pagina][linea][columna]>
```
## Utilizacion de arrays como parametros
En java, todas las variables de tipos primitivos se pasan por valor. Por contra, los objetos se 
pasan por referencia, entonces los arrays se pasan por referencia(dirección). Entonces cuando se llama a un 
method que pide como parámetro un array, se puede modificar el contenido de los elementos del array en el método.
```java
public static void main(String [] a)
{
    char palabra[]={'A','B','C','D'};
    cambiar(palabra)
}    
void cambiar(char c[])
{
    c[2] = 'c';
}
```
## Precauciones
Un method conoce cuántos elementos existen en el array pasado como argumento. Puede
ocurrir que no todos los elementos sean significativos, si esto ocurre hay que 
pasar un segundo argumento que indique el número real de elementos.
```java
int SumaDeEnteros(int []arrayEnteros, int n)
{
    int i, s;
    for (i = s = 0; i < n;)
        s += arrayEnteros[i++];
    return s; 
}
``` 
Aunque `SumaDeEnteros()` conoce la capacidad del array a través del atributo `length`, no sabe 
cuantos elementos hay que sumar y por ello se le pasa el parámetro n con el numero verdadero de 
elementos. Una posible llamada al método es la siguiente:
```java
int lista[] = new int[33];
n = 10;
SumaDeEnteros(lista, n);
```
## Nota
Se pueden utilizar dos formas alternativas para permitir que un método conozca el número de elementos
asociados con un array que se pasa como argumento al método:
- Situar un valor de señal al final del array que indique al método
que se ha de detener el proceso en ese momento.
- pasar un segundo argumento que indique el número de elementos del array.
