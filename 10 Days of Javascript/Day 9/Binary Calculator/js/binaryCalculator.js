let result = document.getElementById("res");

let btn0 = document.getElementById("btn0");
btn0.onclick = function() {
    result.innerHTML += '0';
}

let btn1 = document.getElementById("btn1");
btn1.onclick = function() {
    result.innerHTML += '1';
}

let btnClr = document.getElementById("btnClr");
btnClr.onclick = function() {
    result.innerHTML = '';
}

let btnEql = document.getElementById("btnEql");
btnEql.onclick = function() {
    var expr = result.innerHTML;
    var nums = /[01]+/g;

    expr = expr.replace(nums, function(match) {
        return parseInt(match, 2);
    });

    result.innerHTML = Math.floor(eval(expr)).toString(2);
}

let btnSum = document.getElementById("btnSum");
btnSum.onclick = function() {
    result.innerHTML += '+';
}

let btnSub = document.getElementById("btnSub");
btnSub.onclick = function() {
    result.innerHTML += '-';
}

let btnMul = document.getElementById("btnMul");
btnMul.onclick = function() {
    result.innerHTML += '*';
}

let btnDiv = document.getElementById("btnDiv");
btnDiv.onclick = function() {
    result.innerHTML += '/';
}