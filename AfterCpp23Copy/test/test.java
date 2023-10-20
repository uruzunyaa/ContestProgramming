import java.util.Random;

public class test{

    public static void main(String[] args) {
        int n = 1000000; // データの個数（10^6）
        int[] arr = generateRandomArray(n);

        System.out.println("ソート前の配列:");
        printArray(arr);

        quickSort(arr, 0, n - 1);

        System.out.println("\nソート後の配列:");
        printArray(arr);
    }

    // クイックソートを実行する関数
    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    // ピボットの選択とパーティションを行う関数
    public static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return i + 1;
    }

    // 配列の要素を交換する関数
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // 配列を乱数で初期化する関数
    public static int[] generateRandomArray(int n) {
        int[] arr = new int[n];
        Random random = new Random();
        for (int i = 0; i < n; i++) {
            arr[i] = random.nextInt();
        }
        return arr;
    }

    // 配列を表示する関数
    public static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
