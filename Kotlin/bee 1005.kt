import java.util.*
import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val a = br.readLine().toDouble() * 3.5
    val b = br.readLine().toDouble() * 7.5

    println(String.format("MEDIA = %.5f", (a+b)/11))
	
}
