import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);

		int tam = input.nextInt();
		int[] vetor = new int[tam];
		
		
		for(int i = 0; i<tam;i++) {
			vetor[i] = input.nextInt();
		}
		int pos=0,menor = vetor[0];
		for(int i = 0; i<tam;i++ ) {
			if(vetor[i]<menor) {
				menor = vetor[i];
				pos = i;
			}
		}
		System.out.println("Menor valor: "+ menor);
		System.out.println("Posicao: "+pos);
		
		
	}
}
