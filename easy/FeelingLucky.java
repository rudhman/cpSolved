package easy;

import java.util.Scanner;

public class FeelingLucky {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t, i, grt;
		String[] sites = new String[10];
		int[] relv = new int[10];
		t = scan.nextInt();
		
		for(int j=0; j<t; j++){
			
			for(i=0; i<10; i++){
				sites[i]= scan.next();
				relv[i] = scan.nextInt();
			}
			grt = 0;
			for(i=0; i<10; i++){
				if(relv[i] > grt)
					grt = relv[i];
			}
			
			for(i=0; i<10; i++){
				if(i==0){
					System.out.println("Case #"+(j+1)+":");
				}
				if(relv[i] == grt){
					System.out.println(sites[i]);
				}
			}
		}
	}
}
