'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}


/*
 * Complete the 'findSum' function below.
 *
 * The function is expected to return a LONG_INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. 2D_INTEGER_ARRAY queries
 */

function findSum(numbers, queries) {
    let  result  =   [];    
    let  subArraySum  =   [];    
    let  countZero  =  numbers[0]  ==  0  ?  1  :  0;    
    let  zeroArr  =   [];    
    zeroArr[0] =  countZero;    
    subArraySum[0]  =  numbers[0];    
    for (let  i = 1;  i <=  numbers.length - 1;  i++)  {               
        if (numbers[i]  ==  0) {            
            countZero++;            
            zeroArr[i]  =  countZero;        
        } 
        else  {            
            zeroArr[i]  =  countZero;         
        }         
        subArraySum[i]  = subArraySum[i - 1]  +  numbers[i];    
  }    

    for (let  q  of  queries)  {            
        if (q.length  ==  3)  {            
        let  i  =  q[0];            
        let  j  =  q[1];            
        let  x  =  q[2];            
        let  sum  =  0;                       
        sum  =  subArraySum[j - 1] - ((i - 2  <  0 )  ?  0  :  subArraySum[i - 2]);             
        sum  =  sum  +  (zeroArr[j - 1] - ((i - 2  <  0 )  ?  0  :  zeroArr[i - 2])) * x;            
        result.push(sum);        
        }                  
  }    
    return  result;
}

function main() {
