const tg = new window["@tolgee/core"].Tolgee({
    apiUrl: "https://app.tolgee.io",
    apiKey: "130lt9258vfl48sqkekkrlcl3q",
    inputPrefix: "%-%",
    inputSuffix: "%-%",
    watch: true
});
tg.run().then(() => {
    //Hide the loader after tolgee has ran
    document.querySelector(".loader").style.display = "none"
})

let langs = document.querySelector(".lang-select")
langs.addEventListener("change", (e) => {
    //Changing the language of our page
    tg.lang = e.target.value
})