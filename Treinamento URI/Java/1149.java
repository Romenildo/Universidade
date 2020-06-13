import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int a = input.nextInt();
		int n = input.nextInt();
		int soma = 0;
		
		while(n<=0) {
			n = input.nextInt();
		}
		for(int i =0 ; i<n;i++) {
			soma = soma + a + i;
		}
		
		System.out.println(soma);
		
	}
}
