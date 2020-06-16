import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int num = 97;
		for(int i =0; i<26; i++)
		{
			System.out.printf("%d e %c\n",num,num);
			num++;
		}
			
	}
}
