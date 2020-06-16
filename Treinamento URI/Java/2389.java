import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int telescopio = input.nextInt();
		int enxergavel =0;
		int estrelas = input.nextInt();
		
		for(int i = 0; i <estrelas; i++)
		{
			int fotonsEstrelaN = input.nextInt();
			if(fotonsEstrelaN * telescopio >= 40000000)
				enxergavel++;
		}
		
		System.out.println(enxergavel);
		
	}
}
