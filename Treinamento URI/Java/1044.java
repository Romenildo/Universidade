import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		if(a==b) {
			System.out.println("Sao Multiplos");
			return;
		}
		if(a>b) {
			if(a%b == 0) {
				System.out.println("Sao Multiplos");
				return;
			}else {
				System.out.println("Nao sao Multiplos");
				return;
			}
		}
		if(b>a) {
			if(b%a == 0) {
				System.out.println("Sao Multiplos");
				return;
			}else {
				System.out.println("Nao sao Multiplos");
				return;
			}
		}
		scan.close();
		
	}
}
