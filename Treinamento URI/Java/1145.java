import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int y = input.nextInt();
		int i,j;
		for(i = 1; i<=y;i++) {
			
			System.out.print(i);
			if(i%x ==0) {
				System.out.println("");
			}else {
				System.out.print(" ");
			}
		}
	}
}
