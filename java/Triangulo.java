public class Triangulo {
	private double base;
	private double altura;

	public Triangulo datosTriangulo(double base, double altura) {
		this.base = base;
		this.altura = altura;
		return this;
	}
	public Triangulo visualizar() {
		System.out.println(" Base = " + base);
		System.out.println(" Altura = " + altura);
		return this;
	}
	public double area() {
		double a = 0;
		a = base * altura / 2.0;
		System.out.println(a);
		return a;
	}
	public static void main (String[] args) {
		Triangulo t = new Triangulo();
		t.datosTriangulo(30.6, 45.8).visualizar().area();
	}
}
