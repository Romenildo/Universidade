import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int qtdCursos = input.nextInt();
		
		for(int i =0;i<=qtdCursos; i++)
		{
			String curso = input.nextLine();
		}
		
		System.out.println("Ciencia da Computacao");
	}
}
