// string concatenation
let a = 2 + 2 + '1';
console.log(a); // 41


let b = '1' + 2 + 2;
console.log(b); // 122

// unary conversion using +
let c = "";
console.log(+c); // 0


let val1 = "2";
let val2 = "3";
console.log(+val1 + +val2); // 5

console.log(+false);


// chaining assignment
let x,y,z;
x = y = z = 5;
console.log(x,y,z); // 5 5 5

// increment/decrement
let counter = 5;
console.log(++counter); // 6
console.log(counter++); //6
console.log(counter); //7
console.log(--counter); // 6
console.log(counter--); //6
console.log(counter); //5


//comma operators
let comma = (1+2, 3+4);
console.log(comma); // 7 (returns only the last result)

let sym1 = Symbol("id");
let sym2 = Symbol.for("id"); // if doesn't exist creats new one

let str = "Hello \rworls";
console.log(str)


// Example to find common elements between 2 arrays.
let ar1 = [1,2,3,4,5];
let ar2 = [4,5,6];

let ar = ar1.filter(function(val) {
    for(let ke of this) {
        if (val == ke)
        return true;
    }
}, ar2);

console.log( ar );