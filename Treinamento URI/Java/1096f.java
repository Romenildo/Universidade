import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		
		for(int i=1 ; i<10 ;i++) {
			for(int j=7; j >= 5 ; j--) {
				System.out.printf("I=%d J=%d\n"",i,j);
			}
		}
	}
}
