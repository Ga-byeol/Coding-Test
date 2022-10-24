import java.util.*


fun main(args: Array<String>) {
    val s= Scanner(System.`in`)
    val n = s.nextInt()
    var jump = Array(1001) {0}
    var dp = Array(1001) {0}
    
    for(i in 1..n)
    {
        jump[i] = s.nextInt()
        dp[i] = 987654321
    }
    dp[1] = 0
    for(i in 1..n)
    {
        for(j in 0..jump[i])
        {
            if((i+j)<=n) dp[i+j] = Math.min(dp[i]+1,dp[i+j])
        }
    }
    if(dp[n]==987654321) print(-1)
    else print(dp[n])
}