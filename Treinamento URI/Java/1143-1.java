import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int nume=1,elevado=1,resultado1=0,resultado2=0,resultado3=0;
		int quant = input.nextInt();
		for(int i = 0; i<quant; i++) {
			
			for(int j=0; j<3;j++) {
				if(elevado==1) {
					resultado1= (int)Math.pow(nume, elevado);
				}
				if(elevado==2) {
					resultado2= (int)Math.pow(nume, elevado);
				}
				if(elevado==3) {
					resultado3= (int)Math.pow(nume, elevado);
				}
				
				elevado++;
				
			}
			System.out.printf("%d %d %d \n", resultado1, resultado2, resultado3);
			elevado=1;
			nume++;
			
		}
	}
}
