package easy;

import java.util.Scanner;

public class JumpingMario {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int t;
		t = scan.nextInt();
		int[] wh = new int[50];
		int n;
		int i;

		int lj, hj;
		
		for(int j=0; j<t; j++){

			n = scan.nextInt();
			for(i=0; i<n; i++){
				wh[i] = scan.nextInt();
			}
			
			lj=0; hj=0;
			
			for(i=0; i<n-1; i++){
				if(wh[i]<wh[i+1])
					hj +=1;
				else if(wh[i]>wh[i+1])
					lj +=1;
			}
			
			System.out.println("Case "+(j+1)+": "+hj+" "+lj);

		}
		
	}

}
