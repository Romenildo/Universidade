import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int i =0; i < n; i ++) {
			int valor = input.nextInt();
			if(valor == 0) {
				System.out.println("NULL");
			}
			if(valor > 0 && valor%2 == 0) {
				System.out.println("EVEN POSITIVE");
			}
			if(valor > 0 && valor%2 != 0) {
				System.out.println("ODD POSITIVE");
			}
			if(valor < 0 && valor%2 == 0) {
				System.out.println("EVEN NEGATIVE");
			}
			if(valor < 0 && valor%2 != 0) {
				System.out.println("ODD NEGATIVE");
			}
			
		}
		
		input.close();
		
	}
}
