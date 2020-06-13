import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int i =0; i<n ; i++) {
			int a = input.nextInt();
			int b = input.nextInt();
			int soma = 0;
			if(a>b) {
				a = a-1;
				for(int j = a; j>b; j--){
					if(j%2 != 0) {
						soma = soma + j;
					}
				}
			}else {
				a = a+1;
				for(int k = a; k<b; k++) {
					if(k%2 != 0) {
						soma = soma + k;
					}
				}
			}
			System.out.println(soma);
			
			
		}
	}
}
