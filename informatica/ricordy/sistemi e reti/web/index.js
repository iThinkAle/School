/*let i = 3.425
let num = 3
const k = "ciao"
let m = "moscetts"
let n = 0
let modello = `<h1>${Text}testo modello</h1>`

let Persona = {
    nome: "ale",
    cognome: "ric",
    eta: "16",
    cf: "RCRLSN09B18H501A",
}

console.log(k + " " + m + ", il tuo numero è il " + num)

m = "ale"

console.log(k + " " + m + ", il tuo numero è il " + num)

console.log(typeof i + " " + i.toFixed(2))

console.log(Persona)
console.log("codice fiscale di " + Persona.nome + " " + Persona.cognome + ": " + Persona.cf)
for(let i = 0; i < 9; i++){
    console.log(i)
    console.log(m)
}

while(n < 10){
    console.log(Persona.eta + " " + n)
    n++
}

console.log(i < 3.426)

document.getElementById("1id").innerHTML = modello

------------------------------------------------------------------------------------*/

/*-----------------1----------------*/
let a = 10

for(let i = 0; i <= a; i++){
    let j = a - i
    console.log(i + "-" + j)
}


/*-----------------2----------------*/
let string = "ciao"
let numvocali = 0

for(let i = 0; i < string.length; i++){
    if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
        numvocali++
    }
    else{
        continue
    }
}

console.log(`il numero di vocali presenti è ${numvocali}`)


/*-----------------3-----------------*/
function area(base, altezza){
    let area;

    area = base * altezza / 2

    return area
}

let base = 10
let altezza = 20

console.log(`l'area del triangolo con base ${base} e con altezza ${altezza} è pari a ${area(base, altezza)}`)


/*-----------------4-----------------*/
function fattoriale(n){
    let fatt = 1;

    for(let i = 2; i <= n; i++){
        fatt = fatt *= i
    }

    return fatt
}

let numero = 10

console.log(`il fattoriale di ${numero} è ${fattoriale(numero)}`)



/*----------------------------------
let i = 2
let x = 7 //numero da verificare
let primo = true

do{
    if(x % i == 0){
        primo = false
    }
    i++
} while(i*i<x)

if(primo){
    console.log(`il numero ${x} è primo`)
}
else(
	console.log(`il numero ${x} non è primo`)
)*/


let x = 10

do{
    
}while(x % 1 != 0 && x % x != 0)