import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int y = input.nextInt();
		
		while(x != 0 || y != 0) {
			if(x>0 && y>0) {
				System.out.println("primeiro");
			}
			if(x>0 && y<0) {
				System.out.println("quarto");
			}
			if(x<0 && y>0) {
				System.out.println("segundo");
			}
			if(x< 0 && y<0) {
				System.out.println("terceiro");
			}
			
			
			x = input.nextInt();
			y = input.nextInt();
		}
		
		
		}
	}
