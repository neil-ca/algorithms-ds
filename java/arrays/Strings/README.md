## Inicialización con un constructor de String
- Constructor de cadena vacía. 
    Crea una cadena sin caracteres, es una referencia a una cadena vacía.
```java
String c;
c = new String();
```
- Constructor de cadena a partir de otra cadena. Se crea un objeto con otro ya creado
```java
String c1, c2;
c2 = new String(c1);
```  
- Constructor de cadena a partir de un objeto `StringBuffer`. 
  Los objetos de la clase StringBuffer tienen la particularidad de que son modificables,
  mientras que los objetos String no pueden cambiarse una vez creados. Con este 
  constructor, una cadena (String) se crea a partir de otro objeto StringBuffer. Por ejemplo:
 ```java
String cc;
StringBuffer bf = new StringBuffer("test")
cc = new String(bf);
``` 
- Constructor de cadena a partir de un array de caracteres.
La cadena se inicializa con los elementos de un array de caracteres pasado com argumento.
```java
String cdc;
char vc[]
cdc = new String(vc);
```   
## Métodos de String
La clase String dispone de un amplio conjunto de métodos para realizar operaciones con cadenas. 
Conviene recordar que una vez creada, la cadena de tipo String no puede modificarse, por
eso, generalmente, estos métodos devuelven otra referencia con la nueva cadena.
![alt text](https://www.arkaitzgarro.com/java/images/cap10/string2.png)
Todos los métodos 
[aqui.](https://docs.oracle.com/en/java/javase/15/docs/api/java.base/java/lang/String.html)

## Clase Vector
Java proporciona un grupo de clases que almacenan secuencias de objetos de cualquier tipo, son
las colecciones. Se diferencian en la forma de organizar los objetos y, en consecuencia, la manera
de recuperarlos. La clase Vector (paquete java.util ) es una de estas colecciones, tiene un
comportamiento similar a un array unidimensional.
Un Vector guarda objetos (referencias) de cualquier tipo y crece dinámicamente, sin necesidad de 
tener que programar operaciones adicionales. El array donde almacena los elementos es
de tipo Object. Su declaración:
```java
protected Object elementData[]

// Crear un vector
public Vector() 
public Vector(int capacidad)
public Vector(Collection org) // Crea un vector con los elementos de org
```   
### Insertar elementos
La clase dispone de diferentes métodos para insertar o añadir elementos al vector. Los elementos
que se metan en el vector deber ser objetos.
```java
boolean add (Object ob); // lo añade a continuacion del ultimo

void addElement(Object ob); 

void insertElement(Object ob, int p); 
```  
### Acceso a un elemento
Se accede a un elemento del vector por la posición que ocupa. Los métodos de acceso devuelven
el elemento con el tipo Object, por esa razón es posible que sea necesario realizar una conversión al tipo del objeto.
```java
Object elementAt(int p); //devuelve el elemento cuya posición es p .
Object getElement(int p); //devuelve el elemento cuya posición es p .
Object get(int p); 	// devuelve el elemento cuya posición es p.
int size();	// devuelve el número de elementos.
```  
### Eliminar un elemento
Un vector es una estructura dinámica, crece o decrece según se añaden o se eliminan objetos. Se
puede eliminar un elemento de distintas formas, por ejemplo, por la posición que ocupa (índice);
a partir de esa posición, el resto de elementos del vector se mueven una posición a la izquierda
y disminuye el número de elementos. Otra forma de eliminar es transmitiendo el objeto que se
desea retirar del vector. También hay métodos de la clase para eliminar todos los elementos que
son iguales a una colección; incluso se pueden eliminar todos los elementos.
```java
void removeEementAt(int indice);

boolean void removeElement(Object op);

void removeAll(Collection gr);
void removeAllElemnts();
```  
### Búsqueda
Los diversos métodos de búsqueda de Vector devuelven la posición de la primera ocurrencia del
objeto buscado, o bien verdadero-falso según el éxito de la búsqueda.
```java
boolean contains(Object op); //devuelve true si encuentra op.
int indexOf(Object op); 	// devuelve la primera posicion de op, -1 si no esta
```