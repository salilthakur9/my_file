/*console.log("Salil Thakur")*/


/*const a=6;
let b=10;
let c=null;
let d=undefined
console.log(a+"   "+b)
console.log(c)
console.log(d)*/


/*const item={
    "salil": false,
    "age": 19,
    "class": true
}
console.log(item["salil"])*/


//non premitive data types are objects.
/*const item={
    "salil":11111,
    "thakur":111111
}
console.log(item["thakur"])
console.log(item["salil"])
console.log(item["salil"], item["thakur"])*/


/*let a="salil"
let b=4
console.log(a+b)
console.log(typeof (a+b))
console.log(typeof a)
console.log(typeof b)*/


/*const dict={
    salil:"water",
    thakur:"cast",
}
console.log(dict.salil)
console.log(dict.thakur)
console.log(dict["thakur"])
console.log(dict['thakur'])*/


/*let a=10;
let b=2;
console.log("a+b= ",a+b)
console.log("a-b= ",a-b)
console.log("a*b= ",a*b)
console.log("a/b= ",a/b)
console.log("a%b= ",a%b)*/


/*a=56,b=7;
if(a>b){
    console.log("hello")
}else{
    console.log("hi")
}*/

/*let n=5;
for(let i=0;i<n;i++){
    console.log(i)
}*/


/*let a=1;
if(a===10){
    console.log("it's 10");
}else{
    console.log("it's not 10");
}*/


/*let s="Apple";
if((s[0]=='a'|| s[0]=='A') && (s.length>3)){
    console.log("good string");
}else{
    console.log("bad string");
}*/


//true for blank space in string:
/*if(" "){
    console.log("true");
}
else{
    console.log("false");
}*/


// false for empty string:
/*if(""){
    console.log("true");
}
else{
    console.log("false");
}*/



/*function same_last_digit(num1, num2){
    const lastdigit1=num1%10;
    const lastdigit2=num2%10;

    return lastdigit1===lastdigit2;
}

const num1=202;
const num2=102;
const result = same_last_digit(num1,num2);

if (result) {
    console.log(`${num1} and ${num2} have the same last digit.`);
} else {
    console.log(`${num1} and ${num2} do not have the same last digit.`);
}*/



/*function convert_num_to_str(num){
    const numString = num.toString();
    const firstDigit = numString.charAt(0);

    return parseInt(firstDigit, 10);
}

function have_first_number(num1,num2){
    const firstDigit= convert_num_to_str(num1);
    const secondDigit= convert_num_to_str(num2);

    return firstDigit===secondDigit;
}

const num1=101;
const num2=502;
const result= have_first_number(num1,num2);

if(result){
    console.log(`${num1} and ${num2} have same first digit!`);
}else{
    console.log(`${num1} and ${num2} do not have same first digit!`);
}*/



/*function convert_num_to_str(num){
    const numString = num.toString();
    const firstDigit = numString.charAt(0);

    return parseInt(firstDigit, 10);
}

function have_first_digit(num1,num2){
    const digit1= convert_num_to_str(num1);
    const digit2= convert_num_to_str(num2);

    return digit1===digit2;
}

const num1=100;
const num2=200;
const result= have_first_digit(num1,num2);

if(result){
    console.log(`${num1} and ${num2} have their first digit same!`);
}else{
    console.log(`${num1} and ${num2} does not have first digit same!`);
}*/



/*let msg="    hello    ";
let trimed=msg.trim();
console.log(trimed);*/



//this shows us that strings in js are immutable!
/*let msg="   hello     ";
let trimed= msg.trim();
console.log(trimed);
console.log(msg);
msg="hello";
console.log(msg);*/



/*const name="Salil";
let n=name.toUpperCase();
console.log(n);

const last_name="Thakur";
let l=last_name.toLowerCase();
console.log(l);*/



// to find the index of any digit within the string!
/*const msg="i love coding";
const m=msg.indexOf("i");
console.log(m);*/



/*let msg="salil   ";
let newmsg=msg.trim();
console.log("after trim: ", newmsg);
newmsg= newmsg.toUpperCase();
console.log("after uppercase: ", newmsg);
const text="      thakur";
const newtext=text.trim().toUpperCase();
console.log("so by using method chaining: ", newtext);*/



/*let a="salil thakur";
console.log(a.slice(0,-4));
console.log(a.slice(0, a.length));
console.log(a.slice(5,6));*/



/*let msg="salil thakur";
console.log(msg.replace("s", "S"));
console.log(msg.replace("salil", "SALIL"));
console.log(msg.replace("thakur", "THAKUR"));
console.log(msg.replace("salil", "SALIL").replace("thakur", "THAKUR"));*/



/*let student = ["salil", "thakur"];
console.log(student);
console.log(student[2]);
console.log(student.length);
console.log(typeof student)*/


