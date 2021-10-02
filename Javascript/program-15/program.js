`class is the blurprint used for object creation.
* class B inherits properties and methods from parent class A.
* And Class B overwrites fun() method.`

class A {
    constructor (name, age) {
        this.name = name;
        this.age  = age;
    }
    fun() {
        console.log(`Saying hello to ${this.name}`);
    }
}


class B extends A {
    constructor (name, age, gender) {
        super(name, age);
        this.gender = gender;
        // this.fun();
    }
    fun() {
        console.log(`Saying hello to ${this.name} from B`);
    }
    fun2() {
        console.log(`Saying hello to ${this.name} from B fun 2`);
    }
}


class C extends B {
    constructor (name, age, gender, section) {
        super(name, age, gender);
        // this.name = "fixed";
        this.section = section;
    }
    fun() {
        console.log(`Saying hello to ${this.name} from C`);
    }
}


let instance = new A("demo", 20);
let instance1 = new B("demo", 20, "male");
let instance2 = new C("Cclass", 11, "abc", "c");

console.log(instance1.name);
console.log(instance1.gender);
instance1.fun();

console.log(instance2.name);
console.log(instance2.gender);
instance2.fun();
instance2.fun2();


console.log(A.prototype);