import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int t1 = input.nextInt();
		int t2 = input.nextInt();
		int t3 = input.nextInt();
		int t4 = input.nextInt();
		
		System.out.println((t1+t2+t3+t4)-3);
		
		
	}
}
