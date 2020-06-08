import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);

    int num, hora;
    double sal;

    num = scan.nextInt();
    hora = scan.nextInt();
    sal = scan.nextDouble();

    sal = sal * hora;
    System.out.printf("NUMBER = %d\n",num);
    System.out.printf("SALARY = U$ %.2f\n",sal);
  }
}
