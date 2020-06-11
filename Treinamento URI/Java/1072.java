import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int contIn =0, contOut=0;
		
		for(int i = 0 ; i < x ; i++) {
			int num = input.nextInt();
			for(int j = 10 ; j <= 20; j++ ) {
				if(num == j) {
					contIn++;
				}
			}
		}
		contOut = x - contIn;
		System.out.println(contIn + " in");
		System.out.println(contOut + " out");
		
		input.close();
		
	}
}
