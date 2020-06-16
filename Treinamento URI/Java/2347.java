import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int pressaodesejada = input.nextInt();
		int pressaolida = input.nextInt();
		
		if(pressaodesejada <= pressaolida) 
		{
			System.out.println((pressaolida-pressaodesejada)*(-1));
		}else 
		{
			System.out.println(pressaodesejada-pressaolida);
		}
	}
}
