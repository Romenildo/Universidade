import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int N = input.nextInt();// tempo em segundos
		//hora:minutos:segundos
		int totalDeHoras = N/3600;
		int totalDeMinutos = N%3600/60;
		int totalDeSegundos = N%3600%60;
		
		System.out.printf("%d:%d:%d\n",totalDeHoras, totalDeMinutos, totalDeSegundos);
		
		input.close();
		
		
		
	}
}
