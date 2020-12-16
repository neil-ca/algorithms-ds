package arrays.Strings;
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
