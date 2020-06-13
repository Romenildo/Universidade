import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		
		int testes = input.nextInt();
		
		for(int j = 0; j<testes; j++) {
			int soma=0;
			int n = input.nextInt();
			for(int i = 1; i<n; i++) {
				if(n%i ==0) {
					soma= soma +i;
				}
				
			}
			if(soma == n) {
				System.out.println(n + " eh perfeito");
			}else {
				System.out.println(n + " nao eh perfeito");
			}
		}
		
	}
}
