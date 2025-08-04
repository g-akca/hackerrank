import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        ArrayList<ArrayList<Integer>> A = new ArrayList<ArrayList<Integer>>();
        
        for (int i = 0; i < n; i++) {
            int j = scan.nextInt();
            ArrayList<Integer> row = new ArrayList<Integer>();
            for (int k = 0; k < j; k++) {
                row.add(scan.nextInt());
            }
            
            A.add(row);
        }
        
        int q = scan.nextInt();
        for (int i = 0; i < q; i++) {
            int x = scan.nextInt(), y = scan.nextInt();
            try {
                System.out.println(A.get(x - 1).get(y - 1));
            }
            catch(Exception e) {
                System.out.println("ERROR!");
            }
        }
        
        scan.close();
    }
}
