function myFunction() {
    var x = document.getElementById("res-nav");
    if (x.className === "navbar") {
        x.className += " responsive";
    }
    else {
        x.className = "navbar";
    }
}

// function myFunction() {
//     var x = $("#res-nav");
//     if(x.hasClass ="navbar"){
//         x.addClass("responsive");
//     }
//     else{
//         x.addClass("navbar");
//     }

// }