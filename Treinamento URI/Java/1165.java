import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		
		int testes = input.nextInt();
		
		for(int i = 0; i< testes ; i++) {
			int num = input.nextInt();
			int cont=0;
			for(int j = num; j>0; j--) {
					if(num%j==0) {
						cont++;
					}
				
				
			}
			if(cont == 2) {
				System.out.println(num + " eh primo");
			}else {
				System.out.println(num + " nao eh primo");
			}
		}
		
	}
}
