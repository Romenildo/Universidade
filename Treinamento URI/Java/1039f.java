import java.util.Locale;
import java.util.Scanner;

public class Main{
	
	static double media(double n1, double n2, double n3, double n4) {
		double mediaP = (n1*2 + n2*3 + n3*4 + n4*1)/10;
		return mediaP;
	}
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		double nota1 = scan.nextDouble();
		double nota2 = scan.nextDouble();
		double nota3 = scan.nextDouble();
		double nota4 = scan.nextDouble();
		double mediaF = media(nota1, nota2, nota3, nota4);
		System.out.printf("Media: %.1f\n",mediaF);
		if(mediaF >= 7.0) {
			System.out.println("Aluno aprovado.");
		}else {
			if(mediaF < 5.0) {
				System.out.println("Aluno reprovado.");
			}else {
				if(mediaF >=5 || mediaF < 7) {
					System.out.println("Aluno em exame.");
					double notaNova = scan.nextDouble();
					System.out.printf("Nota do exame: %.1f\n",notaNova);
					mediaF = (mediaF + notaNova)/2;
					if(mediaF >= 5.0) {
						System.out.println("Aluno aprovado.");
					}else {
						if(mediaF < 5.0) {
							System.out.println("Aluno reprovado.");
						}
					}
					System.out.printf("Media final: %.1f\n",mediaF);
					
				}else {
					//exercoes
				}
			}
		}
		scan.close();
	}
}
