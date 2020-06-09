import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int codProduto = input.nextInt();
		int qtdProduto = input.nextInt();
		double valorPagar;
		if(codProduto == 1) {
			valorPagar = qtdProduto * 4.00;
			System.out.printf("Total: R$ %.2f\n",valorPagar);
		}else {
			if(codProduto == 2) {
				valorPagar = qtdProduto * 4.50;
				System.out.printf("Total: R$ %.2f\n",valorPagar);
			}else {
				if(codProduto == 3) {
					valorPagar = qtdProduto * 5.00;
					System.out.printf("Total: R$ %.2f\n",valorPagar);
				}else {
					if(codProduto == 4) {
						valorPagar = qtdProduto * 2.00;
						System.out.printf("Total: R$ %.2f\n",valorPagar);
					}else {
						if(codProduto == 5) {
							valorPagar = qtdProduto * 1.50;
							System.out.printf("Total: R$ %.2f\n",valorPagar);
						}else {
							
						}
					}
				}
			}
		}
		
		
		input.close();
	}
}
