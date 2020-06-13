import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int i = 0; i < n ; i++) {
			int cont=0;
			int soma =0;
			int x = input.nextInt();
			int y = input.nextInt();
			
			for(int j = x ;; j++) {
				if(j%2 !=0) {
					soma = soma+j;
					cont++;
				}
				if(cont==y) {
					break;
				}
			}
			System.out.println(soma);
		}
	}
}
