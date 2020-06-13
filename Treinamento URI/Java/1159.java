import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		int soma=0,cont=0;
		while(n != 0) {
			for(int i=n; i<=n+10;i++) {
				if(i%2==0) {
					soma = soma + i;
					cont++;
					
					if(cont==5) {
						break;
					}
				}
			}
			System.out.println(soma);
			soma=cont=0;
			n = input.nextInt();
			
		}
	}
}
