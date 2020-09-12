
public class Main {

	public static void main(String[] args) {
		
		Baralho baralho = new Baralho();
		
		
		System.out.println(baralho.imprimeBaralho());
		
		System.out.println("\n\n");//
		for(int i=0;i<54;i++)
		System.out.println(baralho.daCarta());
		
		System.out.println("\n\n");
		System.out.println(baralho.imprimeBaralho());
		
		baralho.embaralhar();
		
		System.out.println("\n\n");
		System.out.println(baralho.imprimeBaralho());
		
		
baralho.embaralhar();
		
		System.out.println("\n\n");
		System.out.println(baralho.imprimeBaralho());
		System.out.println(baralho.daCarta());
		
		
		System.out.println(baralho.temCarta());
	}

}
