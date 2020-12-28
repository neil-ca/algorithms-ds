package arrays;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.stream.Stream;

public class Gastos {
    public static void main (String[] args) {
      List<Integer> gastos = new ArrayList<Integer>();
	gastos.add(112);
	gastos.add(200);
	gastos.add(300);
  	gastos.stream().reduce(Integer::sum).ifPresent(System.out::println);	

      List<String> nombres = new ArrayList<String>();
        nombres.add(" Juan ");
        nombres.add(" Mario ");

        nombres.add(" Paula");
        nombres.stream().reduce(String::concat).ifPresent(System.out::println);  
    }
} 
