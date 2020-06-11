import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int cont =0;
		
		for(int i=x ;  i <= x*x ; i ++) {
			if(i%2 != 0) {
				
				System.out.println(i);
				cont++;
				if(cont == 6) {
					break;
				}
			}
		}
		
		
		input.close();
		
	}
}
