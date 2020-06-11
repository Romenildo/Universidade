import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		
		for(int i=1,j = 60; j>=0 ;) {
			System.out.printf("I=%d J=%d\n",i,j);
			j=j-5;
			i=i+3;
		}
	}
}
