import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		int ant=0, prox=0, aux=1;
		
		for(int i = 0; i<n; i++) {
			if(i==0) {
				System.out.print(ant+" ");
			}else {
				if(i==1) {
					System.out.print(aux + " ");
					prox = ant+aux;
				}else {
					if(i==n-1) {
						System.out.println(prox);
					}else {
						System.out.print(prox + " ");
						ant = aux;
						aux = prox;
						prox =ant + aux;
					}
					
				}
			}
			
		}
		
	}
}
