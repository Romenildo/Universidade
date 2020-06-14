import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double[][]m = new double[12][12];
		String escolha = input.next();
		double soma=0, media=0,cont=0;
		
		
		//preencher
		for(int i =0; i<12;i++) {
			for(int j = 0; j<12;j++) {
				m[i][j]= input.nextDouble();
			}
		}
		//varrer
		int aux = 1;
		for(int i =11; i>0;i--) {
			for(int j = aux; j<12;j++) {
				soma = soma + m[i][j];
				cont++;
				
			}
			
			aux++;
		}
		
		
		media = soma/cont;
		if(escolha.equals("S")) {
			System.out.println(soma);
		}
		if(escolha.equals("M")) {
			System.out.printf("%.1f\n",media);
		}
	}
}
