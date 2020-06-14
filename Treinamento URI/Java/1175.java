import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int[] vetor = new int[20];
		int aux,fin=vetor.length-1;
		
		for(int i=0; i<vetor.length; i++) {
			vetor[i]= input.nextInt();
		}
		for(int i =0; i<vetor.length/2; i++) {
			aux = vetor[i];
			vetor[i]=vetor[fin];
			vetor[fin]=aux;
			fin--;
		}
		for(int i =0; i<vetor.length;i++) {
			System.out.printf("N[%d] = %d\n",i,vetor[i]);
		}
		
	}
}
