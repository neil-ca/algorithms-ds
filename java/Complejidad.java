class Complejidad {
	public static void main (String[] args) {
		System.out.println("El # mayor es: " + max(50, 100));
		double x[] = {1,2,3,4,5,6,7,8,9};
		int n = 9;
		writeArray(x, n);
		double d[] = {1,2,3,4,5,6,7,8,9};
		System.out.println(sumArr(d, 9));
	}

	/*
	 * Para determinar la complejidad del metodo:
	 * El metodo consta de una sentencia de selección, cada alternativa tiene
	 * complejidad constante, O(1); entonces, la complejidad del metodo es O(1))
	 * */
	private static double max(double x, double y) {
		if (x > y)
			return x;
		else
			return y;
	}
	/* 
	 * El metodo consta de un bucle que se ejcuta n veces, O(n), El cuerpo del bucle es
	 * la llamada a println(), complejidad constante O(i). La complejidad del metodo es 
	 * O(n)*O(1) = O(n)
	 * */
	public static void writeArray(double[] x, int n) {
		int j;
		for (j = 0; j < n; j++) {
			System.out.println(x[j]);
		}
	}

	public static double sumArr(double[] d, int n) {
		double sum = 0;
		int k = 0;
		while (k < n) {
			sum += d[k];
			if (k == 0)
				k = 2;
			else
				k = 2 * k;
		}
		return sum;
	}

}

