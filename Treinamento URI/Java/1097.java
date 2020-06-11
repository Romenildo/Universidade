public class Main{
	public static void main(String[] args) {
		int j = 7,v=5;
		for(int i=1 ; i<10 ;i=i+2) {
			
			for(; j >= v ; j--) {
				System.out.printf("I=%d J=%d\n",i,j);
			}
			j = j+5;
			v = v+2;
		}
	}
}
