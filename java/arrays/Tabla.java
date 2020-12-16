package arrays;

import java.io.*;

/**
 * Da entrada y visualizacion de un array 2D
 * @author Neil Ulises
 * */
class Tabla {
	public static void main (String[] args) throws Exception {
		int v[][] = new int[3][5];
		leer(v);
		visualizar(v);
	}

	static void leer(int a[][])throws Exception
	{
		int i, j;
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Entrada de datos de la matriz");
		for (i=0;i < a.length; i++) {
			System.out.println("Fila: " + i);
			for (j = 0; j < a[i].length; j++)
				a[i][j] = Integer.parseInt(entrada.readLine());
		}
	}

	static void visualizar(int a[][])
	{
		int i, j;
		System.out.println("\n\t Matriz leida\n");
		for (i = 0; i < a.length; i++)
		{
			for (j = 0; j < a[i].length; j++)
				System.out.print(a[i][j] + " ");
			System.out.println(" ");
		}
	}
}

