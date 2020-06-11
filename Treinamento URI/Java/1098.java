import java.util.Locale;

public class Main {	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		for (double i = 0,j=1,k=0; i<2.1;j++,k++ ) {
			if(k==3){
				i = i + 0.2;
				j= 1+i;
				k = 0;
			}
			if(i<2.1){
				if(i==1 || (i>1.9 && i<2.1) || i ==0) {
					System.out.printf("I=%.0f J=%.0f\n",i,j);
				}else {
					System.out.printf("I=%.1f J=%.1f\n",i,j);
				}
			}
		}	
	}
}
