import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int senha = input.nextInt();
		
		
		while(senha != 2002) {
			System.out.println("Senha Invalida");
			senha = input.nextInt();
		}
		System.out.println("Acesso Permitido");
		
		}
	}
