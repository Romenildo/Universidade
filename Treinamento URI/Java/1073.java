import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int j,i = 1; i <= n;  i++) {
			if(i%2==0) {
				j = i;
				System.out.printf("%d^2 = %d\n", i, j*j);
			}
		}
		
		input.close();
		
	}
}
