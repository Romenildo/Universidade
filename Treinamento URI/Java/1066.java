import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int contPar=0,contInp=0, contPos = 0, contNeg=0, valor;
		
		
		for(int i = 0; i < 5; i++) {
			valor = input.nextInt();
			if(valor%2 == 0) {
				contPar++;
				
			}
			if(valor%2 != 0) {
				contInp++;
				
			}
			if(valor > 0) {
				contPos++;
				
			}
			if(valor <  0) {
				contNeg++;
				
			}
		}
		System.out.println(contPar + " valor(es) par(es)");
		System.out.println(contInp + " valor(es) impar(es)");
		System.out.println(contPos + " valor(es) positivo(s)");
		System.out.println(contNeg + " valor(es) negativo(s)");
		
		
		
		input.close();
		
	}
}
