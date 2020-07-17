import java.util.Scanner;

/**
 * youngPhysicist
 */
public class youngPhysicist {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] v = new int[n][3]; 
        int[] sum = new int[3];
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < 3; j++)
            {
                v[i][j] = in.nextInt();
                sum[j] += v[i][j] ;
            }
        }
        if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        in.close();
    }
}