import java.util.*

var n = 0
var m = 0
var graph = Array(101) {Array<Int>(101){0}}

fun floyd()
{
    for(k in 1..n)
    {
        for(i in 1..n)
        {
            for(j in 1..n)
            {
                if(i==j) continue
                else if (graph[i][k] != 0 && graph[k][j] != 0)
                {
                    if (graph[i][j] == 0) graph[i][j] = graph[i][k] + graph[k][j];
                    else graph[i][j] = Math.min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }
}
fun main() {
    val s = Scanner(System.`in`);
    n = s.nextInt()
    m = s.nextInt()
    
    for(i in 0..m-1)
    {
        val x = s.nextInt()
        val y = s.nextInt()
        graph[x][y] = 1
        graph[y][x] = 1
    }
    floyd()
    var result = 987654321
    var person = 0
    
    for(i in 1..n)
    {
        var sum = 0
        for(j in 1..n) sum += graph[i][j]
        if(result>sum)
        {
            result = sum
            person = i
        }
    }
    print(person)
}