import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.*
import kotlin.math.pow

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val a = br.readLine().toInt()
    val b = br.readLine().toInt()

    println("PROD = ${a*b}")

}
