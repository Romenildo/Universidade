import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int tempoGasto = input.nextInt(); //tempo gato na viagem em horas
		int velocidadeMedia = input.nextInt(); //velocidade media do carro
		
		double litros = (double)(tempoGasto* velocidadeMedia) /12;
		
		System.out.printf("%.3f\n",litros);
		
		
		input.close();
	}
}
