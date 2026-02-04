import java.util.*
import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {

    val br = BufferedReader(InputStreamReader(System.`in`))
    val nome = br.readLine()
    val salario = br.readLine().toDouble()
    val comissao = br.readLine().toDouble() * 0.15

    println(String.format("TOTAL = R$ %.2f", (salario + comissao)))
}
