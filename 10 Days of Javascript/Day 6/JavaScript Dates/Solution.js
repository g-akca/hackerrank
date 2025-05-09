'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    let date = new Date(dateString);
    let day = date.getDay();
    let dayName;
    
    if (day == 0) {
        dayName = "Sunday";
    }
    else if (day == 1) {
        dayName = "Monday";
    }
    else if (day == 2) {
        dayName = "Tuesday";
    }
    else if (day == 3) {
        dayName = "Wednesday";
    }
    else if (day == 4) {
        dayName = "Thursday";
    }
    else if (day == 5) {
        dayName = "Friday";
    }
    else {
        dayName = "Saturday";
    }
    
    return dayName;
}


function main() {
    const d = +(readLine());
    
    for (let i = 0; i < d; i++) {
        const date = readLine();
        
        console.log(getDayName(date));
    }
}