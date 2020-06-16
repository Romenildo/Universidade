import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int distancia =0;
		int testes = input.nextInt();
		
		for(int i = 0; i<testes ; i++)
		{
			int tempo = input.nextInt();
			int velocidadeMedia = input.nextInt();
			distancia += (velocidadeMedia*tempo);
		}
		
		System.out.println(distancia);
		
		
	}
}
