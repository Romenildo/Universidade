import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int perguntas = input.nextInt();
		String pergunta;
		
		for(int i = 0; i<=perguntas;i++)
			pergunta = input.nextLine();
		
		for(int i =0; i <perguntas; i++)
			System.out.println("gzuz");
	}
}
