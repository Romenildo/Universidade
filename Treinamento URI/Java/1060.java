import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double v[] = new double[6];
		int cont = 0;
		
		for(int i = 0; i<6;i++) {
			v[i]= input.nextDouble();
		}
		for(int j=0; j < v.length ; j++) {
			if(v[j]>0) {
				cont++;
			}
		}
		System.out.println(cont + " valores positivos");
		
		input.close();
	}
}
