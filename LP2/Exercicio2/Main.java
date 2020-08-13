import java.util.Scanner;
import java.util.Locale;

public class Main {

	public static void main(String[] args) 
	{
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		System.out.println("Digite comprimento e largura: ");
		int comp = input.nextInt();
		int larg = input.nextInt();
		
		Retangulo retangulo1 = new Retangulo();
		
		retangulo1.setComprimento(comp);
		retangulo1.setLargura(larg);
		
		
		if((retangulo1.getComprimento()!=0) && (retangulo1.getLargura()!=0)) //caso o valor não tenha entrado no set 
		{																	 //por motivos de não satifazer a condição
			System.out.println("\nPerimetro do retangulo é: " + retangulo1.perimetro());
			
			System.out.println("Área do retangulo é: " + retangulo1.area());
		}
	}

}
