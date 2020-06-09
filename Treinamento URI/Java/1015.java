import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double eixoxP1 = input.nextDouble();
		double eixoyP1 = input.nextDouble();
		double eixoxP2 = input.nextDouble();
		double eixoyP2 = input.nextDouble();
		
		double distancia = Math.sqrt((Math.pow((eixoxP2-eixoxP1),2))+(Math.pow((eixoyP2-eixoyP1),2)));
		
		System.out.printf("%.4f\n",distancia);
		
		input.close();
	}
}
