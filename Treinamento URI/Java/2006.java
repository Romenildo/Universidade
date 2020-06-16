import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int tipoDoCha = input.nextInt();
		int acertou = 0;
		
		int []participante = new int[5];
		for(int i =0; i<5;i++)
		{
			participante[i]=input.nextInt();
			
			if(participante[i]==tipoDoCha)
				acertou++;		
		}
		
		System.out.println(acertou);
		
	}
}
