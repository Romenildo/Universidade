import java.util.Locale;
import java.util.Scanner;
//meu deus essa logica ta louca

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double salary = input.nextDouble();
		
		if(salary > 0 && salary <=2000) {
			System.out.println("Isento");
			return;
		}
		if(salary > 2000 && salary <= 3000) {
			salary = salary - 2000;//isento de 2000 corre juros somente no resto
			salary = salary*0.08;	//Ex 2100 - 2000 = 100 corre juros de 8% = 8
			System.out.printf("R$ %.2f\n",salary);
			return;
		}
		if(salary > 3000 && salary <= 4500) {
			
			double salary3 = salary - 3000;// 3002 - 3000 = 2 corre juros de 18%
			double salary2 = (salary -2000 - salary3);//3002 - 2000= 1002 - 2 = 1000 corre juros de 8%
			salary = salary2 * 0.08 + salary3 * 0.18;
			System.out.printf("R$ %.2f\n",salary);
			return;
		}
		if(salary > 4500) {
			double salary4 = (salary - 4500);//quem corre juros de 28%*// 4520-4500 fica so 20 corre juro de 28*
			double salary3= (salary - 3000 - salary4); //quem corre juros de 18% 4520-3000= 1520 - 20 = 1500 corre juros de 18%
			double salary2 = (salary - 2000 - salary3 - salary4);//juros de 8// 4520-2000= 2520 - 1500 = 1020 - 20 = 1000 com juros de 8%
			
			salary = salary4 * 0.28 + salary3 * 0.18 + salary2*0.08;
			
			System.out.printf("R$ %.2f\n",salary);
			return;
		}
		
		
		input.close();
	}
}
