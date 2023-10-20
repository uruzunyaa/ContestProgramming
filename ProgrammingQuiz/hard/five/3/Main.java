//上級問題5,選択肢3,Java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int ans = 1;
        for(int i=0;i<b;i++)ans*=a;
        System.out.println(ans);
    }
}
