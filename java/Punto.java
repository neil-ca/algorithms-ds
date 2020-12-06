public class Punto {
	/* 
	 * @author Uli
	 * Clase que contiene las coordenadas x e y de un punto en un plano
	 * */
	private int x; 
	private int y;
	public Punto(int x_, int y_) {
		x = x_;
		y = y_;
	}	
	public Punto() {
		x = y = 0; 
	}

	public int leerX() {
		return x;
	}
	public int leerY() {
		return y;
	}
	void fijarX(int valorX) {
		x = valorX;
	}
	void fijarY(int valorY) {
		y = valorY;
	}
	
	public static void main (String[] args) {
		new Punto(2,1);
		Punto p;
		p = new Punto();
		p.fijarX(100);
		System.out.println(" Coordenada x: " + p.leerX());
	}
}


