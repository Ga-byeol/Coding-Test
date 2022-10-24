import java.util.*

fun main() {
    val s = Scanner(System.`in`)
    var n = s.nextInt();var m = s.nextInt()
    
    if(n==1) print(1)
    else if(n==2) print(Math.min(4,(m+1)/2))
    else if(n>=3)
    {
        if(m<=6)print(Math.min(4,m))
        else print(m-2)
    }
}