import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int puns=0;
		int n = input.nextInt();
		for(int i = 0; i<n; i++) {
			for(int j=0; j<3;j++) {
				puns++;
				System.out.print(puns + " ");
				
			}
			puns++;
			System.out.println("PUM");
		}
	}
}
