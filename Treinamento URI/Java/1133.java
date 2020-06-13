import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int y = input.nextInt();
		
		if(x>y) {
			for(int i = y+1; i<x; i++) {
				if(i%5==2 || i%5==3) {
					System.out.println(i);
				}
			}
		}
		if(x<y) {
			for(int j = x+1; j<y; j++) {
				if(j%5==2 || j%5==3) {
					System.out.println(j);
				}
			}
		}
		
		
	}
}
