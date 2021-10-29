let cart = [];
let wishlist = [];

cart.push({name:"Notebook",price:50,brand:"Classmate"});
cart.push({name:"Laptop",price:40000,brand:"Dell"});
cart.push({name:"Mouse",price:700,brand:"Dell"});

wishlist.push({name:"Pen",price:500,brand:"Parker"});
wishlist.push({name:"Watch",price:2000,brand:"Titan"});
wishlist.push({name:"Mobile",price:50000,brand:"Apple"});

cart.pop();
console.log(cart);
console.log("There are "+cart.length +" items in cart");
console.log(wishlist);
console.log("There are "+wishlist.length +" items in cart");



