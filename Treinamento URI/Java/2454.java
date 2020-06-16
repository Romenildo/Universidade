import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int p = input.nextInt();
		int r = input.nextInt();
		
		if(p==0)
		{
			System.out.println("C");
		}else {
			if(r==0)
				System.out.println("B");
			if(r==1)
				System.out.println("A");
		}
		
	}
}
