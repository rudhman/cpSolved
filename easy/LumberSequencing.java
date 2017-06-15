package easy;

import java.util.Scanner;

public class LumberSequencing {
	
	static boolean checkAsc(int[] h)
	{
		for(int i=0; i<h.length-1; i++){
			if(h[i] < h[i+1]){
				return false;
			}
		}
		return true;
	}
	
	static boolean checkDesc(int[] h)
	{
		for(int i=0; i<h.length-1; i++){
			if(h[i] > h[i+1]){
				return false;
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		int n;
		int i;
		boolean sorted = false;
		Scanner scan = new Scanner(System.in);
		int[] h = new int[10];
		n = scan.nextInt();
		System.out.println("Lumberjacks:");
		while(n-->0){
			for(i=0; i<10; i++){
				h[i] = scan.nextInt();
			}
			i = 0;
			if(h[i]>h[i+1]){
				sorted = checkAsc(h);
			}
			else if(h[i]<h[i+1]){
				sorted = checkDesc(h);
			}
			
			if(sorted == true){
				System.out.println("Ordered");
			}
			else{
				System.out.println("Unordered");
			}
		}
	}
	
}
