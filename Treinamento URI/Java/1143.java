import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int nume=1,elevado=1,resultado=0;
		int quant = input.nextInt();
		for(int i = 0; i<quant; i++) {
			
			for(int j=0; j<3;j++) {
				resultado= (int)Math.pow(nume, elevado);
				System.out.print(resultado + " ");
				elevado++;
				
			}
			System.out.println("");
			elevado=1;
			nume++;
			
		}
	}
}
