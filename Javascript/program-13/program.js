`Asyncronous function
async function executes after the main thread is done with execution`

console.log("first");

async function fun() {
  let promise = new Promise((resolve, reject) => {
    setTimeout(() => resolve("Executed this!"), 2000);
  });

  let result = await promise;
  console.log(result);
};

fun();

console.log("first");