//types to create array:
//1. let marks=[1,2,3,4,5];
//2. let names=["salil", "thakur"];
//3. let info=["salil", 12, 2.5];



/*let name=["salil", "thakur"];
name[0]="thakur";
console.log(name);
name[10]="salil_thakur";
console.log(name);*/


//ARRAY METHODS:
// 1. PUSH: add to end.
// 2. UNSHIFT: add to start.
// 3. POP: delete from end and returns it.
// 4. SHIFT: delete from start and return it.


//PUSH:
/*let cars=["audi", "lambo", "xuv"];
console.log(cars);
console.log(cars.length);

cars.push("toyota");
console.log(cars);
console.log(cars.length);

cars.push("kia");
console.log(cars);
console.log(cars.length);

//POP:
let newcar= cars.pop();
console.log(newcar);
console.log(cars);
console.log(cars.length);*/


//SHIFT:
/*let letters=["a","b","c","d"];
console.log("before using shift: ", letters);
console.log("length of the arrayb before using shift: ",letters.length);
console.log("if we use shift this is what we got deleted from array letters: ",letters.shift());
console.log("after using shift: ", letters);
console.log("length of an array after using shift: ",letters.length);*/


// let numbers=[1,2,3];
// console.log("before unshift the array numbers is: ", numbers);
// console.log("length of the araay before unshift: ",numbers.length);
// console.log("by using unshift we are adding this array element: ", numbers.unshift(0));
// console.log("after using unshift we got this araay: ", numbers);
// console.log("length of araay after using unshift is: ",numbers.length);

/*let numbers = [1,2,3];
console.log("before unshift the array numbers is: ", numbers);
console.log("length of the array before unshift: ", numbers.length);
numbers.unshift(0);  // Add 0 to the beginning of the array
console.log("by using unshift we added this element: 0");
console.log("after using unshift we got this array: ", numbers);
console.log("length of array after using unshift is: ", numbers.length);*/



/*let month = ["jan", "july", "march", "aug"];
console.log("before doing anyhting our array month looks like: ", month);
new_month = month.shift();
console.log("after using shift one time we deleted: ", new_month);
console.log("after deleting ", new_month,"we got this array: ", month);
another_month = month.shift();
console.log("after using shift second time we dlt this: ", another_month);
console.log("now after doing 2 shifts or deleting ", new_month," and ", another_month," we got this array: ", month);
add_month1= month.unshift("june");
add_month2= month.unshift("aug");
console.log("after using unshift we add ", add_month1," and ", add_month2);
console.log("the final array is : ", month);
month.unshift("april", "dec");
console.log(month);*/



/*let arr=[1,2,3,4,5,6,7,8,9,0];
a= arr.includes(2);
b= arr.includes(10);
console.log(a);
console.log(b);
c= arr.indexOf(1);
d= arr.indexOf(0);
e= arr.indexOf(11);
console.log(c);
console.log(d);
console.log(e);*/



/*let primary = ["salil", "thakur"];
let secondary = ["thakur", "salil"];

a= primary.concat(secondary);
b= secondary.concat(primary);
console.log(a);
console.log(b);

c=primary.reverse();
console.log(c);
d=primary.reverse();
console.log(d);*/



/*let arr=[1,2,3,4,5];

a=arr.slice();
b=arr.slice(2);
c=arr.slice(0);
d=arr.slice(-1);
e=arr.slice(arr.length-1);

console.log(a,b,c,d);
console.log(arr);
console.log(e);*/


// slice returns the value by making duplicate or copy of original arrray
// on the other hand splice returns the array that is changed in the original one.

/*let cars=["audi", "bmw", "xuv", "maruti"];
a=cars.splice(3);
console.log(cars);
console.log(a);
cars.splice(0, 1);
console.log(cars);
cars.push("maruti", "ferrari");
console.log(cars);
cars.splice(1,2);
console.log(cars);
cars.splice(0, 0, "toyota", "xuv", "bmw");
console.log(cars);
cars.splice(1, 0,"mercedes");
console.log(cars);*/
//SPLICE(start, deletecount,item0.....itemN);


/*let cars=["audi", "bmw", "xuv", "maruti"];
cars.sort();
console.log(cars);

let char =["a","b","1","9","3"];
char.sort();
console.log(char);

let num=[1,3,5,2,4];
num.sort();
console.log(num);*/


// for loops in js:
/*let a=15;
for(i=1;i<=a;i++){
    if(i%2!=0)console.log(i);
}*/


//object literals: they are used to store keyed collections and complex entities.
//creating objects(values) and its keys:
//syntax:
/*let object_name={
    key1:value,
    key2:value,
    key3:value and soo on..
};*/


/*const student={
    name: "salil",
    sem: 3,
    age:19
};
console.log(student);*/


