package arrays;

public class SumArray {

	static double suma(double[] w) {
		double s = 0.0;
		for (int i = 0; i < w.length; i++)
			s += w[i];
		return s;
	}

	public static void main(String[] args) {
		double res[] = { 16, 84, 65, 31.1, 1651.4, 65.9, 56165.6, 0.002 };
		System.out.println(suma(res));
	}
}
