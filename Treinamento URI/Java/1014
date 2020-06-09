import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int distanciaTotal = input.nextInt();//em KM
		double totalCombustivel = input.nextDouble(); // em litros
		
		double distanciaTotalPercorrida = distanciaTotal/totalCombustivel;
		
		System.out.printf("%.3f km/l\n",distanciaTotalPercorrida);
		
		input.close();
	}
}
