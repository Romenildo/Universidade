import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double S=0, k = 1;
		for(double i = 1; i<=39;i=i+2) {
			S = S +  i/k;
			k=k*2;
		}
		System.out.printf("%.2f\n",S);
	}
}
