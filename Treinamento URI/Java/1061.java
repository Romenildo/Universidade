import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		String diaS = input.next();
		int diaI = input.nextInt();
		int hhi = input.nextInt();
		String lixo1 = input.next();// dois pontinhos :
		int mmi = input.nextInt();
		lixo1 = input.next();
		int ssi = input.nextInt();
		
		//FINAl
		diaS = input.next();
		int diaF = input.nextInt();
		int hhf = input.nextInt();
		lixo1 = input.next();// dois pontinhos :
		int mmf = input.nextInt();
		lixo1 = input.next();
		int ssf = input.nextInt();
		
		
		int DIA, HORA, MIN, SEG;//ja calculado
		
		DIA = diaF - diaI;
		
		HORA = 24 - hhi + hhf;
		if(HORA >= 24) {
			HORA = HORA - 24;
		}
		
		MIN = 60 - mmi + mmf;
		if(MIN >= 60) {
			MIN = MIN - 60;
		}
		
		SEG = 60 - ssi + ssf;
		if(SEG >= 60) {
			SEG = SEG - 60;
		}
		//TRANSFORMAR MIN EM SEGUNDOS//hora em minutos e dia em minutos
		
		if(ssi > ssf) {
			MIN = MIN -1;
		}
		if(mmi > mmf) {
			HORA = HORA -1;
		}
		if(hhi > hhf) {
			DIA = DIA -1;
		}
		
		//prints
		System.out.println(DIA + " dia(s)");
		System.out.println(HORA + " hora(s)");
		System.out.println(MIN + " minuto(s)");
		System.out.println(SEG + " segundo(s)");
		
		
		
		
		input.close();
		
	}
}
