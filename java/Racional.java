public class Racional {
	private int numerador;
	private int denominador;

	public Racional() {
		numerador = 0;
		denominador = 1;
	}
	public int leerN() {return numerador;}
	public int leerD() {return denominador;}
	public void fijar (int n, int d) {
		numerador = n;
		denominador = d;
	}
	public static void main (String[] args) {
		Racional ra = new Racional();
		ra.fijar(50, 20);
		System.out.println(ra.leerN() + "/" + ra.leerD());
	}
}
