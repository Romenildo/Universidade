
public class Emprestimo {
	
	public String aluno;
	public String livro;
	public String tempo;//tempo do emprestimo
	
	
	public Emprestimo(String nome, String livro, String tempo) {//construtor
		this.aluno = nome;
		this.livro = livro;
		this.tempo = tempo;
	}
	
	//public void realizarEmprestimo() poderia ter feito essa função mais é melhor já instanciar o emprestimo e crialo
	
	public void mostrarEmprestimo() {
		System.out.printf("Aluno: %s  -> Livro: %s\n",this.aluno,this.livro);
		System.out.printf("Por: %s dia(s)\n",this.tempo);
		System.out.println("----------------------");
	}
	
}
