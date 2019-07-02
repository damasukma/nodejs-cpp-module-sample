const fund = require('./build/Release/binding')

function sum(){
    let a= 3.1423456, b= 3.12222323232;
    for(i = 0; i < 10000000; i++){
        a +=b;
    }   
    let total = a
    return total
}

console.time('js')
sum()
console.timeEnd('js')

console.time('c++')
fund.sum()
console.timeEnd('c++')


