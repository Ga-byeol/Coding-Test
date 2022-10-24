import java.util.*;

public class Main {
    static int key[];
    static int result;
    
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        key = new int[9];
        int a,b;
        for(int i = 0; i < 9; i++) key[i] = s.nextInt();
        
        for(int x : key) result += x;
        Arrays.sort(key);
        
        for(int i=0; i<9; i++)
        {
            for(int j=i+1; j<9; j++)
            {
                if(result-key[i]-key[j] == 100)
                {
                    for(int x=0;x<9;x++)
                    {
                        if(x == i || x == j) continue;
                        System.out.println(key[x]);
                        
                    }
                    return;
                }
            }
        }
        
    }
}