import java.util.*

fun main() {
    val sc: Scanner = Scanner(System.`in`)
    var t: Int = sc.nextInt()
    val dp: Array<Int> = Array(11) {0}
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4

    for(i in 4..10) dp[i] = dp[i-3] + dp[i-2] + dp[i-1]
    while(t!=0)
    {
        val n: Int = sc.nextInt()
        println(dp[n])
        t--
    }
}