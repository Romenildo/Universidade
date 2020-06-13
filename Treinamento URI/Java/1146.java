import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int n;
		
		do {
			n = input.nextInt();
			
			for(int i =1;i<n;i++) {
				System.out.print(i +" ");
			}
			if(n != 0) {
			System.out.println(n);
			}
		}while(n != 0);
	}
}
