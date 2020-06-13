import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int y = input.nextInt();
		int soma =0;
		if(x>y) {
			for(int i = y; i<=x; i++) {
				if(i%13!=0) {
					soma = soma + i;
				}
			}
		}
		if(x<y) {
			for(int j = x; j<=y; j++) {
				if(j%13!=0) {
					soma = soma + j;
				}
			}
		}
		System.out.println(soma);
		
		
	}
}
