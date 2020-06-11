import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int a = input.nextInt();
		int b = input.nextInt();
		int x=0,y=0,soma = 0;
		
		if(a>b) {
			 x = b;
			 y = a;
		}else {
			x = a;
			y = b;
		}
		for(x = x+1 ; x < y ; x++) {
			if(x%2 != 0) {
				soma = soma + x;
			}
		}
		System.out.println(soma);
		
		input.close();
		
	}
}
