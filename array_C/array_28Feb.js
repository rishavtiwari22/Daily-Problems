const input = require('readline-sync');
const arr = input.question("Enter a list of numbers separated by commas: ").split(" ").map(Number);
let num = arr.length;

const arr1 = [];
const arr2 = [];
let sum = 0;
let max = 0;
for (let i = 0; i < num; i++){
    if (arr[i] > max) {
        max = arr[i];
    }
    if (arr1[arr[i]]) {
        arr1[arr[i]] += 1;
    } else {
        arr1[arr[i]] = 1;   
    } 

    if (arr1[arr[i]] === 1) {
        sum += arr[i]
    } else {
        arr2.push(arr[i]);
    }
}
let missingNum = ((max * (max + 1)) / 2) - sum;
arr2.push(missingNum)

console.log('Ans : ', arr2);



