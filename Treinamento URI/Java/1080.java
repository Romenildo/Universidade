import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		int maior = n, pos = 1;
		for(int i = 2; i<= 100; i++) {
			n = input.nextInt();
			
			if(n > maior) {
				maior = n;
				pos = i;
			}
		}
		System.out.println(maior);
		System.out.println(pos);

		
		
		input.close();
		
	}
}
