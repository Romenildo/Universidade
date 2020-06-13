import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int teste = input.nextInt();
		
		for(int i = 0; i< teste; i++) {
			int tempo = 0;
			double populationA = input.nextDouble();
			double populationB = input.nextDouble();
			double crescA = input.nextDouble();
			double crescB = input.nextDouble();
			double aux=0,aux2=0;
			
			while(populationA <= populationB) {
				aux = populationA * crescA/100;
				populationA += Math.floor(aux);
				aux2 = populationB * crescB/100;
				populationB += Math.floor(aux2);
				
				tempo++;
				if(tempo>100) {
					break;
				}
				
			}
			if(tempo>100) {
				System.out.println("Mais de 1 seculo.");
			}else {
				System.out.println(tempo + " anos.");
			}
			
			
		}
	}
}
