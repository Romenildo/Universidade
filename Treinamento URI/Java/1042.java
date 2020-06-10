import java.util.Locale;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		int c = scan.nextInt();
		int x=a;int y=b;int z=c;
		
		if(a<b && a<c) {
			System.out.println(a);
			if(b<c) {
				System.out.println(b);
				System.out.println(c);
			}else {
				System.out.println(c);
				System.out.println(b);
			}
		}else {
			if(b<c) {
				System.out.println(b);
				if(a<c) {
					System.out.println(a);
					System.out.println(c);
				}else {
					System.out.println(c);
					System.out.println(a);
				}
			}else {
				System.out.println(c);
				if(a<b) {
					System.out.println(a);
					System.out.println(b);
				}else {
					System.out.println(b);
					System.out.println(a);
				}
			}
		}
		System.out.println();
		System.out.println(x);
		System.out.println(y);
		System.out.println(z);
		
		scan.close();
	}
}
