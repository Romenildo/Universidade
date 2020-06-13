import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int m = input.nextInt();
		int n = input.nextInt();
		
		while(m > 0 && n > 0) {
			int soma = 0;
			if(m>n) {
				for(int i = n; i<=m;i++) {
					System.out.print(i + " ");
					soma = soma + i;
				}
			}else {
				for(int j = m; j <= n ; j++) {
					System.out.print(j + " ");
					soma = soma + j;
				}
			}
			System.out.println("Sum="+soma);
			
			m = input.nextInt();
			n = input.nextInt();
		}
		
		}
	}
