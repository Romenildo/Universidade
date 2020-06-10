import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		double a = scan.nextDouble();
		double b = scan.nextDouble();
		double c = scan.nextDouble();
		
		if(a < b+c && b < c+a && c < a+b) {
			System.out.printf("Perimetro = %.1f\n",a + b + c);
		}else {
			System.out.printf("Area = %.1f\n",((a+b)*c)/2);
		}
		scan.close();
	}
	
}