/*const post={
    user_name: "salilthakur_9",
    no_of_posts: 10,
    n0_of_likes: 20
};
console.log(post);
console.log(post["user_name"]);
console.log(post.user_name);*/


/*const obj={
    1: "a",
    2: "b",
    true : "d",
    null : "e",
    undefined : "s"
};
console.log(obj);
console.log(obj[1]);
console.log(obj[2]);
console.log(obj[null]);
console.log(obj.1);*/ // it will not work cause dot object cant convert key into string.



//how to add and update in js objects and literal:

/*const student= {
    name: "salil",
    age: 19
};

console.log("before updating name: ", student.name);
student.name="salil thakur";
console.log("after updating name: ", student.name);
student.gender="male";
console.log("after adding gender key in the obj: ", student);
delete student.gender;
console.log(student);*/



/*const obj={
    student1:{
        name:"salil",
        age:19
    },
    student2:{
        name:"aryan",
        age:18
    },
    student3:{
        name:"raman",
        age:19
    }
};
console.log(obj);
console.log(obj.student1);
console.log(obj.student2.age);
console.log(obj.student3.name);
delete obj.student3;
console.log(obj);
obj.student1.gender="male";
console.log(obj.student1);
console.log(obj);*/



/*const arr=[
    {
        name:"salil",
        age:19,
        city:"ch"
    },
    {
        name:"thakur",
        age:18,
        city:"abc" 
    },
    {
        name:"coc",
        age:20,
        city:"xyz" 
    }
]

console.log(arr);
console.log(arr[0]);
arr[0].gender ="male";
console.log(arr);
arr[0].city="dasuya";
console.log(arr[0]);*/



//MATHS OBJECT:
//PROPERTIES: Math.PI , Math.E
//METHODS: Math.abs(n) , Maths.pow(a,b) , Math.floor(n) , Math.ceil(n) , Math.random()
/*Math;
console.log(Math);

Math.PI;
console.log(Math.PI);

Math.E
console.log(Math.E);

let a=Math.abs(-12.5);
console.log(a);

let b=Math.pow(5,2);
console.log(b);

let c=Math.floor(5.000001);
console.log(c);
//nearest integer floor value

let d= Math.ceil(5.01);
console.log(d);

e=Math.random();
console.log(e);*/


// math.random() , it generates any number in the range of 0 to 1 but not 0 and nor 1.
// therefore to hgenerate it in the range of : eg. 1 to 10 so we can write it as: [math.random()*10], for 1 to 10 ; [math.random()*5], for 1 to 5.

/*let a= Math.random()*100;
console.log(a);
//similarly:
let b=Math.random()*1000;
console.log(b);
// to generate a random number in btw 0 to 10:
let c= Math.floor(Math.random()*10)+1;
console.log(c);*/


//function:
/*function hello(){
    console.log("hi");
}
hello();*/


// if we fill the vlaue of an argument 1 so it will print it but we cant do like fill the value of argument 2 and let it remain undefined argument 1 its false case.
/*function pname(name,age){
    console.log(`${name}'s age is ${age}`);
}
pname("salil thakur"); */



/*function func(n){
    for(i=n;i<=n*10;i+=n){
        console.log(i);
    }
}
func(20);*/



/*function func(n){
    let sum=0;
    for(let i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
console.log(func(4));*/


//concatination of a string.
/*let str=["salil ","thakur"];
function func(str){
    let result="";
    for(let i=0;i<str.length;i++){
        result += str[i];
    }
    return result;
}
console.log(func(str));*/



/*let str=["salil"," thakur"];
function func(str){
    let result="";
    for(i =0;i<str.length;i++){
        result +=str[i];
    }return result;
}
console.log(func(str));*/



//variablles that are declared in the function is not variable outside the scope of function.

//print the number of positive ages in an array:
/*const ages=[11,12,13,14,15,16];
for(let i=0;i<ages.length;i++){
    if(ages[i]%2==0){
        console.log(ages[i]);
    }
}*/


/*const person1 ="salil";
const gender1= "male";

const person2="raman";
const gender2="male";*/

/*const personArray = ["salil", "thakur","sakshi"];
const genderArray = ["male", "male","female"];

for(let i=0;i<personArray.length;i++){
    if(genderArray[i]=="female"){
        console.log(personArray[i]);
    }
}*/
//the given code above can also be written as:
/*const personArray = ["salil","thakur","sakshi"];
const genderArray = ["male","male","female"];

const total_number_of_arraymembers = personArray.length;

for(let i=0;i<total_number_of_arraymembers;i++){
    if(genderArray[i]=="male"){
        console.log(personArray[i]);
    }
}*/



/*const array1=[{
    first_name: "salil",
    gender:"male"
},
{
    first_name:"thakur",
    gender: "male"
}
]
const l=array1.length;

for(let i=0;i<l;i++){
    if(array1[i]["gender"]=="male"){
        console.log(array1[i]["first_name"]);
    }
}*/



