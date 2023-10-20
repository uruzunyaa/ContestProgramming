//上級問題5,選択肢2,Java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int ans = (int)(Math.pow(a,b)+0.0001);
        System.out.println(ans);
    }
}
