import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		int fat =1;
		
		for(int i = n; i>0 ; i--) {
			fat = fat * i;
		}
		System.out.println(fat);
		
	}
}
