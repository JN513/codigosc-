import java.util.Scanner;

public class PH {
	public static void main(String args[]) {
		
		Scanner scan = new Scanner(System.in);
		Double ph = scan.nextDouble();
		
		if(ph<7) {	
			System.out.printf("Acida, PH: %.2f\n", ph);
		}
		else if(ph>7) {
			System.out.printf("Basica, PH: %.2f\n", ph);
		}
		
		else {	
			System.out.printf("Neutra, PH: %.2f\n", ph);
		}
		
		scan.close();
	}
}
