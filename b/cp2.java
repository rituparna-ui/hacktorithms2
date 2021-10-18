import java.util.*;

public class cp2 {

    public static void match(int a[][], int n) {
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < 5; j++) {
                if (a[i][j] == 1) {
                    count = count + 1;
                } else if (a[i][j] == 2) {
                    count = count - 1;
                }
            }
            if (count > 0) {
                System.out.println("INDIA");
            } else if (count < 0) {
                System.out.println("ENGLAND");
            } else {
                System.out.println("DRAW");
            }
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[][] = new int[n][5];
        for (int i = 0; i < n; i++) {
            a[i][0] = sc.nextInt();
            a[i][1] = sc.nextInt();
            a[i][2] = sc.nextInt();
            a[i][3] = sc.nextInt();
            a[i][4] = sc.nextInt();
        }
        match(a, n);
        sc.close();
    }
}
