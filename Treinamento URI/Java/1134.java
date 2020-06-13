import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int alcool =0, gasolina =0, diesel =0, escolha = 0;
		while(escolha !=4) {
			
			escolha = input.nextInt();
			while(escolha > 4 && escolha < 1) {
				escolha=input.nextInt();
			}
			if(escolha == 1) {
				alcool++;
			}
			if(escolha == 2) {
				gasolina++;
			}
			if(escolha == 3) {
				diesel++;
			}
			
		
		}
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: " + alcool);
		System.out.println("Gasolina: " + gasolina);
		System.out.println("Diesel: " + diesel);
		
		
	}
}
