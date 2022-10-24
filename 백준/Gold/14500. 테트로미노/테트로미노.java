import java.util.*;
 
public class Main {
    static int[][][] BLOCKS = {
        {{0,0}, {0,1}, {0,2}, {0,3}}
        ,{{0,0}, {1,0}, {2,0}, {3,0}}
        ,{{0,0}, {1,0}, {0,1}, {1,1}}
        ,{{0,0}, {0,1}, {0,2}, {1,2}}
        ,{{0,0}, {1,0}, {2,0}, {0,1}}
        ,{{0,0}, {1,0}, {1,1}, {1,2}}
        ,{{2,0}, {0,1}, {1,1}, {2,1}}
        ,{{1,0}, {1,1}, {1,2}, {0,2}}
        ,{{0,0}, {0,1}, {1,1}, {2,1}}
        ,{{0,0}, {1,0}, {0,1}, {0,2}}
        ,{{0,0}, {1,0}, {2,0}, {2,1}}
        ,{{0,0}, {1,0}, {2,0}, {1,1}}
        ,{{1,0}, {0,1}, {1,1}, {1,2}}
        ,{{0,1}, {1,0}, {1,1}, {2,1}}
        ,{{0,0}, {0,1}, {0,2}, {1,1}}
        ,{{0,0}, {0,1}, {1,1}, {1,2}}
        ,{{0,1}, {1,1}, {1,0}, {2,0}}
        ,{{1,0}, {1,1}, {0,1}, {0,2}}
        ,{{0,0}, {1,0}, {1,1}, {2,1}}
    };
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        int[][] arr = new int[n][m];
        int max = 0;
        for(int i=0; i<n; i++){
            for (int j=0;  j<m; j++){
                arr[i][j] = sc.nextInt();
            }
        }
 
        for(int i=0; i<BLOCKS.length; i++){
            int[][] block = BLOCKS[i];
            for(int j=0; j<n; j++){
                for(int k=0; k<m; k++){
                    int sum = 0;
                    for(int l=0; l<4; l++){
                        if(j+block[l][0]>=n || k+block[l][1]>=m){
                            break;
                        }else{
                            sum += arr[j+block[l][0]][k+block[l][1]];
                        }
                    }
                    if(sum > max) max = sum;
                }
            }
        }
        System.out.println(max);
    }
}
