import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    double pi = 3.14159;
    double raio, area;

    raio = scan.nextDouble();

    area = pi * (raio*raio);

    System.out.printf("A=%.4f\n",area);


  }

}
