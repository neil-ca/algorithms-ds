package arrays.Strings;

import java.util.Vector;

/**
 * Utilizar un vector para guardar indistintamente, números racionales
 * y números complejos
 * @author neil ulises
 * */
abstract class Numero
{
    protected int x, y;
    public Numero() {}
    public Numero(int _x, int _y) {
        x= _x;
        y= _y;
    }
    abstract void mostrar();
}

class Racional extends Numero {
    public Racional() {}
    public Racional(int _x, int _y) {
        super(_x, _y);
    }
    void mostrar() {
        System.out.println(x + "/" + y);
    }
}
class Complejo extends Numero {
    public Complejo(){}
    public Complejo(int _x, int _y) {
        super(_x, _y);
    }
    void mostrar() {
        System.out.println("( " + x +  "," + y + ")");
    }
}
// Implementing...
public class VectorNumero {
    static final int N = 10;

    public static void main(String[] args) {
        Vector num = new Vector();
        for(int i = 1; i <= N; i++) {
            Numero q;
            q = new Racional(3 * i, 3 * i % 7 + 1);
            num.addElement(q);
            q = new Complejo(3 * i % 7, 3 * i - 5);
            num.addElement(q);
        }
        // recuperación de los elementos
        int k;
        k = num.size();
        for (int i = 1; i <= N; i++) {
            Numero q;
            q = (Numero) num.elementAt(i);
            q.mostrar();
        }
    }
}
