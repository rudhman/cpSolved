package easy;

import java.util.Scanner;

public class SummingDigits {
	
	static int summation(int num){
		int sum=0,N=num;
		while(num != 0){
			N = num%10;
			sum+=N;
			num/=10;
		}
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		int sum;
		while(num != 0)
		{
			sum = summation(num);
			while(sum/10 != 0){
				sum = summation(sum);
			}
			System.out.println(sum);
			num = scan.nextInt();
		}
	}

}
