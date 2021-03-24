package arrays;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 * Se lee una lista de, como máximo, 21 números enteros; se calcula su suma y el
 * valor maximo. La entrada de datos termina al introducir la clave -1
 * 
 * @author neil ulises
 */
public class SumMax {
    public static void main(String[] args) throws Exception {
        final int NUM = 21;
        int items[] = new int[NUM];
        int n;
        n = entrada(items); // devuelve el numero real de los elementos
        System.out.println("\nSuma de los elementos: " + sumaEnteros(items, n));
        System.out.println("\nNumero maximo: " + maximo(items, n));
    }

    static int entrada(int w[]) throws Exception {
        int j = 0, x;
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Introduzca un maximo de " + w.length + "datos:,\nTerminar con -1");
        do {
            x = Integer.parseInt(reader.readLine());
            if (x != -1)
                w[j++] = x;
        } while ((j < w.length) && (x != -1));
        return j;
    }

    static int sumaEnteros(int w[], int n) throws Exception {
        int i, s = 0;
        for (i = 0; i < n; i++)
            s += w[i];
        return s;
    }

    static int maximo(int w[], int n) throws Exception {
        int i, mx;
        mx = w[0];
        for (i = 0; i < n; i++)
            mx = (w[i] > mx ? w[i] : mx);
        return mx;
    }
}
