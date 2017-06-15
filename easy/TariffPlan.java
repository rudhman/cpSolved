package easy;

import java.util.Scanner;

public class TariffPlan {
	public static void main(String[] args) {
		int t, n, miles, juice;
		int time;
		Scanner scan = new Scanner(System.in);
		t = scan.nextInt();
		
		for(int j=0; j<t; j++){
			
			miles = 0;
			juice = 0;
			n = scan.nextInt();
			for(int i=0; i<n; i++){
				
				time = scan.nextInt();
				miles += 10 * (time/30 + 1);
				juice += 15 * (time/60 + 1);
				if(i==0)
					System.out.print("Case "+(j+1)+": ");
			}
			if(miles == juice){
				System.out.println("Mile Juice "+miles);
			}
			else if(miles < juice){
				System.out.println("Mile "+miles);
			}
			else
				System.out.println("Juice "+juice);
			
			
		}
	}
}
