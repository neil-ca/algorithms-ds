package arrays;

import java.io.*;
class CopyArray {

	/*
	 * Define dos arrays con 15 y 20 elementos. En el array v se guardan los valores
	 * de la funcion e^2x-1 para x >= 1.0; el array w se inicializa cada elemento al ordinal
	 * del elemento. Se copian los 10 ultimos elemntos de v a partir del elemento 11 de w.
	 * */
	public static void main (String[] args) {
		final int N = 15;
		final int M = 20;
		double [] v = new double[N], w = new double[M];
		double x = 1.0;

		for (int i = 0; i < N; x += 0.2, i++)
			v[i] = Math.exp(2*x-1);
		for (int i = 0; i < M; i++)
			w[i] = (double)i;
		// Se imprimen los elememtos del vector v
		System.out.println("\n Valores del vector v");
		for (int j = 0; j < N; j++)
			System.out.println(v[j] + " ");
		System.out.flush();
		// Se realiza la copia de v a w
		System.arraycopy(v, (N-1)-10 +1, w, 10, 10);
		// Se imprimen los elementos del vector w
		System.out.println("\n Valores del vecor w");
		for (int k = 0; k < M; k++)
			System.out.println(w[k] + " ");
		System.out.flush();
	}
}
