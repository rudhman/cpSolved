package easy;

import java.util.ArrayList;
import java.util.Scanner;

public class RobotInst {
	public static void main(String[] args) {
		int t, n, p, temp;
		Scanner scan = new Scanner(System.in);

		String str = new String();

		
		t = scan.nextInt();
		while(t-->0){
			p=0;
			ArrayList<Integer> ali = new ArrayList<Integer> ();
			n = scan.nextInt();
			
			while(n-->0){

				str = scan.next();
				
				if(str.equals("LEFT")){
					p--;
					ali.add(-1);
				}
				else if(str.equals("RIGHT")){
					p++;
					ali.add(1);
				}
				else {
					scan.next();
					int index = scan.nextInt();
					ali.add(ali.get(index-1));
					p += ali.get(index-1);
				}
				System.out.println(p);
			}
			System.out.println(p);
			
		}
	}
}
