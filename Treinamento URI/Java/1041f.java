import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	static boolean Origem(double a, double b) {
		//verifica se os pontos entao na origem x=0 e y=0
		if(a==0 && b==0) {
			System.out.println("Origem");
			return true;
		}else {
			return false;
		}	
	}
	
	static boolean eixoXY(double a, double b) {
		//verifica se o ponto esta no eixo X
		if(a == 0) {
			System.out.println("Eixo Y");
			return true;
		}else {
			if(b == 0) {
				System.out.println("Eixo X");
				return true;
			}else {
				return false;
			}
		}
	}
	
	static boolean quadrantes(double x, double y) {
		if(x>0 && y>0) {
			System.out.println("Q1");
			return true;
		}
		if(x<0 && y>0) {
			System.out.println("Q2");
			return true;
		}
		if(x>0 && y<0) {
			System.out.println("Q4");
			return true;
		}
		if(x<0 && y<0) {
			System.out.println("Q3");
			return true;
		}
		return false;
	}
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		double x = scan.nextDouble();
		double y = scan.nextDouble();
		
		if(Origem(x,y)) {
			return;
		}
		if(eixoXY(x,y)) {
			return;
		}
		if(quadrantes(x,y)) {
			return;
		}
		scan.close();
	}
}
