import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int denero = input.nextInt();
		
		int notasDeCem = denero/100;
		int notasDe50 = (denero%100)/50;
		int notasDe20 = ((denero%100)%50)/20;
		int notasDe10 = (((denero%100)%50)%20)/10;
		int notasDe5 = ((((denero%100)%50)%20)%10)/5;
		int notasDe2 = (((((denero%100)%50)%20)%10)%5)/2;
		int notasDe1 = (((((denero%100)%50)%20)%10)%5)%2;
		
		System.out.println(denero);
		System.out.printf("%d nota(s) de R$ 100,00\n",notasDeCem);
		System.out.printf("%d nota(s) de R$ 50,00\n",notasDe50);
		System.out.printf("%d nota(s) de R$ 20,00\n",notasDe20);
		System.out.printf("%d nota(s) de R$ 10,00\n",notasDe10);
		System.out.printf("%d nota(s) de R$ 5,00\n",notasDe5);
		System.out.printf("%d nota(s) de R$ 2,00\n",notasDe2);
		System.out.printf("%d nota(s) de R$ 1,00\n",notasDe1);
		
		input.close();
	}
}
