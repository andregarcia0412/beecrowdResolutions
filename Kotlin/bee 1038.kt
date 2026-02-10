import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val (codigo, qtd) = br.readLine().split(" ").map { it.toInt() }

    val resultado = when(codigo) {
        1 -> String.format("Total: R$ %.2f", 4.0 * qtd)
        2 -> String.format("Total: R$ %.2f", 4.5 * qtd)
        3 -> String.format("Total: R$ %.2f", 5.0 * qtd)
        4 -> String.format("Total: R$ %.2f", 2.0 * qtd)
        5 -> String.format("Total: R$ %.2f", 1.5 * qtd)
        else -> ""
    }

    println(resultado)
}
