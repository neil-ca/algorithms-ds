class BaseSobre {
    public void escribe(int k)
    {
        System.out.println("Metodo clase base, argumento entero: ");
        System.out.println(k);
    }
    public void escribe(String a) {
        System.out.println("Metodo clase base, argumento cadena: ");
        System.out.println(a);
    }
}

class DerivaSobre extends BaseSobre {
    public void escribe(String a, int n) {
        System.out.println("Metodo clase derivada, dos argumentos: ");
        System.out.println(a + " " + n);
    }
}
public class PruebaSobre {
    public static void main(String[] args) {
        DerivaSobre dr = new DerivaSobre();
        dr.escribe("cadena constante ", 50);
        dr.escribe("cadena constante ");
        dr.escribe(50);
    }
}
