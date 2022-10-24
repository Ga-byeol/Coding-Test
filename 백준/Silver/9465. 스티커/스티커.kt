import java.util.*

fun main() {
    val s = Scanner(System.`in`)
    var t = s.nextInt()
    while(t-- != 0)
    {
        var n = s.nextInt()
        var dp = Array(2) {Array(n) {0}}
        for(i in 0 until n) dp[0][i] = s.nextInt()
        for(i in 0 until n) dp[1][i] = s.nextInt()
        if(n!=1)
        {
            dp[0][1] += dp[1][0]
            dp[1][1] += dp[0][0]
        }
        for(i in 2 until n)
        {
            dp[0][i] += Math.max(dp[1][i-1],dp[1][i-2])
            dp[1][i] += Math.max(dp[0][i-1],dp[0][i-2])
        }
        println(Math.max(dp[0][n-1],dp[1][n-1]))
    }
}