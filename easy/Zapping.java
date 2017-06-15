package easy;

import java.util.Scanner;

public class Zapping {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a, b, frw, bck, min;
		while(true){
			a = scan.nextInt();
			b = scan.nextInt();
			if(a == -1 && b == -1)
				break;
			
			if(b>a){
				frw = b-a;
				bck = 100-frw;
			}
			else{
				bck = a-b;
				frw = 100-bck;
			}
			
			min = (frw<bck)?frw:bck;
			System.out.println(min);
		}
	}
}
