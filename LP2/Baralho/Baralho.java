
public class Baralho {
	
	Carta cartas[] = new Carta[56];
	int qtdNomes;
	int qtdNaipes;
	
	
	public Baralho() {
		
		String nomes[] = {"Às", "Dois", "Três", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
		String naipes[] = {"Copas", "Espadas", "Paus", "Ouros"};
		int cont = 0;
		
		this.qtdNomes=nomes.length*4;//controlar a quantidade de cartas no baralho
		this.qtdNaipes= naipes.length;
		
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
		for(int i =0 ; i<51 ; i++) {
			
			pos1 = (int)(Math.random()*56);
			pos2 = (int)(Math.random()*56);
			
			cartaAux = cartas[pos1];
			cartas[pos1] = cartas[pos2];
			cartas[pos2] = cartaAux;	
		}
		
	}
	
	public String daCarta() {
		String aux = "";
		
		for(int i=cartas.length-1;i>=0;i--) {
			if(cartas[i].getNome()!=null) {
				aux = cartas[i].getNome() + " " + cartas[i].getNaipe();
				cartas[i].setNome(null);
				cartas[i].setNaipe(null);
				
				this.qtdNomes--;//controlar a quantidade
				return aux;
			}
		}
		return null;
	}
	
	public boolean temCarta(String nome, String naipe) {
		if(nome.equalsIgnoreCase("coringa") && naipe.equalsIgnoreCase("coringa")) {//caso seja um coringa ja retorna true
			return true;
		}
		
		for (int j = 0; j < this.qtdNaipes; j++) {
			for (int i = 0; i < this.qtdNomes+4 ; i++) {//os +4 sao dos coringas na quantidade total
				if((cartas[i].getNome().equalsIgnoreCase(nome)) && (cartas[i].getNaipe().equalsIgnoreCase(naipe))) {
					
					return true;
				}	
			}
		}
		return false;
	}
	
}

	
