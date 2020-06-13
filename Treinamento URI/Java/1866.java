import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int c = input.nextInt();
		for(int i= 0; i < c; i++) {
			int um = 1;
			int soma = 0;
			int num = input.nextInt();
			for(int j = 1; j<=num;j++) {
				soma = soma +um;
				um= um *-1;
			}
			System.out.println(soma);
		}
	}
}
