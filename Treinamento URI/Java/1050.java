import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	static String Procurar(int a) {
		if(a==61) {
			return "Brasilia";
		}
		if(a==71) {
			return "Salvador";
		}
		if(a==11) {
			return "Sao Paulo";
		}
		if(a==21) {
			return "Rio de Janeiro";
		}
		if(a==32) {
			return "Juiz de Fora";
		}
		if(a==19) {
			return "Campinas";
		}
		if(a==27) {
			return "Vitoria";
		}
		if(a==31) {
			return "Belo Horizonte";
		}
		return "DDD nao cadastrado";
	}
	
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int ddd = input.nextInt();
		
		String destination = Procurar(ddd);
		
		System.out.println(destination);
		
		
		
		

			input.close();
	}
}
