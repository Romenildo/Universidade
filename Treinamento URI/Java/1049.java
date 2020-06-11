import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		String palavra1 = input.next();
		String palavra2 = input.next();
		String palavra3 = input.next();
		
		if(palavra1.equals("vertebrado")) {
			if(palavra2.equals("ave")){
				if(palavra3.equals("carnivoro")) {
					System.out.println("aguia");
				}else {
					System.out.println("pomba");
				}
			}else {
				//mamifero
				if(palavra3.equals("onivoro")) {
					System.out.println("homem");
				}else {
					System.out.println("vaca");
				}
			} 
			
		}else {
			//invertebrado
			if(palavra2.equals("inseto")){
				if(palavra3.equals("hematofago")) {
					System.out.println("pulga");
				}else {
					System.out.println("lagarta");
				}
			}else {
				//anelidio
				if(palavra3.equals("hematofago")) {
					System.out.println("sanguessuga");
				}else {
					System.out.println("minhoca");
				}
			}
		}

			input.close();
	}
}
