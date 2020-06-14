import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);

		double[][]m = new double[12][12];
		int linha = input.nextInt();
		String escolha = input.next();	
		double media =0,soma=0;
		
		for(int i =0 ; i<12;i++) {
			for(int j=0;j<12;j++){
				m[i][j]= input.nextDouble();
			}
		}
		
		for(int i=0;i<12;i++) {
			soma = soma + m[linha][i];
		}
		media =soma/12;
		
		if(escolha.equals("S")) {
			System.out.println(soma);
		}
		if(escolha.equals("M")) {
			System.out.printf("%.1f\n",media);
		}
		
		
	}
}
