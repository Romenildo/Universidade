import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		int hInicio = scan.nextInt();
		int mInicio = scan.nextInt();
		int hFim = scan.nextInt();
		int mFim = scan.nextInt();
		 
		int hora = 24-hInicio+hFim;
		int minutos = 60-mInicio+mFim;
		
		if(hora>24) {
			hora = hora - 24;
		}
		if(minutos >= 60) {
			minutos = minutos - 60;
		}
		if(mInicio> mFim ) {
			//se eu jogar das 6:03 ate as 7:02 jogarei 59 min e nao 1h e 59 min
			hora = hora - 1;
		}
		if(hInicio == hFim && mInicio < mFim) {
			// se eu jogar das 7 ate as 7 1 eu jogarei 1 min e nao 24 h e 1 min
			hora = hora - 24;
		}
		
		System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minutos);
		
		
		scan.close();
		
	}
}
