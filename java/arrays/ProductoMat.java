package arrays;

import java.io.*;

/**
 * Se lee un array y se escribe el producto de los elementos positivos.
 * 
 * @author Neil Ulises
 */

class ProductoMat {
    static BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {
        double v[];
        int n;
        System.out.println("Numero de elementos: ");
        n = Integer.parseInt(entrada.readLine());
        v = new double[n];
        leerArray(v);
        System.out.println("El producto de los elementos = " + producto(v));
    }

    static void leerArray(double a[]) throws Exception {
        int n = 0;
        System.out.println("Introduzca " + a.length + " datos");
        for (; n < a.length; n++) {
            a[n] = Double.valueOf(entrada.readLine()).doubleValue();
        }
    }

    static double producto(double w[]) {
        double pd = 1.0;
        int n = w.length - 1;
        while (n > 0)
            if (w[n] > 0.0)
                pd *= w[n--];
            else
                n--;
        return pd;
    }
}
