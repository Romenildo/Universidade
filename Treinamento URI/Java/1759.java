import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);

		long num = input.nextLong();
		
		for(int i = 1;i<num;i++) {
			System.out.print("Ho ");
		}
		System.out.println("Ho!");
		
		
	}
}
