import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int i = 1 ; i <= 10000 ; i++) {
			if(i%n == 2) {
				System.out.println(i);
			}
		}
		
		input.close();
		
	}
}
