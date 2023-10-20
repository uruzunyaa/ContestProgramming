//中級問題3,Java
public class Main {
    public static void main(String[] args) {
        long a[] = new long[10];
        a[0] = 9;
        for (int i = 1; i < a.length; i++) {
            a[i] = a[i - 1] * 10 + (9 - i);
        }
        System.out.println(a[9]);
    }
}
