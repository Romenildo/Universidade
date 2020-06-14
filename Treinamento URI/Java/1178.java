import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double[] vetor = new double[100];
		double num = input.nextDouble();
		vetor[0]=num;
		for(int i = 1; i<vetor.length;i++) {
			vetor[i]= vetor[i-1]/2;
		}
		
		
		for(int i=0; i<vetor.length;i++) {
			System.out.printf("N[%d] = %.4f\n",i,vetor[i]);
		}
		
		
	}
}
