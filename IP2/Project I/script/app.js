const cityLinks = document.querySelectorAll('.city-links');
const hovercaps = document.querySelectorAll('.hovercap');
const pages = document.querySelectorAll('.pages');

let arrowsLeft = document.querySelector("#left");
let arrowsRight = document.querySelector("#right");

arrowsLeft.addEventListener('click', toTheLeft);
arrowsRight.addEventListener('click', toTheRight);

function toTheRight() {
    const lastImage = cityLinks[cityLinks.length - 1];
    const lastDesc = hovercaps[hovercaps.length - 1].textContent;
    const lastPage = pages[pages.length - 1].getAttribute("href");

    for (let i = cityLinks.length - 1; i > 0; i--) {
        cityLinks[i].src = cityLinks[i - 1].src;
        cityLinks[i].name = cityLinks[i - 1].name;
        hovercaps[i].textContent = hovercaps[i - 1].textContent;
        pages[i].setAttribute("href", pages[i - 1].getAttribute("href"));
    }

    cityLinks[0].src = lastImage.src;
    cityLinks[0].name = lastImage.name;
    hovercaps[0].textContent = lastDesc;
    pages[0].setAttribute("href", lastPage);
}

function toTheLeft() {
    const firstImage = cityLinks[0];
    const firstDesc = hovercaps[0].textContent;
    const firstPage = pages[0].getAttribute("href");

    for (let i = 0; i < cityLinks.length - 1; i++) {
        cityLinks[i].src = cityLinks[i + 1].src;
        cityLinks[i].name = cityLinks[i + 1].name;
        hovercaps[i].textContent = hovercaps[i + 1].textContent;
        pages[i].setAttribute("href", pages[i + 1].getAttribute("href"));
    }

    cityLinks[cityLinks.length - 1].src = firstImage.src;
    cityLinks[cityLinks.length - 1].name = firstImage.name;
    hovercaps[hovercaps.length - 1].textContent = firstDesc;
    pages[pages.length - 1].setAttribute("href", firstPage);
}