package arrays;

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class MultipArr {
	public static void main(String[] args) throws Exception {

		final int NUM = 10;
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		int nums[] = new int[NUM];
		int total = 1;
		System.out.println("Introduzca " + NUM + " datos");
		for (int i = 0; i < NUM; i++) {
			nums[i] = Integer.parseInt(entrada.readLine());
		}
		System.out.println("\nLista de numeros: ");
		for (int i = 0; i < NUM; i++) {
			System.out.println(" " + nums[i]);
			total *= nums[i];
		}
		System.out.println("\n El producto de los numeros es " + total);
	}
}
