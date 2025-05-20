let i = 3.425
let num = 3
const k = "ciao"
let m = "moscetts"
let n = 0
let modello = `<h1>${Text}testo modello</h1>`

let Persona = {
    nome: "ale",
    cognome: "ric",
    eta: "16",
    cf: "RCRLSN09B18H051A",
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
