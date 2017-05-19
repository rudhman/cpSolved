package easy;

import java.util.Scanner;

public class Swallow { //replace by class Main while submitting!
	
	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		int t;
		t = scann.nextInt();
		
		while(t>0){
			int noOfColumns = scann.nextInt();
			
			int sum=0;
			for(int i=0; i<noOfColumns;i++){
				sum += scann.nextInt() - scann.nextInt();
				
			}
			if(sum%noOfColumns == 0){
				System.out.println("yes");
			}
			else{
				System.out.println("no");
			}
			t--;
			if(t>0)
				System.out.println();
		}
	}
}