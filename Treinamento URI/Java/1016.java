import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double distancia = input.nextDouble();
		double tempo = distancia *2;
		
		System.out.printf("%.0f minutos\n",tempo);
		
		
		input.close();
	}
}
