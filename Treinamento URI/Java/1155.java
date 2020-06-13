import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double S=0;
		for(double i = 1; i<=100;i++) {
			S = S + 1/i;
		}
		System.out.printf("%.2f\n",S);
	}
}
