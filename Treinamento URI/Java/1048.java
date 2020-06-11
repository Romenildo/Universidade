import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		double salary = input.nextDouble();
		double porcent = 0.0;
		double newSalary = 0.0;
		
		if(salary >= 0 && salary <= 400) {
			porcent = 0.15;
		}
		if(salary > 400 && salary <= 800) {
			porcent = 0.12;
		}
		if(salary > 800 && salary <= 1200) {
			porcent = 0.10;
		}
		if(salary > 1200 && salary <= 2000) {
			porcent = 0.07;
		}
		if(salary > 2000) {
			porcent = 0.04;
		}
		
		newSalary = salary * porcent + salary;
		System.out.printf("Novo salario: %.2f\n", newSalary);
		System.out.printf("Reajuste ganho: %.2f\n",salary*porcent);
		System.out.printf("Em percentual: %.0f %%\n",porcent*100);
		

			input.close();
	}
}
