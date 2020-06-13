import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int z = input.nextInt();
		int soma = 0,cont = 0;
		
		while(z<=x) {
			z = input.nextInt();
		}
		for(int i = 0; i<=z; i++) {
			soma = soma + x + i;
			cont++;
			if(soma>z) {
				break;
			}
		}
		System.out.println(cont);
		
	}
}
