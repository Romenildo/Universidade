import java.util.Locale;
import java.util.Scanner;
//meu deus essa logica ta louca

public class Main{
	
	static String Calender(int dia) {
		if(dia == 1) {
			return "January";
		}
		if(dia == 2) {
			return "February";
		}
		if(dia == 3) {
			return "March";
		}
		if(dia == 4) {
			return "April";
		}
		if(dia == 5) {
			return "May";
		}
		if(dia == 6) {
			return "June";
		}
		if(dia == 7) {
			return "July";
		}
		if(dia == 8) {
			return "August";
		}
		if(dia == 9) {
			return "September";
		}
		if(dia == 10) {
			return "October";
		}
		if(dia == 11) {
			return "November";
		}
		if(dia == 12) {
			return "December";
		}
		return "";
		
	}
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner input = new Scanner(System.in);
		
		int dia = input.nextInt();
		
		System.out.println(Calender(dia));
		
		
		input.close();
	}
}
