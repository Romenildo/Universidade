import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);

		int codPeca1 = input.nextInt();
		int qtdPecas1 = input.nextInt();
		double valorPeca1 = input.nextDouble();
		int codPeca2 = input.nextInt();
		int qtdPecas2 = input.nextInt();
		double valorPeca2 = input.nextDouble();
		double valorTotal = qtdPecas1 * valorPeca1 + qtdPecas2 * valorPeca2;
		
		System.out.printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);
		
		input.close();
		
		
	}
}
