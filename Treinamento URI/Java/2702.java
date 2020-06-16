import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int Dfrango = input.nextInt();//disponiveis
		int Dbife = input.nextInt();
		int Dmassa = input.nextInt();
		
		int Pfrango = input.nextInt();//pedidos
		int Pbife = input.nextInt();
		int Pmassa = input.nextInt();
		
		int quantidadeTotal =0;
		
		if(Pfrango > Dfrango)
			quantidadeTotal += Pfrango - Dfrango;
		
		if(Pbife > Dbife)
			quantidadeTotal += Pbife - Dbife;
		
		if(Pmassa > Dmassa)
			quantidadeTotal += Pmassa - Dmassa;
			
		System.out.println(quantidadeTotal);
	}
}
