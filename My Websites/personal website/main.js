// navbar

const hamburger = document.querySelector(".hamburger");
const navMenu = document.querySelector(".nav-links");
const head = document.querySelector(".header");

hamburger.addEventListener("click", mobileMenu);

function mobileMenu() {
    hamburger.classList.toggle("active");
    navMenu.classList.toggle("active");
    head.classList.toggle("active");
}

// typing animation

const typedTextSpan = document.querySelector(".typed-text");
const cursorSpan = document.querySelector(".cursor");

const textArray = ["Android Development", "Web Develpoment", "Coding", "DSA", "Photo Editing"]
const typingDelay = 200;
const erasingDelay = 100;
const newTextDelay = 2000;
let textArrayIndex = 0;
let charIndex = 0;

function type() {
    if (charIndex < textArray[textArrayIndex].length) {
        if (!cursorSpan.classList.contains("typing")) {
            cursorSpan.classList.add("typing");
        }
        typedTextSpan.textContent += textArray[textArrayIndex].charAt(charIndex);
        charIndex++;
        setTimeout(type, typingDelay)
    } else {
        cursorSpan.classList.remove("typing");
        setTimeout(erase, newTextDelay);
    }
}

function erase() {
    if (charIndex > 0) {
        if (!cursorSpan.classList.contains("typing")) {
            cursorSpan.classList.add("typing");
        }
        typedTextSpan.textContent = textArray[textArrayIndex].substring(0, charIndex - 1);
        charIndex--;
        setTimeout(erase, erasingDelay);
    } else {
        cursorSpan.classList.remove("typing");
        textArrayIndex++;
        if (textArrayIndex >= textArray.length) {
            textArrayIndex = 0;
        }
        setTimeout(type, typingDelay + 1000)
    }
}

window.addEventListener("load", function () {
    if (textArray.length) {
        setTimeout(type, newTextDelay)
    }
})


