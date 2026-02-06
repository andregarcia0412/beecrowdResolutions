import java.util.*
import java.io.*
import kotlin.math.floor


fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val valor = (br.readLine().toDouble() * 100).toInt()

    val notas100 = valor / 10000
    var resto = valor % 10000

    val notas50 = resto/5000
    resto %= 5000

    val notas20 = resto/2000
    resto %= 2000

    val notas10 = resto/1000
    resto %= 1000

    val notas5 = resto/500
    resto %= 500

    val notas2 = resto/200
    resto %= 200

    val moedas1 = resto/100
    resto %= 100

    val moedas50 =  resto/50
    resto %= 50

    val moedas25 = resto/25
    resto %= 25

    val moedas10 = resto/10
    resto %= 10

    val moedas05 = resto/5
    resto %= 5

    val moedas01 = resto

    println("NOTAS:\n$notas100 nota(s) de R$ 100.00\n$notas50 nota(s) de R$ 50.00\n$notas20 nota(s) de R$ 20.00\n$notas10 nota(s) de R$ 10.00\n$notas5 nota(s) de R$ 5.00\n$notas2 nota(s) de R$ 2.00")
    println("MOEDAS:\n$moedas1 moeda(s) de R$ 1.00\n$moedas50 moeda(s) de R$ 0.50\n$moedas25 moeda(s) de R$ 0.25\n$moedas10 moeda(s) de R$ 0.10\n$moedas05 moeda(s) de R$ 0.05\n$moedas01 moeda(s) de R$ 0.01")
}
