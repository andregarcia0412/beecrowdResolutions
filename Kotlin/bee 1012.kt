import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.pow

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val valores = br.readLine().split(" ")
    val a = valores[0].toDouble()
    val b = valores[1].toDouble()
    val c = valores[2].toDouble()

    println(String.format("TRIANGULO: %.3f", (a*c)/2))
    println(String.format("CIRCULO: %.3f", 3.14159 * c.pow(2)))
    println(String.format("TRAPEZIO: %.3f", ((a+b)*c)/2))
    println(String.format("QUADRADO: %.3f", b.pow(2)))
    println(String.format("RETANGULO: %.3f", a*b))
}
