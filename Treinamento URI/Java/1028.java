import java.util.Locale;
import java.util.Scanner;

public class Main {
	
	static int Pilha(int a,int b) {
		if(b==0) {
			return a;
		}else {
			return Pilha(b,a % b);
		}
	}
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int pilha=0;
		int testes = input.nextInt();
		for (int i = 0; i < testes; i++) {
			
			int f1 = input.nextInt();
			int f2 = input.nextInt();
			
				
			System.out.println(Pilha(f1,f2));
		}
	}
}
