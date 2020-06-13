import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double n = input.nextDouble();
		int quant =0; 
		double media =0;;
		while(n>0) {
			media = media + n;
			quant++;
			n = input.nextDouble();
		}
		System.out.printf("%.2f\n",media/(double)quant);
	}
}
