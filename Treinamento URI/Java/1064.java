import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int cont=0;
		double valor, media = 0;
		
		for(int i = 0; i < 6; i++) {
			valor = input.nextDouble();
			if(valor > 0) {
				cont++;
				media = media + valor;
			}
		}
		System.out.println(cont + " valores positivos");
		System.out.printf("%.1f\n", media/cont);
		
		
		
		input.close();
		
	}
}
