import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double pi = 3.14159;
		double raio = input.nextDouble();
		double area = (4.0/3.0)*pi*(raio*raio*raio);
		
		System.out.printf("VOLUME = %.3f\n",area);
		
		input.close();
		
	}
}
