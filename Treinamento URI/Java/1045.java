import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		double x = scan.nextDouble();
		double y = scan.nextDouble();
		double z = scan.nextDouble();
		double a,b,c;
		//ORDENAR
		if(x>y && x>z) {
			a = x;
			if(y>z) {
				b=y;
				c=z;
			}else {
				b=z;
				c=y;
			}
		}else{
			if(y>z) {
				a=y;
				if(x>z) {
					b=x;
					c=z;
				}else {
					b=z;
					c=x;
				}
			}else {
				a=z;
				if(x>y) {
					b=x;
					c=y;
				}else {
					b=y;
					c=x;
				}
			}
		}
		
		//TRIANGULOS
		//TESTE System.out.printf("%.2f %.2f %.2f",a,b,c);
		if(a>= b+c) {
			System.out.println("NAO FORMA TRIANGULO");
			return;
		}
		if(a*a==(b*b + c*c)) {
			System.out.println("TRIANGULO RETANGULO");
		}
		if(a*a > (b*b + c*c)) {
			
			System.out.println("TRIANGULO OBTUSANGULO");
		}
		if(a*a < (b*b + c*c)) {
			System.out.println("TRIANGULO ACUTANGULO");
		}
		if(a==b && b==c && a==c) {
			System.out.println("TRIANGULO EQUILATERO");
		}
		if((a==b && a!=c && b!=c)||(b==c && b!=a && c!=a)|| (c==a && c!=b && a!=b)) {
			System.out.println("TRIANGULO ISOSCELES");
		}
		
		
		
		scan.close();
		
	}
}
