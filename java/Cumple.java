import java.io.*;

class DiaAño {
	private int mes;
	private int dia;

	public DiaAño(int d, int m) {
		dia = d;
		mes = m;
	}
	public boolean igual(DiaAño d) {
		if((dia == d.dia) && (mes == d.mes))
			return true;
		else
			return false;
	}

	// Muestra en pantalla el mes y el dia
	public void visualizar() {
		System.out.println("mes = " + mes + " , dia = " + dia);
	}
}

// Clase principal, con método main
public class Cumple {
	public static void main (String[] ar)throws IOException {
		DiaAño hoy;
		DiaAño cumpleaños;
		int d, m;
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Introduzca fecha de hoy, dia: ");
		d = Integer.parseInt(entrada.readLine());
		System.out.println("Introduzca el numero de mes: ");
		m = Integer.parseInt(entrada.readLine());

		hoy = new DiaAño(d, m);

		System.out.println("Introduzca su fecha de nacimiento, dia: ");
		d = Integer.parseInt(entrada.readLine());
		System.out.println("Introduzca el numero de mes: ");
		m = Integer.parseInt(entrada.readLine());
		cumpleaños = new DiaAño(d,m);

		System.out.println(" La fecha de hoy es ");
		hoy.visualizar();
		System.out.println(" Su fecha de nacimiento es ");
		cumpleaños.visualizar();

		if (hoy.igual(cumpleaños))
			System.out.println(" Feliz cumpleaños !! ");
		else
			System.out.println(" Feliz dia !! ");
	}
}

