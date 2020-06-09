import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double a = input.nextDouble();
		double b = input.nextDouble();
		double c = input.nextDouble();
		double delta = Math.pow(b,2)- 4*a*c;
		if(delta > 0 && a>0) {
			//duas raizes
			double R1 = (-b + Math.sqrt(delta))/(2*a);
			double R2 = (-b - Math.sqrt(delta))/(2*a);
			System.out.printf("R1 = %.5f\n",R1);
			System.out.printf("R2 = %.5f\n",R2);
		}else {
			if(delta==0) {
				//raizes iguais
				System.out.println("Impossivel calcular");
				
			}else {
				//nao valido
				System.out.println("Impossivel calcular");
			}
		}
		
		
		input.close();
	}
}
