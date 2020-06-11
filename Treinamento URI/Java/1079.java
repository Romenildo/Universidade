import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		
		for(int i = 0; i < n ; i++) {
			int pond = 2;
			double media = 0;
			for(int j = 0; j < 3; j++) {	
				double nota = input.nextDouble();
				if(j == 2) {
					pond = 5;
				}
				media = media + (nota * pond);
				pond++;
			}
			System.out.printf("%.1f\n",media/10);
		}
		
		input.close();
		
	}
}
