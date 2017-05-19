package easy;

import java.util.Scanner;

public class EventPlan {
	public static void main(String[] args) {
		int n, b, h, w, cost, avail;
		boolean valid = false;
		int minCost;
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNextInt()){
			n = scan.nextInt();
			b = scan.nextInt();
			h = scan.nextInt();
			w = scan.nextInt();
			minCost = b+1;
			
			while(h-- > 0){
				cost = scan.nextInt();
				int W = w;
				while(W-- > 0){
					avail = scan.nextInt();
					if(avail >= n && cost*n < minCost){
						valid = true;
						minCost = cost*n;
					}
				}
			}
			
			if(minCost <= b){
				System.out.println(minCost);
			}
			else{
				System.out.println("stay home");
			}
		}
	}
}
