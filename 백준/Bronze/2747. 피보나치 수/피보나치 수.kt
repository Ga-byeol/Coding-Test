fun main(args: Array<String>) {
    var n: Int = readLine() !!.toInt()
    var arr = Array(n+1,{0})
    arr[0] = 1
    arr[1] = 1

    for(i in 2 until n+1)
        arr[i] = arr[i-2]+arr[i-1]

    print(arr[n-1])
}