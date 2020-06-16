import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int quebradas =0;
		int bandejas = input.nextInt();
		
		for(int i =0;i<bandejas; i++) 
		{
			int latas = input.nextInt();
			int copos = input.nextInt();
			
			if(latas>copos)
				quebradas += copos;
		}
		System.out.println(quebradas);
	}
}
