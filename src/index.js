import "./style.css";

const pages = PAGES;
const app = document.getElementById("app");
const pageList = document.createElement("ul");

pages.forEach((page) => {
  const anchor = document.createElement("a");
  anchor.innerText = page;
  anchor.setAttribute("href", `${page}.html`);
  const item = document.createElement("li");
  item.appendChild(anchor);
  pageList.appendChild(item);
});

app.appendChild(pageList);
