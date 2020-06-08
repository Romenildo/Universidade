import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    int A,B,PROD;

    A= scan.nextInt();
    B= scan.nextInt();
    PROD = A*B;

    System.out.println("PROD = "+ PROD);
  }
}
