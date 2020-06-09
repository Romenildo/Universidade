import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int a = input.nextInt();
		int b = input.nextInt();
		int c = input.nextInt();
		
		int maiorAB = ((a+b + Math.abs(a - b))/2); // Acha o maior entre a e b
		int maiorABC = ((maiorAB + c + Math.abs(maiorAB-c))/2);//dps com o maior entre a e b, ver se é maior que o c
		
		System.out.printf("%d eh o maior\n",maiorABC);
		
		input.close();
		
	}
}
