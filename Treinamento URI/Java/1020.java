import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int idade = input.nextInt();//idade em dias
		
		int ano = idade/365;
		int mes = (idade%365)/30;
		int dias = (idade%365)%30;
		
		System.out.printf("%d ano(s)\n",ano);
		System.out.printf("%d mes(es)\n",mes);
		System.out.printf("%d dia(s)\n",dias);
		
		input.close();
		
		
		
	}
}
