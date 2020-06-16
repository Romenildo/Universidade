import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int numeroDePessoas = input.nextInt();
		
		System.out.println((numeroDePessoas*2)*2);
	}
}
