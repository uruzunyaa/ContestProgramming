//初級問題3,Java
import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		if(n<5||n>10){
			System.out.print("true");
		}
	}
}
