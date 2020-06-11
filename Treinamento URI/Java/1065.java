import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int cont=0, valor;
		
		
		for(int i = 0; i < 5; i++) {
			valor = input.nextInt();
			if(valor%2 == 0) {
				cont++;
				
			}
		}
		System.out.println(cont + " valores pares");
		
		
		
		
		input.close();
		
	}
}
