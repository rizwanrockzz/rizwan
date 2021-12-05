const menu = document.querySelector("#mobile-menu")
const menuLinks = document.querySelector(".navbar-menu")
const navLogo = document.querySelector(".navbar-logo")
const body = document.querySelector("body")

const mobileMenu = () =>{
    menu.classList.toggle("is-active")
    menuLinks.classList.toggle("active")
    body.classList.toggle("active")
}

menu.addEventListener("click",mobileMenu)

// animations

gsap.registerPlugin(ScrollTrigger);

gsap.from('.animate',{
    duration:0.6,
    stagger:0.3,
    y:-150,
    opacity:0
});