import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int[] vetor = new int[1000];
		int num = input.nextInt();
		int aux=0;
		for(int i = 0; i<vetor.length;i++) {
			vetor[i]=aux;
			aux++;
			if(aux == num) {
				aux=0;
			}
		}
		for(int i=0; i<vetor.length;i++) {
			System.out.printf("N[%d] = %d\n",i,vetor[i]);
		}
		
		
	}
}
