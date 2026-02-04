import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.*
import kotlin.math.pow

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val pi = 3.14159

    val raio = br.readLine().toDouble()

    println(String.format("A=%.4f", pi * raio.pow(2)))

}
