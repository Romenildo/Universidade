import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		while(input.hasNext()) {//continua enquanto encontrar conteudo no arquivo caso chegue ao final com valor null ele para
			int num = input.nextInt();
			
			if(num==0) {
				System.out.println("vai ter copa!");
			}else {
				System.out.println("vai ter duas!");
			}
		}
	}
}
