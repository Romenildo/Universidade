import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int m = input.nextInt();
		int n = input.nextInt();
		
		while(m != n) {
			if(m>n) {
				System.out.println("Decrescente");
			}else {
				System.out.println("Crescente");
			}
			
			m = input.nextInt();
			n = input.nextInt();
		}
		
		}
	}
