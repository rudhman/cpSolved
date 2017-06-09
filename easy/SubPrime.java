package easy;

import java.util.Scanner;

public class SubPrime {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int B, N;
		int frm, to, amt;
		boolean flag;

		
		while(( B = scan.nextInt() )!= 0){
			N = scan.nextInt();
			int bresv[] = new int[B];
			for(int i=0; i<B; i++){
				bresv[i] = scan.nextInt();
			}
			for(int i=0; i<N; i++){
				to = scan.nextInt();
				frm = scan.nextInt();
				amt = scan.nextInt();
				bresv[frm-1] += amt;
				bresv[to-1] -= amt;
			}
			flag = true;
			for(int i=0; i<B; i++){
				if(bresv[i]  < 0){
					flag = false;
				}
			}
			
			if(flag == true){
				System.out.println("S");
			}
			else
				System.out.println("N");
		}
		
	}

}
