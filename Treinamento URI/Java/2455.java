import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int p1 = input.nextInt();
		int c1 = input.nextInt();
		int p2 = input.nextInt();
		int c2 = input.nextInt();
		
		if(p1*c1 == p2*c2)
			System.out.println("0");
		if(p1*c1 > p2*c2)
			System.out.println("-1");
		if(p1*c1 < p2*c2)
			System.out.println("1");
		
	}
}