/*let num = 42;
let str = "Hello, World!";
let bool = true;
let obj = { name: "Alice" };
let arr = [1, 2, 3];
let func = function() {};
let und;
let nul = null;
let sym = Symbol("symbol");
let bigint = 9007199254740991n;

console.log(typeof num);
console.log(typeof str);
console.log(typeof bool);
console.log(typeof obj);
console.log(typeof arr);
console.log(typeof func);
console.log(typeof und);
console.log(typeof nul);
console.log(typeof sym);
console.log(typeof bigint);*/

/*let a = -128;           
let b = 128;           
let result1 = a >> 2;  
let result2 = b >> 2;  
let result3 = a >>> 2;  
let result4 = b >>> 2;  
console.log(result1);
console.log(result2);
console.log(result3);
console.log(result4);*/



/*class Animal {
    constructor(name, legscount, speaks){
        this.name=name;
        this.legscount=legscount;
        this.speaks=speaks;
    }
    speak(){
        console.log(this.name +" said "+ this.speaks);
    }
}
let dog= new Animal ("dog", 4,"bhow bhow");
let cat= new Animal ("cat", 3,"meow meow");

dog.speak();
cat.speak();*/


/*const currentDate = new Date();
console.log(currentDate.getDate());
console.log(currentDate.getDay());
console.log(currentDate.getMonth());
console.log(currentDate.getFullYear());
console.log(currentDate);
console.log(currentDate.getTime());*/



/*function calculate(){
    let a =0;
    for(i=0;i<1000000000;i++){
        a=a+1;
    }
    return a;
}

const beforeDate= new Date();
const beforeTimeInMS= beforeDate.getTime();
calculate();
const afterDate= new Date();
const afterTimeInMS= afterDate.getTime();

console.log((afterTimeInMS-beforeTimeInMS)/1000);*/



/*function calc(n){
    let a=0;
    for(i=0;i<n;i++){
        a=a+i;
    }
    return a;
}
const before = new Date();
const before_time = before.getTime();

calc(100000000);

const after = new Date();
const after_time = after.getTime();

console.log((after_time - before_time)/1000);*/



// JSON = javascript object notation

/*function square(N){
    return N*N;
}

function sumof_squares(a,b){
    const val1 = square(a);
    const val2 = square(b);
    return val1+val2;
}
const ans0 = square(2);
console.log(ans0);
const ans = sumof_squares(1, 2);
console.log(ans);*/



/*const fs = require('fs');

fs.promises.readFile('example.text', 'utf-8')
  .then(data => {
    console.log(data);
  })
  .catch(err => {
    console.error(err);
  });

console.log('salil');

let a = 0;
for (let i = 0; i < 100000000000; i++) {
  a++;
}

console.log('salil thakur');*/


//syncronous function
/*function find(n){
    let ans =0;
    for(let i=0;i<n;i++){
        ans+=i;
    }
    return ans;
}
console.log(find(1000))*/



//Asyncronous function
/*function find(n){
    let ans =0;
    for(let i=0;i<n;i++){
        ans+=i;
    } return ans;
}
function findtill100(){
    console.log(find(100));
}
setTimeout(findtill100, 2000)
console.log("salil");*/



/*function sum(n){
    let ans=0;
    for(let i =0;i<n;i++){
        ans+=i;
    }return ans;
}
function till5(){
    console.log(sum(5));
}
function till10(){
    console.log(sum(10));
}

setTimeout(till5, 2000);
console.log("salil");
setTimeout(till10, 1000);
console.log("Thakur");*/



/*const fs = require("fs")  //fs (file system) = is the node js librery which helps or allow us to to checkout and read the files or write for the file.
fs.readFile("a.txt","utf-8", function(err, data){
    console.log(data);
})
console.log("hello");*/



/*const fs = require("fs")
fs.readFile("a.txt", "utf-8", function(err, data){
    console.log(data);
})
console.log("hi there");
let a=0;
for(let i =0;i<1000000000;i++){
    a++;
}
console.log("hello buddy");*/



/*const fs = require('fs');

function KiratsReadFile(){
    console.log("inside of kriat read file: ");
    return new Promise(function(resolve){
        console.log("inside promise");
        fs.readFile("a.txt", "utf-8", function(err, data){
            console.log("before resolve");
            resolve(data);
        });
    });
}
function onDone(data){
    console.log(data);
}

var a= KiratsReadFile();
a.then(onDone);*/



let input_array = [1,2,3,4,5,6,7,8,9,10];
let even_array = [];
let odd_array = [];

input_array.forEach(num=>{
    if(num%2===0){
        even_array.push(num);
    }else{
        odd_array.push(num);
    }
})

console.log("even array: ["+even_array+"]");
console.log("odd array: ["+odd_array+"]");