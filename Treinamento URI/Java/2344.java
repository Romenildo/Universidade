import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int num = input.nextInt();
		
		if(num ==0)
			System.out.println("E");
		if(num>0 && num<=35)
			System.out.println("D");
		if(num>35 && num<=60)
			System.out.println("C");
		if(num>60 && num<=85)
			System.out.println("B");
		if(num>85)
			System.out.println("A");
		
	}
}
