import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int cobaiasTotal=0, coelhos=0, ratos=0, sapos =0;
		int n = input.nextInt();
		
		for(int i =0; i<n;i++) {
			int quantid = input.nextInt();
			String nome = input.next();
			cobaiasTotal = cobaiasTotal + quantid;
			
			if(nome.equals("C")) {
				coelhos = coelhos + quantid;
			}
			if(nome.equals("R")) {
				ratos = ratos + quantid;
			}
			if(nome.equals("S")) {
				sapos = sapos + quantid;
			}
			
		}
		System.out.println("Total: " + cobaiasTotal + " cobaias");
		System.out.println("Total de coelhos: " + coelhos);
		System.out.println("Total de ratos: " + ratos);
		System.out.println("Total de sapos: " + sapos);
		System.out.printf("Percentual de coelhos: %.2f %%\n",(double)coelhos/(double)cobaiasTotal * 100);
		System.out.printf("Percentual de ratos: %.2f %%\n",(double)ratos/(double)cobaiasTotal * 100);
		System.out.printf("Percentual de sapos: %.2f %%\n",(double)sapos/(double)cobaiasTotal * 100);
		
		input.close();
		
	}
}
