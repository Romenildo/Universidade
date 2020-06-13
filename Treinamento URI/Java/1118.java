import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int enc =0;
		double media=0;
		while(true){
		while(enc != 2) {
			double num = input.nextDouble();
			if(num < 0 || num > 10) {
				System.out.println("nota invalida");
			}else {
				media = media + num;
				enc = enc+1;
			}
		}
		System.out.printf("media = %.2f\n",media/2);
		System.out.println("novo calculo (1-sim 2-nao)");
		int novo = input.nextInt();
		while(novo != 1) {
			if(novo ==2) {
				break;
			}
			System.out.println("novo calculo (1-sim 2-nao)");
			novo = input.nextInt();
			
		}
		if(novo == 1) {
			enc =0;
			media = 0;
		}else {
			break;
		}
		
	}
		
		}
	}
