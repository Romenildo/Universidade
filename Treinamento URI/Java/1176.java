//cuidado com o tamanho dos inteiro no java no fibonacci 60 o int nao aguenta a quantidade deve usar o long int

import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int testes = input.nextInt();

		for(int i =0; i<testes;i++) {
			int num = input.nextInt();
			long[] fib = new long[num+2];
			
			fib[0]=0;
			fib[1]=1;
			for(int j=2; j<=num;j++) {
				fib[j]=fib[j-1] + fib[j-2];	
			}
			
				System.out.printf("Fib(%d) = %d\n",num,fib[num]);
			
		}
		
	}
}
