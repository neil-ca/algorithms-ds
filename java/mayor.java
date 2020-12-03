class Nomayor {
	public static void main (String[] args) {
		System.out.println("el # mayor es: " + mayor(50, 100));
	}

	/* 
	 * Para determinar la complejidad del metodo:
	 * El metodo consta de una sentencia de selección, cada alternativa tiene
	 * complejidad constante, O(1); entonces, la complejidad del metodo es O(1))
	 * */
		private static double mayor(double x, double y) {
			if (x > y)
				return x;
			else
				return y;
	}
}
