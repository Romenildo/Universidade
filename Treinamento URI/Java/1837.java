import java.util.Locale;
import java.util.Scanner;


public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int a = input.nextInt();
		int b = input.nextInt();
		int q, r;
		if(a>=0) {//se a nao for negativo
			q = a/b;
			r = a%b;
		}else {// se a for negativo
			int aux=0,aux2=0, i=0;
			if(b<0) {//verifico se b for negativo inverter para positivo para rodar no for
				aux = b*-1;
			}else {
				aux =b;
			}
			for(; i<aux;i++) {//for testanto os valores divisivel por b ; basicamente testando valores na formula dada
				aux2 = a -i;
				if(aux2%b==0) {
					break;
				}
			}
			q = aux2/b;
			r= i;
		}
		
		
		System.out.printf("%d %d\n",q,r);
		
	}
}
