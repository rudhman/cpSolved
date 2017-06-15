package easy;

import java.util.Scanner;

public class HorrorDash {
	public static void main(String[] args) {
		int n, lowspeed, speed;
		Scanner scan = new Scanner(System.in);
		
		int t;
		t = scan.nextInt();
		for(int i=1; i<t+1; i++){
			n = scan.nextInt();
			lowspeed= scan.nextInt();
			n-=1;
			
			while(n-- > 0){
				speed = scan.nextInt();
				if(lowspeed<speed){
					lowspeed = speed;
				}
			}
			System.out.println("Case "+i+": "+lowspeed);
		}
	}

}
