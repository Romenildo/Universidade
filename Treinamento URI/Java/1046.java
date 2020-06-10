import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		int inicio = scan.nextInt();
		int fim = scan.nextInt();
		
		int hora = 24-inicio+fim;
		if(hora<=24) {
			System.out.printf("O JOGO DUROU %d HORA(S)\n",hora);
		}else {
			System.out.printf("O JOGO DUROU %d HORA(S)\n",hora-24);
		}
		
		
		scan.close();
		
	}
}
