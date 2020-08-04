
public class Livro {

	public String titulo;
	public String autor;
	public String anoLancamento;
	public String genero; //terror, drama, suspense, misterio...
	private boolean situacao;//caso seja ocupado ou disponivel
	
	
	public Livro() {//construtor
		this.situacao = false;
	}
	
	
	public void setSituacao(boolean ocupado) {
		this.situacao = ocupado;
	}
	
	public boolean getSituacao() {
		return situacao;
	}
	

}
