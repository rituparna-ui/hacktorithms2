
// The Rod-Cutting Problem
// Let pi denote the price of a rod with length i inches.
// Rod lengths are always an integral number of inches.
// Given a rod of length 8 inches and the list of prices pi for i = 1,2,...,8 pi= {1,5,8,9,10,17,17,20} determine the
// maximum revenue obtainable by cutting up the rod and selling the pieces.
public class Rodcut
{    static int cutRod(int price[],int n)
    {
        int val[] = new int[n+1];
        val[0] = 0;
        for (int i = 1; i<=n; i++)
        {
            int max_val = Integer.MIN_VALUE;
            for (int j = 0; j < i; j++)
                max_val = Math.max(max_val, price[j] + val[i-j-1]);
            val[i] = max_val;
        }
        return val[n];
    }

    public static void main(String args[])
    {
        int arr[] = new int[] {1, 5, 8, 9, 10, 17, 17, 20};
        int size = arr.length;
        System.out.println("Maximum Obtainable Value is " + cutRod(arr, size));
    }
}
