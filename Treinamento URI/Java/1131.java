import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int qntGrenais =0, empate=0, totTime1=0, totTime2=0, jogarDnv =1;
		while(jogarDnv == 1) {
			int time1 = input.nextInt();//inter
			int time2 = input.nextInt(); //gremio
			qntGrenais = qntGrenais + 1;//+=
			
			if(time1 == time2) {
				empate = empate +1;
			}
			if(time1>time2) {
				totTime1 = totTime1 + 1;
			}
			if(time2>time1) {
				totTime2 = totTime2 + 1;
			}
			
				System.out.println("Novo grenal (1-sim 2-nao)");
				jogarDnv = input.nextInt();
				
		}
		System.out.println( qntGrenais + " grenais");
		System.out.println("Inter:" + totTime1);
		System.out.println("Gremio:" + totTime2);
		System.out.println("Empates:" + empate);
		if(totTime1>totTime2) {
			System.out.println("Inter venceu mais");
		}else {
			if(totTime2>totTime2) {
				System.out.println("Gremio venceu mais");
			}else {
				System.out.println("Nao houve vencedor");
			}
		}
	}
}
