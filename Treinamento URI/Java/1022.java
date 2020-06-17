import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int numerador=0, denominador=0;
		
		
		int testes = input.nextInt();
		for (int i = 0; i < testes; i++) {
			int N1 = input.nextInt();
			String barra = input.next();
			int D1 = input.nextInt();
			
			String comando = input.next();
			
			int N2 = input.nextInt();
			String barra2 = input.next();
			int D2 = input.nextInt();
			
			if(comando.equals("+")) {
				numerador = (N1*D2 + N2*D1); 
				denominador = (D1*D2);
			}
			if(comando.equals("-")) {
				numerador = (N1*D2 - N2*D1); 
				denominador = (D1*D2);
			}
			if(comando.equals("*")) {
				numerador = (N1*N2);
				denominador = (D1*D2);
			}
			if(comando.equals("/")) {
				numerador = (N1*D2);
				denominador = (N2*D1);
			}
			
			int Snumerador=numerador, Sdenominador=denominador;
			
			for (int j = 2; j < denominador+1; j++) {
				if(numerador%j==0 && denominador%j==0) {
					Snumerador = numerador/j;
					Sdenominador= denominador/j;
				}
			}
			System.out.printf("%d/%d = %d/%d\n",numerador,denominador,Snumerador,Sdenominador);
				
				
			
		}
	}
}
