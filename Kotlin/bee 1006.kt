import java.util.*
import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val a = br.readLine().toDouble() * 2
    val b = br.readLine().toDouble() * 3
    val c = br.readLine().toDouble() * 5

    println(String.format("MEDIA = %.1f", (a+b+c)/10))
}
