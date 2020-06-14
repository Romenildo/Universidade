import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double[] vetor = new double[100];
		
		for(int i = 0; i<vetor.length; i++) {
			vetor[i]= input.nextDouble();
		}
		for(int i= 0; i<vetor.length;i++) {
			if(vetor[i]<=10) {
				System.out.printf("A[%d] = %.1f\n",i,vetor[i]);
			}
			
		}
	}
}
