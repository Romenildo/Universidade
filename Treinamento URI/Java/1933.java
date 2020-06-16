import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int cartaA = input.nextInt();
		int cartaB = input.nextInt();
		
		
		if(cartaA >= cartaB)
			System.out.println(cartaA);
		
		if(cartaA < cartaB)
			System.out.println(cartaB);


		
	}
}
