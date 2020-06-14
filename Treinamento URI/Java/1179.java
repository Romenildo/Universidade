import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		int contpar=0,contimp=0;
		int[] imp = new int[6];
		int[] par = new int[6];
		

		for(int i = 0; i<15;i++) {
			int num = input.nextInt();
			if(num%2==0) {
				par[contpar]=num;
				
				contpar++;
				
				if(contpar== 5) {
					for(int j =0;j<5;j++) {
						if(par[j]!=0) {
							System.out.printf("par[%d] = %d\n",j,par[j]);
						}	
					}
					for(int j =0;j<5;j++) {
						par[j]=0;
					}
					contpar=0;
				}
				
			}
			if(num%2!=0) {
				imp[contimp]=num;
				contimp++;
				if(contimp== 5) {
					for(int j =0;j<5;j++) {
						if(imp[j]!=0) {
							System.out.printf("impar[%d] = %d\n",j,imp[j]);
						}	
					}
					for(int j =0;j<5;j++) {
						imp[j]=0;
					}
					contimp=0;
				}
				
			}
		}
		for(int k =0; k<=5;k++) {
			if(imp[k]!=0) {
				System.out.printf("impar[%d] = %d\n",k,imp[k]);
			}
		}
		for(int k =0; k<=5;k++) {
			if(par[k]!=0) {
				System.out.printf("par[%d] = %d\n",k,par[k]);
			}
		}
		
		
	}
}
