import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int porcaoCurupira = input.nextInt() * 300;
		int porcaoBoiTata = input.nextInt() * 1500;
		int porcaoBoto = input.nextInt() * 600;
		int porcaoMapinguari = input.nextInt() * 1000;
		int porcaoIara = input.nextInt() * 150;
		int porcaoDonaChica = 225;	
		
		int porcaoTotal = porcaoCurupira + porcaoBoiTata + porcaoBoto + porcaoMapinguari + porcaoIara + porcaoDonaChica;
		
		System.out.println(porcaoTotal);
		
		
		
	}
}
