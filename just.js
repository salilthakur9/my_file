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