const input = require('readline-sync');
let num = input.questionInt("Enter a number: ");
const arr = input.question("Enter a list of numbers separated by commas: ").split(" ").map(Number);

const obj = {};
for (let i = 0; i < arr.length; i++) { 
    if (obj[arr[i]]) {
        obj[arr[i]] += 1;
        console.log(obj[i]); 
    } else {
        obj[arr[i]] = 1;
    }
}

const arr1 = Object.values(obj);
const arr2 = Object.keys(obj);
let max = arr1[0];
let val;
for (let i = 1; i < arr1.length; i++) {
    if (arr1[i] < max) {
        max = arr1[i];
        val = arr2[i];
    }
}
console.log(val, max);

