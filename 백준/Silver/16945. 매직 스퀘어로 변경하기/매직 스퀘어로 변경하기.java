import java.util.*;
import java.io.IOException;

public class Main {
    
    static int[] a = new int[9];
    static int[] picked = new int[9];
    
    private static boolean next_permutation(int[] arr) {
    int i = arr.length-1;
    while(i > 0 && arr[i-1] >= arr[i]) i--;
    if(i <= 0) return false;

    int j = arr.length-1;

    while(arr[j] <= arr[i-1]) j--;

    swap(arr, i-1, j);
    j = arr.length - 1;
    while(i < j) {
        swap(arr, i, j);
        i++;
        j--;
    }
    return true;
}

private static void swap(int[] arr, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
    
    public static boolean solve(int[] p)
    {
        int sum = p[0] + p[1] + p[2];
	    if (sum != (p[3] + p[4] + p[5])) return false;
    	if (sum != (p[6] + p[7] + p[8])) return false;

    	if (sum != (p[0] + p[3] + p[6])) return false;
    	if (sum != (p[1] + p[4] + p[7])) return false;
    	if (sum != (p[2] + p[5] + p[8])) return false;

    	if (sum != (p[0] + p[4] + p[8])) return false;
    	if (sum != (p[2] + p[4] + p[6])) return false;
    	return true;
    }
    
    public static void main(String args[]) throws IOException
    {
      Scanner s = new Scanner(System.in);
      
      for(int i=0;i<9;i++)
      {
          a[i] = s.nextInt();
          picked[i] = i+1;
      }
      int ans=987654321;
      do
      {
          if(solve(picked))
          {
              int diff = 0;
              for(int i=0;i<9;i++)
              {
                  diff += Math.abs(a[i] - picked[i]);
              }
              ans = Math.min(ans,diff);
          }
          //System.out.println(ans);
      }while(next_permutation(picked));
      
      System.out.print(ans);
    }
}