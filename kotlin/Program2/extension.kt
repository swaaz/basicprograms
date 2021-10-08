fun main(args: Array<String>) {
    println("Basic Extension Function")
    val plus = 2.plusNumber(2)
    val minus = 2.minusNumber(2)
    println("2 + 2 : $plus")
    println("2 - 2 : $minus")
}

fun Int.plusNumber(number: Int): Int {
    return this + number
}

fun Int.minusNumber(number: Int): Int {
    return this - number
}