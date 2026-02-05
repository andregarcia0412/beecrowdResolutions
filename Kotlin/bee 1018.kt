import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val valor = br.readLine().toInt()

    val notas100 = valor/100;
    var resto = valor % 100

    val notas50 = resto/50
    resto %= 50

    val notas20 = resto/20
    resto %= 20

    val notas10 = resto/10
    resto %= 10

    val notas5 = resto/5
    resto %= 5

    val  notas2 = resto/2
    resto %= 2

    val notas1 = resto

    println(valor)
    println(String.format("$notas100 nota(s) de R$ 100,00\n$notas50 nota(s) de R$ 50,00\n$notas20 nota(s) de R$ 20,00\n$notas10 nota(s) de R$ 10,00\n$notas5 nota(s) de R$ 5,00\n$notas2 nota(s) de R$ 2,00\n$notas1 nota(s) de R$ 1,00"))

}
