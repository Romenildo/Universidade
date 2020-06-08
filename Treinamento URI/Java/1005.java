import java.util.Scanner;
  public class Main{
    public static void main(String[] args){
      Scanner scan = new Scanner(System.in);

    double A,B,MEDIA;

    A = scan.nextDouble();
  
    B = scan.nextDouble();
  
    MEDIA = ((A*3.5)+(B*7.5))/11;

    System.out.printf("MEDIA = %.5f\n",MEDIA);
    }
  }
