# Copia de arrays
En java, los nombres de arrays son referencias a un bloque de memoria distribuida según el numero 
de elementos; por ello, si se hace una asignacion entre dos variables array, éstas se refieren al 
mismo array. Por ejemplo:

```java
double [] r, w;
	r = new double[11];
	w = new double[20];
for (int j = 0; j < r.length; j++)
	r[j] = (double) 2*j-1;
	w = r;
```
Esta asignacion hace ques se pueda acceder a los elementos desde r o desde w, pero no se ha creado
un nuevo almacenamiento para los elementos; los 15 elementos que incialmente se referencian desde w
se han perdido.

Los elementos de un array se pueden asignar a otro array del mismo tipo. Se construye un bucle que accede 
a cada elemento del origen y destino; el array destino debe estar definido con al menos los mismos elemntos.

```java
final int N = 12;
	int v1[] = new int[N], v2[] = new int[N];
	
	for (int i = 0; i < N; i++)
		v1[i] = (int)Math.random()*199 + 1;
	// Los elemtnos de v1 son copiados a v2
	for (int i = 0; i < N; i++)
	  v2[i] = v1[i];
```

Esta copia se puede hacer con un metodo de la clase `System, arraycopy()`. Para copiar los N elementos
que tiene el array v1 en v2 se especifica la posicion inicial del vector desde el que se copia, la posicion
del vector destino donde se inicia la copia y el numero de elementos:

```java
System.out.println(v1, 0, v2, N);
```
System.arraycopy(arrayOrigen, inicioOrigen, arrayDestino, inicioDestino, numElem)
