fun main(args: Array<String>) {
    println("Basic Filter List Function")
    val numbers = listOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20)
    val odd = numbers.filter { it % 2 != 0 }
    val even = numbers.filter { it % 2 == 0 }
    val moreThan10 = numbers.filter { it > 10 }

    println("odd: $odd")
    println("even: $even")
    println("moreThan10: $moreThan10")

    val listDay= listOf("Senin","Selasa","Senin","Kamis","Jumat","Sabtu","Minggu")
    val containsS = listDay.filter { it.contains("s") }
    val equal = listDay.filter { it == "Selasa" }
    val length = listDay.filter { it.length > 5 }
    println("contains S: $containsS")
    println("equal: $equal")
    println("length: $length")
}