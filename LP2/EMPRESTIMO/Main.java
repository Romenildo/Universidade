
import java.util.ArrayList;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) 
	{
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		ArrayList<Aluno> alunos = new ArrayList<Aluno>();
		ArrayList<Livro> livros = new ArrayList<Livro>();
		ArrayList<Emprestimo> emprestimos = new ArrayList<Emprestimo>();
		
		String escolha;
		int qtdLivros=0,qtdLivrosDisponiveis=0,qtdAlunos=0,qtdEmprestimos=0;
		String auxNome, auxLivro, tempoEmprestimo="0";
		boolean run = true;
		
		while(run)
		{

			System.out.println("            MENU EMPRESTIMOS       ");
			System.out.println("1- Adicionar Aluno");
			System.out.println("2- Mostrar alunos");
			System.out.println("3- Adicionar Livro");
			System.out.println("4- Mostrar Livros");
			System.out.println("5- Emprestimo de livro");
			System.out.println("6- Mostrar Emprestimos");
			System.out.println("0- Sair");
				
			System.out.println("Escolha: ");
			escolha = input.nextLine();
			
			switch(escolha) 
			{
			case "1"://adicionar alunos
				
				Aluno aluno = new Aluno();
				
				System.out.print("nome: ");
				aluno.nome = input.nextLine();
				System.out.print("\nMatricula: ");
				aluno.matricula = input.nextLine();
				System.out.print("\nCurso: ");
				aluno.curso = input.nextLine();
				System.out.print("\nTurno: ");
				aluno.turno = input.nextLine();
				
				System.out.println("Aluno Adicionado com Sucesso!!!\n");
				qtdAlunos++;
				alunos.add(aluno);
				break;
				
			case "2"://mostrar alunos

				qtdAlunos=0;
				for(Aluno a : alunos) //varrer a lista de alunos
				{
					System.out.printf("Nome: %s\n",a.nome);
					System.out.printf("Matricula: %s\n",a.matricula);
					System.out.printf("Curso: %s\n",a.curso);
					System.out.printf("Turno: %s\n",a.turno);
					System.out.println("----------------------");
					qtdAlunos++;
				}
				
				if(qtdAlunos!=0) //caso nao haja alunos cadastrados ou seja nao entrou na lista
				{
					System.out.println("Quantidade: " + qtdAlunos + "\n");
				}else {
					System.out.println("Não há Alunos Cadastrados\n");
				}
				break;
				
			case "3":  //adicionar livro
				
				Livro livro = new Livro();
				
				System.out.print("\nTitulo: ");
				livro.titulo = input.nextLine();
				System.out.print("\nAutor: ");
				livro.autor = input.nextLine();
				System.out.print("\nAno de Lançamento: ");
				livro.anoLancamento = input.nextLine();
				System.out.print("\nGênero: ");
				livro.genero = input.nextLine();
				
				System.out.println("Livro Adicionado com Sucesso!!!\n");
				qtdLivrosDisponiveis++;
				
				livros.add(livro);
				break;
				
			case "4"://mostrar livros
				
				qtdLivros =0;
				qtdLivrosDisponiveis=0;
				for(Livro l : livros) //varrer a lista de livros
				{
					System.out.printf("Titulo: %s\n",l.titulo);
					System.out.println("Autor: "+ l.autor);
					System.out.println("Ano de Lancamento: "+ l.anoLancamento);
					System.out.println("Gênero: "+ l.genero);
					if(l.getSituacao()) {
						System.out.println("Situação: Alugado");
					}else {
						System.out.println("Situação: Disponivel");
						qtdLivrosDisponiveis++;
					}
					System.out.println("-----------------------------\n");
					qtdLivros++;
				}
				
				if(qtdLivros!=0) //caso nao haja livros cadastrados
				{
					System.out.println("Quantidade: " + qtdLivros + "\n");
				}else {
					System.out.println("Não há Livros Cadastrados\n");
				}
				break;
				
			case "5":
				
				if(qtdLivrosDisponiveis!=0 && qtdAlunos!=0) {//caso nao tenha alunos ou livros para emprestimos
					
					System.out.println("Alunos Disponiveis");
					for(Aluno a : alunos) //mostrar alunos disponiveis para emprestimo
					{
						System.out.print(a.nome + "     ");
					}
					
					System.out.println("\nDigite o nome do aluno para o Emprestimo:");
					auxNome = input.nextLine();//!!!Fazer pra se digitar um nome que n esteja na lista digitar novamente
															//#mas codigo vai ficar maior ainda, melhor n
					System.out.println("\n\n Livros Disponiveis");
					for(Livro l : livros) //mostrar todos os livros disponiveis para o emprestimo
					{
						if(l.getSituacao()== false) //caso o livro esteja ocupado ele nao aparecera como opção
						{
							System.out.print(l.titulo + "     ");
						}
					}
					
					System.out.println("\n Digite o titulo do livro:");
					auxLivro= input.nextLine();
					
					for(Livro l : livros) //alterar o livro para ocupado
					{
						if(l.titulo.equalsIgnoreCase(auxLivro)) 
						{
							l.setSituacao(true);
						}
					}
					
					System.out.println("Tempo do emprestimo(em dias):");
					tempoEmprestimo = input.nextLine();
					
					Emprestimo emprestimo = new Emprestimo(auxNome, auxLivro,tempoEmprestimo);
					
					emprestimos.add(emprestimo);
					
					System.out.println("Emprestimo concluido com sucesso");
				}else {
					System.out.println("Não há alunos ou livros cadastrados!!\n");
				}
				break;
				
			case "6"://mostrar emprestimos
				
				qtdEmprestimos=0;
				for(Emprestimo e : emprestimos) 
				{
					e.mostrarEmprestimo();
					qtdEmprestimos++;
				}
				
				if(qtdEmprestimos!=0) 
				{
					System.out.println("Quantidade: " + qtdEmprestimos);
				}else {
					System.out.println("Não há Emprestimos!!!\n");
				}
				break;
				
			case "0":
				run = false;
				break;
				
			default://caso digite algo sem ser uma das opcoes do menu
				System.out.println("Escolha uma das opções:");
			}	
		}	
	}
}
