import java.util.*;

public class Cp {

    // for other methods
    public static void ticketinput(int n) {

        int a[][] = new int[n][3];
        for (int i = 0; i < n; i++) {
            a[i][0] = sc.nextInt();
            a[i][1] = sc.nextInt();
            a[i][2] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            if (a[i][0] == 7 || a[i][1] == 7 || a[i][2] == 7) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ticketinput(n);
        sc.close();
    }
}