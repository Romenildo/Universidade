import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    String nome;
    double salary, vendas, montante;

    nome = scan.nextLine();
    salary = scan.nextDouble();
    vendas = scan.nextDouble();

    montante = salary + (vendas*0.15);

    System.out.printf("TOTAL = R$ %.2f\n",montante);
  }
}
