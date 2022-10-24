import java.util.*

val dx = arrayOf(0,0,1,-1)
val dy = arrayOf(1,-1,0,0)
var M = 0
var N = 0
var result = 0
var visited = Array(1001) {Array<Boolean>(1001) {false}}
var map = Array(1001) {Array<Int>(1001) {0}}
var qx : Queue<Int> = LinkedList<Int>()
var qy : Queue<Int> = LinkedList<Int>()

fun bfs()
{
    result = 0
    
    while(!qx.isEmpty() && !qy.isEmpty())
    {
        val x = qx.remove()
        val y = qy.remove()
        
        visited[x][y] = true
        
        for(i in 0 until 4)
        {
            val nx = x + dx[i]
            val ny = y + dy[i]
            
            if(nx >= 0 && ny >= 0 && nx < N && ny < M)
            {
                if(map[nx][ny] == 0 && !visited[nx][ny])
                {
                    qx.add(nx)
                    qy.add(ny)
                    visited[nx][ny] = true
                    
                    map[nx][ny] = map[x][y] + 1
                    result = map[nx][ny]
                }
            }
        }
    }
    for(i in 0 until N)
    {
        for(j in 0 until M)
        {
            if(map[i][j] == 0) result = -1
        }
    }
    
    if(result > 0) println(result-1)
    else println(result)
}
fun main() {
    val s = Scanner(System.`in`)
    M = s.nextInt()
    N = s.nextInt()
    s.nextLine()
    
    for(i in 0 until N)
    {
        for(j in 0 until M)
        {
            map[i][j] = s.nextInt()
            if(map[i][j] == 1)
            {
                qx.add(i)
                qy.add(j)
            }
        }
    }
    bfs()
}