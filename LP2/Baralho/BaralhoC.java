
public class Baralho {
	
	Carta cartas[] = new Carta[56];
	
	
	public Baralho() {
		
		String nomes[] = {"Às", "Dois", "Três", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
		String naipes[] = {"Copas", "Espadas", "Paus", "Ouros"};
		int cont = 0;

		
		for (int j = 0; j < naipes.length; j++) {
			for (int i = 0; i < nomes.length ; i++) {
				cartas[cont] = new Carta(nomes[i], naipes[j]);
				cont++;
			}
			cartas[cont]= new Carta("coringa","coringa");
			cont++;
		}
	}
	
	public String imprimeBaralho() {
		String aux = "";
		
		for(int i =0;i<cartas.length;i++) {
			if(cartas[i].getNome()!=null) {
				aux = aux + cartas[i].getNome() + " " + cartas[i].getNaipe() + "\n";
			}	
		}
		return aux;
	}
	
	public void embaralhar() {
		int pos1,pos2;
		Carta cartaAux= new Carta("","");
		for(int i =0 ; i<70 ; i++) {
			
			pos1 = (int)(Math.random()*56);
			pos2 = (int)(Math.random()*56);
			
			if(cartas[pos1]!= null && cartas[pos2]!=null) {
				cartaAux = cartas[pos1];
				cartas[pos1] = cartas[pos2];
				cartas[pos2] = cartaAux;
			}
				
		}
		
	}
	
	public String daCarta() {
		String aux = "";
		
		for(int i=cartas.length-1;i>=0;i--) {
			if(cartas[i].getNome()!=null) {
				aux = cartas[i].getNome() + " " + cartas[i].getNaipe();
				cartas[i].setNome(null);
				cartas[i].setNaipe(null);
				
				return aux;
			}
		}
		return "baralho Vazio";
	}
	
	public boolean temCarta() {
		for(int i =0;i<cartas.length;i++) {
			if(cartas[i].getNome()!=null) {
				return true;
			}	
		}
		return false;
	}
	
}

	
