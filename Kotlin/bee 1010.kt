import java.util.*
import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
	val br = BufferedReader(InputStreamReader(System.`in`))
    val produto1 = br.readLine().split(" ")
    val produto2 = br.readLine().split(" ")

    val codigo1 = produto1[0].toInt()
    val qtd1 = produto1[1].toInt()
    val preco1 = produto1[2].toDouble()

    val codigo2 = produto2[0].toInt()
    val qtd2 = produto2[1].toInt()
    val preco2 = produto2[2].toDouble()

    println(String.format("VALOR A PAGAR: R$ %.2f", qtd1 * preco1 + qtd2 * preco2))
}
