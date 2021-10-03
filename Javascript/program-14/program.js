`Constructor Functions
* Create multiple objects with same body using a constructor function`

function Person(name, age){
    this.name = name;
    this.age = age;
    this.greeting = function() {
        console.log(`hi ${name}`);
    }
}


// defining methods outside the constructor 
Person.hey = function() {console.log("hello")};
Person.hey();
Person.prototype.welcome = function() {
    console.log(`welcom ${this.name}`);
}


let obj = new Person('abc', 21);
obj.gender = function(gen) {
    console.log(this.name, gen);
};
obj.gender("male");
console.log(obj);
console.log(obj["name"]);
console.log(obj.age);
obj.greeting();
obj.welcome();


function Human(name, age, gender) {
    Person.call(this, name, age);
    this.gender = gender;
    this.greet = function() {
        console.log(`hello ${this.name}`);
    }
}

let obj2 = new Human('abc', 21, "male");
console.log(obj);
let obj3 = new Human('abcd', 22, "female");
console.log(obj2);

let test1 = {
  string: "hey",
}
let test2 = {
  number: 50,
}

// copying objects
Object.assign(test1, test2);
test2.number = 60;
console.log(test1);
console.log(test2);

console.log('test' in test1);

// obj2.greet();
// obj2.greeting();
// obj3.greeting();

// console.log("name" in obj);

function a() {
    console.log("12");
    return function() {
        return 1;
    }
}
let b = a();
console.log(b);